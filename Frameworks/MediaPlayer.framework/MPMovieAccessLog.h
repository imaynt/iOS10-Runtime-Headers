/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVPlayerItemAccessLog, NSData, NSArray;

@interface MPMovieAccessLog : NSObject <NSCopying> {
    AVPlayerItemAccessLog *_accessLog;
}

@property(readonly) NSData * extendedLogData;
@property(readonly) unsigned int extendedLogDataStringEncoding;
@property(readonly) NSArray * events;


- (id)_initWithAVItemAccessLog:(id)arg1;
- (id)events;
- (unsigned int)extendedLogDataStringEncoding;
- (id)extendedLogData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end