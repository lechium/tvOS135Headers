//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMBaseDiskCache.h"

@class NSMutableDictionary, NSMutableSet, NSObject, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface IMImageDiskCache : IMBaseDiskCache
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    double _maxImageDimensionInPixels;	// 16 = 0x10
    NSString *_onDiskFileType;	// 24 = 0x18
    double _saveCompressionQuality;	// 32 = 0x20
    NSRecursiveLock *_syncLock;	// 40 = 0x28
    NSMutableSet *_proccessingKeys;	// 48 = 0x30
    NSMutableDictionary *_completionHandlers;	// 56 = 0x38
    NSMutableDictionary *_pendingPerformWhenAvailableOnDiskBlocks;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001001fbe5c
@property(readonly, nonatomic) NSMutableDictionary *pendingPerformWhenAvailableOnDiskBlocks; // @synthesize pendingPerformWhenAvailableOnDiskBlocks=_pendingPerformWhenAvailableOnDiskBlocks;
@property(readonly, nonatomic) NSMutableDictionary *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, nonatomic) NSMutableSet *proccessingKeys; // @synthesize proccessingKeys=_proccessingKeys;
@property(readonly, nonatomic) NSRecursiveLock *syncLock; // @synthesize syncLock=_syncLock;
@property(readonly, nonatomic) double saveCompressionQuality; // @synthesize saveCompressionQuality=_saveCompressionQuality;
@property(readonly, nonatomic) NSString *onDiskFileType; // @synthesize onDiskFileType=_onDiskFileType;
@property(readonly, nonatomic) double maxImageDimensionInPixels; // @synthesize maxImageDimensionInPixels=_maxImageDimensionInPixels;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)performWhenURLAvailableForImageForKey:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001001fbafc
- (id)_resizeImageForKey:(id)arg1 maxDimensionInPixels:(double)arg2;	// IMP=0x00000001001fb70c
- (_Bool)_isProcessingKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001fb4f4
- (void)_finishProcessingKey:(id)arg1 success:(_Bool)arg2;	// IMP=0x00000001001fb298
- (void)_startProcessingKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001fb014
- (void)_performWithSyncLock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001faf6c
- (id)_onDiskFileExtension;	// IMP=0x00000001001faef0
- (id)pathForKey:(id)arg1;	// IMP=0x00000001001fae30
- (id)imageForKey:(id)arg1;	// IMP=0x00000001001fad44
- (id)imageUrlForKey:(id)arg1;	// IMP=0x00000001001fac24
- (_Bool)_startProcessingForAddingKey:(id)arg1 originalKey:(id)arg2;	// IMP=0x00000001001fa8a4
- (_Bool)_addImage:(id)arg1 forKey:(id)arg2 resizeIfTooBig:(_Bool)arg3 manageProcessingState:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001001f9ed8
- (_Bool)addImage:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001001f9e70
- (_Bool)_needsResizing:(struct CGImageSource *)arg1 maxDimensionInPixels:(double)arg2;	// IMP=0x00000001001f9e2c
- (_Bool)_usesLessMemoryToConvertThenResizeImageSource:(struct CGImageSource *)arg1 destinationDimensionInPixels:(double)arg2;	// IMP=0x00000001001f9d6c
- (id)_defaultImageSavingOptions;	// IMP=0x00000001001f9c24
- (id)_defaultImageSavingSourceOptions;	// IMP=0x00000001001f9ae0
- (struct CGImageSource *)_copyImageSourceByConvertingImage:(struct CGImageSource *)arg1 toFileType:(id)arg2 destinationUrl:(id)arg3;	// IMP=0x00000001001f98d4
- (_Bool)copyImageFromSourceUrl:(id)arg1 to:(id)arg2 discardTransparency:(_Bool)arg3 enforceSquare:(_Bool)arg4 maxDimensionInPixels:(double)arg5;	// IMP=0x00000001001f8bd0
- (void)copyImageFromSourceUrl:(id)arg1 to:(id)arg2 discardTransparency:(_Bool)arg3 enforceSquare:(_Bool)arg4 maxDimensionInPixels:(double)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001001f8b04
- (void)addImageWithSourceUrl:(id)arg1 forKey:(id)arg2 discardTransparency:(_Bool)arg3 enforceSquare:(_Bool)arg4 maxDimensionInPixels:(double)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001001f87f8
- (void)addImageWithSourceUrl:(id)arg1 forKey:(id)arg2 enforceSquare:(_Bool)arg3 maxDimensionInPixels:(double)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001001f8768
- (void)addImagesWithSourceUrl:(id)arg1 forKeys:(id)arg2 discardTransparency:(_Bool)arg3 enforceSquare:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001001f7dd8
- (void)_addImageWithSourceUrl:(id)arg1 forKey:(id)arg2 discardTransparency:(_Bool)arg3 enforceSquare:(_Bool)arg4 maxDimensionInPixels:(double)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001001f7c78
- (id)initWithBasePath:(id)arg1 maxImageDimensionInPixels:(double)arg2;	// IMP=0x00000001001f7ab8
- (id)initWithBasePath:(id)arg1;	// IMP=0x00000001001f7aa4

@end
