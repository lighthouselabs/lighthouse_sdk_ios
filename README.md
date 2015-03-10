# Lighthouse iOS SDK

## Getting Started
The Lighthouse SDK allows you to contextually enable your application.

## Requirements

The Lighthouse SDK requires iOS 7.0 or above running on iPhone 4S or newer and the Apple provided CoreLocation and CoreBluetooth frameworks linked.

## Integration

1. Add the files to your project: File -> Add Files to "your project name"
  1. Find and select `Lighthouse.framework`
  2. Make sure that Copy items into destination folder (if needed) is checked
  3. Set Folders to Create groups for any added folders
  4. Select all targets that you want to add the SDK to

2. Verify that `Lighthouse.framework` has been added to the Linked Frameworks and Libraries for the targets you want to use the SDK with
  1. Select your Project in the Project Navigator
  2. Select the target you want to enable the SDK for
  3. Select the General tab

3. If `Lighthouse.framework` is not listed, drag and drop the library from your Project
Navigator to the Linked Frameworks and Libraries area

4. Verify that the required frameworks have been added to the Linked Frameworks and Libraries for the targets you want to use the SDK with
  1. Select your Project in the Project Navigator
  2. Select the target you want to enable the SDK for
  3. Select the General tab
  4. If the following frameworks are not listed in the Linked Frameworks and Libraries area, for each framework click + and select them in the dialog
    * `CoreLocation.framework`
    * `CoreBluetooth.framework`
    * `SystemConfiguration.framework`
    * `libsqlite3.dylib`

5. Add -ObjC to Other Linker Flags for your project
  1. Select your Project in the Project Navigator
  2. Select the target you want to enable the SDK for
  3. Select the Build Settings tab
  4. In the Linking section add -ObjC to Other Linker Flags

6. Add Location Updates to the Background Modes for the targets you want to use the SDK with
  1. Select your Project in the Project Navigator
  2. Select the target you want to enable the SDK for
  3. Select the Capabilities tab
  4. In the Background Modes section tick Location Updates

7. In your Application Delegate:
  1. Import Lighthouse: `#import <Lighthouse/Lighthouse.h>`
  2. In your `-application:didFinishLaunchingWithOptions:` method, initialise Lighthouse with your Client Key and Secret.

## Location

When you've given your location pitch and you're happy for the user to be prompted to share their location go ahead and tell Lighthouse.

`[[Lighthouse sharedInstance] requestLocationAccess];`

NB. Lighthouse requires "Always" permission and you will need to add NSLocationAlwaysUsageDescription to your info.plist for this.

## Notifications

In order for Lighthouse to send notifications to your users you will need to request their permission (iOS 8 onwards).

```
if ([UIApplication instancesRespondToSelector:@selector(registerUserNotificationSettings:)]){
  [application registerUserNotificationSettings:[UIUserNotificationSettings settingsForTypes:UIUserNotificationTypeAlert|UIUserNotificationTypeBadge|UIUserNotificationTypeSound categories:nil]];
}
```
