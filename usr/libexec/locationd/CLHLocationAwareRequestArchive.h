//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLHLocationClassifier, CLHRequestArchive;

@interface CLHLocationAwareRequestArchive : NSObject
{
    CLHLocationClassifier *_classifier;	// 8 = 0x8
    CLHRequestArchive *_homeArchive;	// 16 = 0x10
    CLHRequestArchive *_workArchive;	// 24 = 0x18
    CLHRequestArchive *_mainArchive;	// 32 = 0x20
}

@property(readonly) CLHRequestArchive *mainArchive; // @synthesize mainArchive=_mainArchive;
@property(readonly) CLHRequestArchive *workArchive; // @synthesize workArchive=_workArchive;
@property(readonly) CLHRequestArchive *homeArchive; // @synthesize homeArchive=_homeArchive;
- (id)jsonObject;	// IMP=0x00000001006b7524
- (void)pruneSecondaryDataOlderThan:(double)arg1;	// IMP=0x00000001006b74cc
- (void)writeSecondaryObject:(id)arg1 collectedAt:(id)arg2 toField:(unsigned int)arg3;	// IMP=0x00000001006b745c
@property(readonly) unsigned long long count;
- (void)dealloc;	// IMP=0x00000001006b73a0
- (id)initWithClassifier:(id)arg1 rootDirectory:(id)arg2 basename:(id)arg3 requestCode:(int)arg4;	// IMP=0x00000001006b71f0

@end

