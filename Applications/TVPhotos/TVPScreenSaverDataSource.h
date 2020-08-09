//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, PHAssetCollection;

@interface TVPScreenSaverDataSource : NSObject <UITableViewDataSource>
{
    PHAssetCollection *_activityFeedCollection;	// 8 = 0x8
    NSMutableDictionary *_fetchResults;	// 16 = 0x10
    NSArray *_allowedSubtypes;	// 24 = 0x18
    NSArray *_filteredTypeArray;	// 32 = 0x20
    NSIndexPath *_selectedIndexPath;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100062148
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100062124
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100061e98
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100061d5c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100061c8c
- (void)_loadExistingSelection;	// IMP=0x00000001000617d8
- (void)_fetchPhotoCollections;	// IMP=0x00000001000612bc
- (id)albumForIndexPath:(id)arg1;	// IMP=0x0000000100061148
- (id)initWithAllowedCollectionSubtypes:(id)arg1;	// IMP=0x000000010006108c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
