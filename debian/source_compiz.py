'''apport package hook for compiz

(c) 2009 Canonical Ltd.
Author: Brian Murray <brian@ubuntu.com>
'''

from apport.hookutils import *
from os import path

def add_info(report):
    # Build System Environment
    report['system'] = "distro = Ubuntu, architecture = %s, kernel = %s" % (command_output(['uname','-m']), command_output(['uname','-r']))

    attach_related_packages(report, [
            "xserver-xorg",
            "libgl1-mesa-glx",
            "libdrm2",
            "xserver-xorg-video-intel",
            "xserver-xorg-video-ati"
            ])

    attach_file_if_exists(report, path.expanduser('~/.xsession-errors'), 'XsessionErrors')
    attach_file(report, '/etc/X11/xorg.conf', 'XorgConf')
    attach_file_if_exists(report, '/var/log/Xorg.0.log', 'XorgLog')
    attach_file_if_exists(report, '/var/log/Xorg.0.log.old', 'XorgLogOld')
    
    attach_hardware(report)
    
    # One-line description of display hardware
    report['PciDisplay'] = pci_devices(PCI_DISPLAY).split('\n')[0]

    # For resolution/multi-head bugs
    report['Xrandr'] = command_output(['xrandr', '--verbose'])
    attach_file_if_exists(report,
                          os.path.expanduser('~/.config/monitors.xml'),
                          'monitors.xml')

    # GLX
    report['glxinfo'] = command_output(['glxinfo'])

    # Plugins
    report['CompizPlugins'] = command_output(['gconftool-2', '--get', '/apps/compiz/general/allscreens/options/active_plugins'])

    # User configuration
    report['GconfCompiz'] = command_output(['gconftool-2', '-R', '/apps/compiz'])

## DEBUGING ##
if __name__ == '__main__':
    report = {}
    add_info(report)
    for key in report:
        print '[%s]\n%s' % (key, report[key])
