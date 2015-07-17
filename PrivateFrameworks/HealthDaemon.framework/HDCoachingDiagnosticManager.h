/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCoachingDiagnosticManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    CMMotionActivityManager * _activityManager;
    NSOperationQueue * _activityQueue;
    NSNumber * _cachedAnchor;
    <HDHealthDaemon> * _healthDaemon;
    Class  _motionActivityManagerClass;
    NSObject<OS_dispatch_queue> * _queue;
    AWDServerConnection * _serverConnection;
    NSNumber * _waitingToRun;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) Class motionActivityManagerClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performCoachingDiagnosticActivity:(id)arg1;
- (void)_performCoachingDiagnosticIfWaiting;
- (BOOL)_queue_acquireMotionActivityStatisticsForAnchorDate:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (id)_queue_anchor;
- (void)_queue_applyDataItem:(id)arg1 toMetric:(id)arg2;
- (id)_queue_computeStatisticsForCoachingEvent:(id)arg1 error:(id*)arg2;
- (BOOL)_queue_computeWorkoutStatisticsForAnchorDate:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (BOOL)_queue_isWaitingToRun;
- (id)_queue_lastRunDate;
- (void)_queue_performCoachingDiagnosticWithRunDate:(id)arg1 ignoreAnchor:(BOOL)arg2 handler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_queue_setAnchor:(id)arg1;
- (void)_queue_setLastRunDate:(id)arg1;
- (void)_queue_setWaitingToRun:(BOOL)arg1;
- (id)_queue_statisticsCollectionForAnchorDate:(id)arg1 interval:(unsigned int)arg2 quantityType:(id)arg3 statisticsOptions:(unsigned int)arg4 error:(id*)arg5;
- (void)_queue_submitMetricForEvent:(id)arg1 data:(id)arg2;
- (void)_registerActivity;
- (void)_setNeedsToRunWithCompletion:(id /* block */)arg1;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithHealthDaemon:(id)arg1;
- (Class)motionActivityManagerClass;
- (void)performCoachingDiagnosticWithRunDate:(id)arg1 ignoreAnchor:(BOOL)arg2 submitMetrics:(BOOL)arg3 handler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)setActivityManager:(id)arg1;
- (void)setMotionActivityManagerClass:(Class)arg1;

@end