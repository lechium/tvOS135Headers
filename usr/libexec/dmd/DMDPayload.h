//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class DMDPayloadMetadata, NSDictionary;

@interface DMDPayload : NSManagedObject
{
}

- (id)description;	// IMP=0x000000010005aa18
- (id)identifier;	// IMP=0x000000010005a9bc

// Remaining properties
@property(retain, nonatomic) DMDPayloadMetadata *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSDictionary *payloadDictionary; // @dynamic payloadDictionary;

@end

