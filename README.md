# Compiz
> OpenGL window and compositing manager

## Original information

Compiz is an OpenGL compositing manager that use GLX_EXT_texture_from_pixmap
for binding redirected top-level windows to texture objects. It has a flexible
plug-in system and it is designed to run well on most graphics hardware. 

David Reveman
davidr@novell.com


## About this fork

For some reasons, new version of compiz (0.9.x) is known as an unstable window manager. So we are planning to maintain a stable old version of compiz as the window manager of Subway DE. 

## TODO

- Remove `gtk-window-decorator` and `kde-window-decorator` (use emerald)

- Integrate with `compiz-fusion-plugins-main`, `compiz-fusion-plugins-extra` and `compiz-fusion-plugins-experimental`

- Remove useless plugins which have no practical value

- Enhance code of `commands` plugin