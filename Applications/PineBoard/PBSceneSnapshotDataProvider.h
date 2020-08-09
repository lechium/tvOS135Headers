//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "XBSnapshotDataProvider-Protocol.h"

@class FBSceneSnapshot, NSString, UIImage, XBSnapshotDataProviderContext;

@interface PBSceneSnapshotDataProvider : NSObject <XBSnapshotDataProvider>
{
    XBSnapshotDataProviderContext *_context;	// 8 = 0x8
    FBSceneSnapshot *_snapshot;	// 16 = 0x10
    UIImage *_cachedImage;	// 24 = 0x18
    double _scaleFactor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000eb638
@property(readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(readonly, nonatomic) UIImage *cachedImage; // @synthesize cachedImage=_cachedImage;
@property(readonly, nonatomic) FBSceneSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(readonly, retain, nonatomic) XBSnapshotDataProviderContext *context; // @synthesize context=_context;
- (void)invalidateImage;	// IMP=0x00000001000eb554
- (id)fetchImage;	// IMP=0x00000001000eae64
- (id)initWithSceneSnapshot:(id)arg1 scaleFactor:(double)arg2;	// IMP=0x00000001000eabd4
- (id)init;	// IMP=0x00000001000eab90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

