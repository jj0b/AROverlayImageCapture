#import <UIKit/UIKit.h>

@class AROverlayViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet AROverlayViewController *viewController;

@end
