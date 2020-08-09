//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTCoreDataResultsController.h"

#import "MTResultsChangeGeneratorDelegate-Protocol.h"

@class MTResultsChangeGenerator, NSString;

@interface MTConditionalNullResultsController : MTCoreDataResultsController <MTResultsChangeGeneratorDelegate>
{
    _Bool _hasResults;	// 8 = 0x8
    unsigned long long _numberOfPlaceholderObjects;	// 16 = 0x10
    MTResultsChangeGenerator *_changeGenerator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010013a700
@property(nonatomic) _Bool hasResults; // @synthesize hasResults=_hasResults;
@property(retain, nonatomic) MTResultsChangeGenerator *changeGenerator; // @synthesize changeGenerator=_changeGenerator;
@property(nonatomic) unsigned long long numberOfPlaceholderObjects; // @synthesize numberOfPlaceholderObjects=_numberOfPlaceholderObjects;
- (void)generator:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x000000010013a5d8
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000010013a420
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x000000010013a41c
- (id)_extraObjects;	// IMP=0x000000010013a300
- (id)allObjects;	// IMP=0x000000010013a25c
- (void)_initializeFrc;	// IMP=0x000000010013a1ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

