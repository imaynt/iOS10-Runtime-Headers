/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessState : NSObject <BSDescriptionProviding, NSCopying> {
    int  _effectiveVisibility;
    BOOL  _foreground;
    int  _pid;
    BOOL  _running;
    int  _taskState;
    int  _visibility;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int effectiveVisibility;
@property (getter=isForeground, nonatomic) BOOL foreground;
@property (readonly) unsigned int hash;
@property (nonatomic) int pid;
@property (getter=isRunning, nonatomic) BOOL running;
@property (readonly) Class superclass;
@property (nonatomic) int taskState;
@property (nonatomic) int visibility;

- (id)_descriptionForTaskState:(int)arg1;
- (id)_descriptionForVisibility:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (int)effectiveVisibility;
- (id)init;
- (id)initWithPid:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isForeground;
- (BOOL)isRunning;
- (int)pid;
- (void)setEffectiveVisibility:(int)arg1;
- (void)setForeground:(BOOL)arg1;
- (void)setPid:(int)arg1;
- (void)setRunning:(BOOL)arg1;
- (void)setTaskState:(int)arg1;
- (void)setVisibility:(int)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (int)taskState;
- (int)visibility;

@end