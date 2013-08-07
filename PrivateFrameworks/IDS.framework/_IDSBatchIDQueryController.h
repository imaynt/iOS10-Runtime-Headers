/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSObject<OS_dispatch_queue>, NSTimer, NSMutableArray, CUTWeakReference, NSString, NSDate, NSArray;

@interface _IDSBatchIDQueryController : NSObject <IDSIDQueryControllerDelegate> {
    NSString *_serviceName;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_listenerID;
    NSArray *_destinations;
    NSMutableArray *_destinationsToQuery;
    NSTimer *_nextQueryTimer;
    NSDate *_timeOfDeath;
    int _numberOfQueriesDone;
    BOOL _isDead;
}


- (void)_scheduleNextQuery:(double)arg1;
- (void)_nextQuery:(id)arg1;
- (void)_invalidateNextQueryTimer;
- (id)initWithService:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)setDestinations:(id)arg1;
- (void)invalidate;
- (void)dealloc;

@end