//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, TVNPRoutingDestination;

@interface TVNPRoute : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_routeUID;	// 16 = 0x10
    unsigned long long _deviceType;	// 24 = 0x18
    _Bool _local;	// 32 = 0x20
    _Bool _canBeGrouped;	// 33 = 0x21
    unsigned long long _selectionState;	// 40 = 0x28
    NSNumber *_volumeLevel;	// 48 = 0x30
    TVNPRoutingDestination *_destination;	// 56 = 0x38
    _Bool _silentPrimary;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010000d7bc
@property(nonatomic, getter=isSilentPrimary) _Bool silentPrimary; // @synthesize silentPrimary=_silentPrimary;
@property(retain, nonatomic) TVNPRoutingDestination *destination; // @synthesize destination=_destination;
@property(copy, nonatomic) NSNumber *volumeLevel; // @synthesize volumeLevel=_volumeLevel;
@property(nonatomic) _Bool canBeGrouped; // @synthesize canBeGrouped=_canBeGrouped;
@property(nonatomic) unsigned long long selectionState; // @synthesize selectionState=_selectionState;
@property(nonatomic, getter=isLocal) _Bool local; // @synthesize local=_local;
@property(nonatomic) unsigned long long deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_init;	// IMP=0x000000010000d6e8
- (id)init;	// IMP=0x000000010000d6d0

@end

