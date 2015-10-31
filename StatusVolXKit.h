@interface UIStatusBarForegroundStyleAttributes : NSObject
	- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(int)arg3 withStrength:(float)arg4;
	- (id)textColorForStyle:(int)arg1;
	- (int)legibilityStyle;
@end

@interface UIStatusBarTimeItemView : UIView
	- (UIImage *)makeVolumeImageForState:(int)state withColor:(UIColor *)color;
	@property (nonatomic) BOOL _lightStyleRenderConfig;
	@property(readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle;
	- (int)textStyle;
@end

@interface _UILegibilityImageSet
	+ (id)imageFromImage:(id)arg1 withShadowImage:(id)arg2;
@end