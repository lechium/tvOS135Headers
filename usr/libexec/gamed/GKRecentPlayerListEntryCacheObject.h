//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListEntryCacheObject.h"

@class NSDate, NSString;

@interface GKRecentPlayerListEntryCacheObject : GKListEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x0000000100054268
- (id)internalRepresentation;	// IMP=0x0000000100054430
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0000000100054274

// Remaining properties
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSString *playerID; // @dynamic playerID;

@end

