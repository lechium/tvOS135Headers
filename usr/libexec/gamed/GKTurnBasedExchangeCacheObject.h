//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKCacheObject.h"

@class GKTurnBasedSessionCacheObject, NSData, NSDate, NSOrderedSet, NSString;

@interface GKTurnBasedExchangeCacheObject : GKCacheObject
{
}

+ (id)entityName;	// IMP=0x00000001000582d0
- (id)internalRepresentation;	// IMP=0x000000010005892c
- (void)updateWithServerRepresentation:(id)arg1 participants:(id)arg2;	// IMP=0x00000001000582dc

// Remaining properties
@property(retain, nonatomic) NSDate *completionDate; // @dynamic completionDate;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSString *exchangeID; // @dynamic exchangeID;
@property(retain, nonatomic) NSData *localizableMessage; // @dynamic localizableMessage;
@property(retain, nonatomic) NSOrderedSet *recipients; // @dynamic recipients;
@property(retain, nonatomic) NSOrderedSet *replies; // @dynamic replies;
@property(retain, nonatomic) NSDate *sendDate; // @dynamic sendDate;
@property(nonatomic) int senderIndex; // @dynamic senderIndex;
@property(retain, nonatomic) GKTurnBasedSessionCacheObject *session; // @dynamic session;
@property(retain, nonatomic) NSString *statusString; // @dynamic statusString;
@property(retain, nonatomic) NSDate *timeoutDate; // @dynamic timeoutDate;

@end

