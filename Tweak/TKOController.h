#import <UIKit/UIKit.h>
#import <objc/runtime.h>

#import "CommonHeaders.h"
#import "TKOView.h"
#import "TKOBundle.h"

@interface TKOController : NSObject
@property(nonatomic, retain) NSMutableArray *bundles;
@property(nonatomic, retain) TKOView *view;

// Notification list controller
@property(nonatomic, retain) NCNotificationStructuredListViewController *nlc;
@property(nonatomic, retain) NCNotificationDispatcher *dispatcher;
@property(nonatomic) BOOL isTkoCall;

// Customization
@property(nonatomic, retain) NSNumber *cellStyle;

+ (TKOController *) sharedInstance;
- (void) insertNotificationToNlc:(NCNotificationRequest *)req;
- (void) insertAllNotificationsWithBundleID:(NSString *)bundleID;

- (void) removeNotificationFromNlc:(NCNotificationRequest *)req;
- (void) hideAllNotificationsWithBundleID:(NSString *)bundleID;
- (void) removeAllNotificationsWithBundleID:(NSString *)bundleID;
- (void) hideAllNotifications;


// NLC
- (void) insertNotificationRequest:(NCNotificationRequest *)req;
- (void) modifyNotificationRequest:(NCNotificationRequest* )req;
- (void) removeNotificationRequest:(NCNotificationRequest *)req;
@end