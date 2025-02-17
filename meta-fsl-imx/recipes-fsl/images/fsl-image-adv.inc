# Advantech package
IMAGE_FEATURES += " ssh-server-openssh "
IMAGE_INSTALL += " modules-load "
#IMAGE_INSTALL += " giflib fbv stress lirc tools"
IMAGE_INSTALL += " giflib stress "
IMAGE_INSTALL += " ppp ntp e2fsprogs cronie e2fsprogs-e2fsck e2fsprogs-resize2fs inetutils inetutils-telnet inetutils-telnetd "
IMAGE_INSTALL += " packagegroup-core-eclipse-debug "

# Native Compiler
IMAGE_INSTALL += " packagegroup-sdk-target "

IMAGE_INSTALL += " boottimes-script st quectel-script 3g-script stress-script xterm mdio-tool "

# Depends on projects
IMAGE_INSTALL_append_imx6qrom5420a1 = " ecuevent keyevent"
IMAGE_INSTALL_append_imx6qrom5420b1 = " ecuevent keyevent"
IMAGE_INSTALL_append_imx6dlrom5420b1 = " ecuevent keyevent"
IMAGE_INSTALL_append_imx6qrom3420a1 = " keyevent"
IMAGE_INSTALL_append_imx6qrom7420a1 = " keyevent"
IMAGE_INSTALL_append_imx6qprom7421a1 = " ecuevent keyevent"
IMAGE_INSTALL_append_imx6qrom7421a1 = " ecuevent keyevent"
IMAGE_INSTALL_append_imx6dlrom7421a1 = " ecuevent keyevent"

# Browser
#IMAGE_INSTALL += " firefox "
