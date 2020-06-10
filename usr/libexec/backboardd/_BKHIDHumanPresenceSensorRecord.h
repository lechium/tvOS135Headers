//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _BKHIDHumanPresenceSensorRecord : NSObject
{
    _Bool _humanIsPresent;	// 8 = 0x8
    unsigned long long _status;	// 16 = 0x10
    double _proximityInCentimeters;	// 24 = 0x18
    NSMutableArray *_services;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010005b9a0
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property(nonatomic) _Bool humanIsPresent; // @synthesize humanIsPresent=_humanIsPresent;
@property(nonatomic) double proximityInCentimeters; // @synthesize proximityInCentimeters=_proximityInCentimeters;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)removeService:(id)arg1;	// IMP=0x000000010005b934
- (void)addService:(id)arg1;	// IMP=0x000000010005b8c0
- (void)_resetServiceStatus;	// IMP=0x000000010005b708
- (id)description;	// IMP=0x000000010005b610

@end
