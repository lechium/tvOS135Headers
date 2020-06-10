//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListEntryCacheObject.h"

#import "GKCacheObjectImageProtocol-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface GKLeaderboardCacheObject : GKListEntryCacheObject <GKCacheObjectImageProtocol>
{
}

+ (id)entityName;	// IMP=0x0000000100053da0
- (id)internalRepresentation;	// IMP=0x0000000100053b28
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x00000001000537f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSNumber *friendRank; // @dynamic friendRank;
@property(retain, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *image128; // @dynamic image128;
@property(retain, nonatomic) NSString *image256; // @dynamic image256;
@property(retain, nonatomic) NSString *image512; // @dynamic image512;
@property(retain, nonatomic) NSString *image64; // @dynamic image64;
@property(retain, nonatomic) NSString *imageTemplate; // @dynamic imageTemplate;
@property(retain, nonatomic) NSDate *lastSubmittedDate; // @dynamic lastSubmittedDate;
@property(retain, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property(retain, nonatomic) NSNumber *maxFriendRank; // @dynamic maxFriendRank;
@property(retain, nonatomic) NSNumber *maxRank; // @dynamic maxRank;
@property(retain, nonatomic) NSNumber *rank; // @dynamic rank;
@property(retain, nonatomic) NSString *scoreType; // @dynamic scoreType;
@property(readonly) Class superclass;

@end

