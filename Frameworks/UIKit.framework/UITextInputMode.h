/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UITextInputMode : NSObject <NSSecureCoding> {
}

@property(readonly) NSString * primaryLanguage;

+ (id)activeInputModes;
+ (id)currentInputMode;
+ (BOOL)supportsSecureCoding;

- (id)primaryLanguage;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end