# Lighthouse iOS SDK

## Getting Started
The Lighthouse SDK allows you to contextually enable your application.

## Requirements

The Lighthouse SDK requires iOS 7.0 or above running on iPhone 4S or newer and the Apple provided CoreLocation and CoreBluetooth frameworks linked.

## Integration

1. Add the files to your project: File -> Add Files to "your project name"
  1. Find and select the `Lighthouse.embeddedframeworkfolder`
  2. Make sure that Copy items into destination folder (if needed) is checked
  3. Set Folders to Create groups for any added folders
  4. Select all targets that you want to add the SDK to

2. Verify that `Lighthouse.framework` has been added to the Linked Frameworks and Libraries for the targets you want to use the SDK with
  1. Select your Project in the Project Navigator
  2. Select the target you want to enable the SDK for
  3. Select the General tab

3. If `Lighthouse.framework` is not listed, drag and drop the library from your Project
Navigator to the Linked Frameworks and Libraries area

4. Verify that CoreBluetooth.framework and CoreLocation.framework has been added to the Linked Frameworks and Libraries for the targets you want to use the SDK with
  1. Select your Project in the Project Navigator
  2. Select the target you want to enable the SDK for
  3. Select the General tab
  4. If `CoreLocation.framework` is not listed in the Linked Frameworks and Libraries area, click + and select it in the dialog
  5. If `CoreBluetooth.framework` is not listed in the Linked Frameworks and Libraries area, click + and select it in the dialog

5. In your Application Delegate:
  1. Import Lighthouse: `#import <Lighthouse/Lighthouse.h>`
  2. In your `-application:didFinishLaunchingWithOptions:` method, initialise Lighthouse with your Client Key and Secret.
