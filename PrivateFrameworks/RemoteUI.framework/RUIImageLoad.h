/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSURL, NSURLConnection, NSMutableData;

@interface RUIImageLoad : NSObject <NSURLConnectionDelegate> {
    NSURL *_URL;
    NSURLConnection *_connection;
    NSMutableData *_imageData;
    BOOL _invalidResponse;
}


- (BOOL)receivedValidResponse:(id)arg1;
- (void)_loadFinished;
- (void)_createImage;
- (void)dealloc;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)start;

@end