//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHJSObject.h"

#import "TVHJSMediaEntityFetchControllerResult-Protocol.h"

@class NSDictionary, NSString, TVHJSMediaQueryResult;

@interface TVHJSMediaEntityFetchControllerResult : TVHJSObject <TVHJSMediaEntityFetchControllerResult>
{
    NSString *_queryReason;	// 8 = 0x8
    TVHJSMediaQueryResult *_mediaEntitiesResult;	// 16 = 0x10
    TVHJSMediaQueryResult *_recentlyAddedMediaEntitiesResult;	// 24 = 0x18
    TVHJSMediaQueryResult *_unplayedMediaEntitiesResult;	// 32 = 0x20
    NSDictionary *_groupingsResult;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000174b4
@property(retain, nonatomic) NSDictionary *groupingsResult; // @synthesize groupingsResult=_groupingsResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *unplayedMediaEntitiesResult; // @synthesize unplayedMediaEntitiesResult=_unplayedMediaEntitiesResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *recentlyAddedMediaEntitiesResult; // @synthesize recentlyAddedMediaEntitiesResult=_recentlyAddedMediaEntitiesResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *mediaEntitiesResult; // @synthesize mediaEntitiesResult=_mediaEntitiesResult;
@property(copy, nonatomic) NSString *queryReason; // @synthesize queryReason=_queryReason;
- (id)initWithAppContext:(id)arg1;	// IMP=0x000000010001734c

@end
