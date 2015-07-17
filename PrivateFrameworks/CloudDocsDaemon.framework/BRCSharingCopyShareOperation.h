/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingCopyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    CKRecordID * _recordIDNeedingFetch;
    CKShareID * _shareID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CKRecordID *recordIDNeedingFetch;
@property (nonatomic, retain) CKShareID *shareID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithItem:(id)arg1;
- (void)main;
- (void)performAfterFetchingShares:(id /* block */)arg1;
- (id)recordIDNeedingFetch;
- (void)setRecordIDNeedingFetch:(id)arg1;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (BOOL)shouldRetryForError:(id)arg1;
- (unsigned long long)startActivity;

@end