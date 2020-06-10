//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MIUninstalledAppList : NSObject
{
    NSObject<OS_dispatch_queue> *_listQueue;	// 8 = 0x8
    NSMutableDictionary *_uninstalledList;	// 16 = 0x10
}

+ (id)sharedList;	// IMP=0x0000000100043f90
- (void).cxx_destruct;	// IMP=0x000000010004490c
@property(retain, nonatomic) NSMutableDictionary *uninstalledList; // @synthesize uninstalledList=_uninstalledList;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *listQueue; // @synthesize listQueue=_listQueue;
- (void)removeIdentifiers:(id)arg1;	// IMP=0x00000001000447e0
- (void)addIdentifier:(id)arg1;	// IMP=0x000000010004468c
@property(readonly, nonatomic) NSDictionary *uninstalledDictionary;
- (void)preflightUninstalledMap;	// IMP=0x00000001000443d0
- (void)_onQueue_setUninstalledList:(id)arg1;	// IMP=0x00000001000441dc
- (id)_onQueue_uninstalledList;	// IMP=0x00000001000440d4
- (id)_mapPath;	// IMP=0x0000000100044044
- (id)init;	// IMP=0x0000000100043f08

@end
