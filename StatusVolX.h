@interface UIApplication (ex)
	- (UIStatusBar *)statusBar;
@end

@interface UIStatusBar : UIView
	- (void)requestStyle:(int)arg1;
	- (void)setOrientation:(int)arg1;
	@property(nonatomic) UIStatusBarWindow *statusBarWindow;
	+ (float)heightForStyle:(int)arg1 orientation:(int)arg2;
@end

@interface UIWindow (ex)
	- (void)_setSecure:(BOOL)arg1;
	- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
	- (void)_updateToInterfaceOrientation:(int)arg1 animated:(BOOL)arg2;
	- (void)setHidden:(BOOL)arg1;
@end

@interface svolWindow : UIWindow
	- (void)fixSvolWindow;
@end

@interface StatusVolX : NSObject{
	int volume;
	NSTimer *hideTimer;
	svolWindow *sVolWindow;
	BOOL svolCloseInterrupt;
	BOOL isAnimatingClose;
}

	@property(nonatomic) BOOL showingVolume;

	- (id)init;
	- (void)showVolume:(float)vol;
	- (NSString *)volumeString;
	- (void)initializeWindow;
@end
	
@interface VolumeControl : NSObject
	+ (id)sharedVolumeControl;
	- (float)getMediaVolume;
	- (float)volume;
@end
	
@interface SBStatusBarStateAggregator
	+ (id)sharedInstance;
	- (void)_resetTimeItemFormatter;
	- (void)_updateTimeItems;
	- (void)_restartTimeItemTimer;
@end
	
@interface SpringBoard : UIApplication
	- (id)_accessibilityFrontMostApplication;
	- (id)_keyWindowForScreen:(id)arg1;
@end
	
@interface SBApplication
	- (_Bool)statusBarHiddenForCurrentOrientation;
@end
	
@interface UIStatusBarWindow : UIWindow
	+ (struct CGRect)statusBarWindowFrame;
	- (id)initWithFrame:(struct CGRect)arg1;
	- (int)orientation;
@end