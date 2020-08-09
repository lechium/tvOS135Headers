//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "TVHJSMediaEntityType-Protocol.h"

@class NSString, TVHKMediaEntityType;

@interface TVHJSMediaEntityType : IKJSObject <TVHJSMediaEntityType>
{
    NSString *_subtype;	// 8 = 0x8
    NSString *_mediaCategoryType;	// 16 = 0x10
    NSString *_mediaCollectionType;	// 24 = 0x18
    NSString *_mediaItemType;	// 32 = 0x20
    TVHKMediaEntityType *_mediaEntityType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000231fc
@property(retain, nonatomic) TVHKMediaEntityType *mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property(readonly, copy, nonatomic) NSString *mediaItemType; // @synthesize mediaItemType=_mediaItemType;
@property(readonly, copy, nonatomic) NSString *mediaCollectionType; // @synthesize mediaCollectionType=_mediaCollectionType;
@property(readonly, copy, nonatomic) NSString *mediaCategoryType; // @synthesize mediaCategoryType=_mediaCategoryType;
@property(readonly, copy, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
- (id)initWithMediaEntityType:(id)arg1 appContext:(id)arg2;	// IMP=0x0000000100022de0
- (id)initWithAppContext:(id)arg1;	// IMP=0x0000000100022d58
- (id)init;	// IMP=0x0000000100022cd0

@end

