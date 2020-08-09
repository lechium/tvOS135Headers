//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface TVSettingsCollectionChange : NSObject
{
    unsigned long long _changeKind;	// 8 = 0x8
    NSIndexSet *_sourceIndexes;	// 16 = 0x10
    NSIndexSet *_destinationIndexes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010003f284
@property(readonly, copy, nonatomic) NSIndexSet *destinationIndexes; // @synthesize destinationIndexes=_destinationIndexes;
@property(readonly, copy, nonatomic) NSIndexSet *sourceIndexes; // @synthesize sourceIndexes=_sourceIndexes;
@property(readonly, nonatomic) unsigned long long changeKind; // @synthesize changeKind=_changeKind;
- (id)description;	// IMP=0x000000010003f118
- (id)init;	// IMP=0x000000010003f100
- (id)initWithChangeKind:(unsigned long long)arg1 sourceIndexes:(id)arg2 destinationIndexes:(id)arg3;	// IMP=0x000000010003f038

@end
