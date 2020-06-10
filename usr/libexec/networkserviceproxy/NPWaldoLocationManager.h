//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NPWaldo;

@interface NPWaldoLocationManager : NSObject
{
    NPWaldo *_waldoInfo;	// 8 = 0x8
    CLLocation *_latestLocation;	// 16 = 0x10
    CLLocation *_latestGeohashLocation;	// 24 = 0x18
    CDUnknownBlockType _locationCompletionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000039cc
@property(copy) CDUnknownBlockType locationCompletionHandler; // @synthesize locationCompletionHandler=_locationCompletionHandler;
@property(retain) CLLocation *latestGeohashLocation; // @synthesize latestGeohashLocation=_latestGeohashLocation;
@property(retain) CLLocation *latestLocation; // @synthesize latestLocation=_latestLocation;
@property __weak NPWaldo *waldoInfo; // @synthesize waldoInfo=_waldoInfo;
@property(readonly) double dislocation;
- (id)copyCurrentGeohashFromServer;	// IMP=0x00000001000037ac
- (id)copyCurrentGeohash;	// IMP=0x0000000100003720
- (void)sortEdgesByDistanceWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000341c
- (_Bool)exceededLocationTTL;	// IMP=0x0000000100002dd4
- (_Bool)sortEdgesByDistanceWithNewLocation:(id)arg1 checkOnly:(_Bool)arg2;	// IMP=0x000000010000215c
- (void)setCurrentGeohash:(id)arg1;	// IMP=0x000000010000201c
- (void)setCurrentLatitude:(double)arg1 longitude:(double)arg2 timestamp:(id)arg3;	// IMP=0x0000000100001eb0
- (void)handleNewLocation:(id)arg1;	// IMP=0x0000000100001e44
- (_Bool)shouldCheckLocation;	// IMP=0x0000000100001894
- (id)initWithWaldo:(id)arg1;	// IMP=0x0000000100001828

@end

