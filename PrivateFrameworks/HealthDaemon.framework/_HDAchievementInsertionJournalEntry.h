/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAchievementInsertionJournalEntry : HDJournalEntry {
    HKAchievement * _achievement;
}

@property (nonatomic, readonly) HKAchievement *achievement;

+ (void)applyEntries:(id)arg1 withDaemon:(id)arg2;
+ (int)behavior;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)achievement;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAchievement:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end