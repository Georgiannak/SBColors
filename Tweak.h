#import <UIKit/UIKit.h>
#import <Cephei/HBPreferences.h>

BOOL enabled = YES;
HBPreferences *prefs;

@interface _UIStatusBarPersistentAnimationView : UIView
@end

@interface _UIStatusBarSignalView : _UIStatusBarPersistentAnimationView
@property (nonatomic, copy) UIColor *inactiveColor;
@property (nonatomic, copy) UIColor *activeColor;
@end

@interface _UIStatusBarWifiSignalView : _UIStatusBarSignalView
@end

@interface _UIStatusBarImageView : UIImageView
@property (nonatomic, retain) UIColor *tintColor;
@end

@interface _UIStatusBarStringView : UILabel
@end

@interface _UIBatteryView : UIView
@property (nonatomic, copy) UIColor *bodyColor;
@property (nonatomic, copy) UIColor *fillColor;
@end

@interface _UIStaticBatteryView : _UIBatteryView
@end