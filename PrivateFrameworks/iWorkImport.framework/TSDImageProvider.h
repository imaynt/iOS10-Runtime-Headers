/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageProvider : NSObject {
    TSUFlushingManager * mFlushingManager;
    TSPData * mImageData;
    int  mInterest;
    int  mLoadState;
    int  mOwnerCount;
    int  mRetainCount;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)addInterest;
- (void)addOwner;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })dpiAdjustedNaturalSize;
- (void)drawImageInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)flush;
- (BOOL)hasFlushableContent;
- (void)i_commonInit;
- (id)imageData;
- (id)initWithImageData:(id)arg1;
- (int)interest;
- (BOOL)isError;
- (BOOL)isValid;
- (struct CGSize { float x1; float x2; })naturalSize;
- (void)ownerAccess;
- (oneway void)release;
- (void)removeInterest;
- (void)removeOwner;
- (id)retain;
- (unsigned int)retainCount;
- (void)setFlushingManager:(id)arg1;

@end