#import <Foundation/Foundation.h>
#import <UserNotifications/UserNotifications.h>

@interface SEGAppboyHelper : NSObject

- (void)applicationDidFinishLaunching;
- (void)saveUserNotificationCenter:(UNUserNotificationCenter *)center
              notificationResponse:(UNNotificationResponse *)response NS_AVAILABLE_IOS(10_0);
- (void)userNotificationCenter:(UNUserNotificationCenter *)center
  receivedNotificationResponse:(UNNotificationResponse *)response NS_AVAILABLE_IOS(10_0);

@end
