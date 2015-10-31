export ARCHS = armv7 armv7s arm64
export ADDITIONAL_OBJCFLAGS = -fobjc-arc

include theos/makefiles/common.mk

TWEAK_NAME = StatusVolX StatusVolXKit
StatusVolX_FILES = StatusVolX.xm
StatusVolX_FRAMEWORKS = UIKit
StatusVolXKit_FILES = StatusVolXKit.xm
StatusVolXKit_FRAMEWORKS = QuartzCore CoreGraphics UIKit

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"
