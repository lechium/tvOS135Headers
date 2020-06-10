//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, RPPeopleDiscovery, SDXPCHelperConnection;

__attribute__((visibility("hidden")))
@interface SDRapportBrowser : NSObject
{
    long long _startCount;	// 8 = 0x8
    NSMutableDictionary *_cachedNodes;	// 16 = 0x10
    RPPeopleDiscovery *_peopleDiscovery;	// 24 = 0x18
    SDXPCHelperConnection *_helperConnection;	// 32 = 0x20
}

+ (id)deviceTypeFromModelIdentifier:(id)arg1;	// IMP=0x00000001000aaeb8
+ (id)deviceImageNameFromModelIdentifier:(id)arg1;	// IMP=0x00000001000aa930
+ (_Bool)deviceIsEligibleForAirDrop:(id)arg1;	// IMP=0x00000001000aa840
+ (_Bool)personHasAirDropEligibleDevice:(id)arg1;	// IMP=0x00000001000aa6fc
+ (id)identifiersForPerson:(id)arg1;	// IMP=0x00000001000aa5fc
+ (unsigned long long)defaultSFNodeFlags;	// IMP=0x00000001000a9ebc
+ (void)updateRangingMeasurementForDevice:(id)arg1 inNode:(struct __SFNode *)arg2;	// IMP=0x00000001000a9e1c
+ (void)updateRangingMeasurementForPerson:(id)arg1 inNode:(struct __SFNode *)arg2;	// IMP=0x00000001000a9bd8
+ (id)sharedRapportBrowser;	// IMP=0x00000001000a859c
- (void).cxx_destruct;	// IMP=0x00000001000ab008
@property(nonatomic) __weak SDXPCHelperConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
- (struct __SFNode *)createSFNodeFromMyRPDevice:(id)arg1;	// IMP=0x00000001000aa4d4
- (struct __SFNode *)createSFNodeFromRPPerson:(id)arg1;	// IMP=0x00000001000aa310
- (struct __SFNode *)createSFNodeFromCNContact:(id)arg1 identifier:(id)arg2 device:(id)arg3;	// IMP=0x00000001000a9ec4
- (void)resumeHandoffAdvertisingIfAppropriate;	// IMP=0x00000001000a9b44
- (void)stopHandoffAdvertisingIfAppropriate;	// IMP=0x00000001000a9ab0
- (_Bool)shouldStopHandoffAdvertising;	// IMP=0x00000001000a9a84
- (id)assertionIdentifier;	// IMP=0x00000001000a9a4c
- (void)removeNodesForPerson:(id)arg1;	// IMP=0x00000001000a99d8
- (void)addOrUpdateNodesForPerson:(id)arg1 withChanges:(unsigned int)arg2;	// IMP=0x00000001000a944c
@property(readonly, copy) NSArray *nodes;
- (void)removeObservers;	// IMP=0x00000001000a93ec
- (void)addObservers;	// IMP=0x00000001000a9384
- (void)contactsChanged:(id)arg1;	// IMP=0x00000001000a91fc
- (void)_stop;	// IMP=0x00000001000a9150
- (void)_start;	// IMP=0x00000001000a87dc
- (void)stop;	// IMP=0x00000001000a8708
- (void)start;	// IMP=0x00000001000a863c
- (id)init;	// IMP=0x00000001000a8608

@end

