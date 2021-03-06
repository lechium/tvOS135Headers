//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "TVHJSContentRating-Protocol.h"

@class NSString, _TVContentRating;

@interface TVHJSContentRating : IKJSObject <TVHJSContentRating>
{
    _TVContentRating *_contentRating;	// 8 = 0x8
    NSString *_badgeResourceName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100017d10
@property(copy, nonatomic) NSString *badgeResourceName; // @synthesize badgeResourceName=_badgeResourceName;
@property(retain, nonatomic) _TVContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(readonly, nonatomic) _Bool badgeRequiresTintColor;
@property(readonly, copy, nonatomic) NSString *ratingDescription;
@property(readonly, nonatomic) unsigned long long rank;
@property(readonly, copy, nonatomic) NSString *ratingLabel;
@property(readonly, nonatomic) _Bool isExplicitContent;
@property(readonly, copy, nonatomic) NSString *ratingSystem;
- (id)initWithContentRating:(id)arg1 appContext:(id)arg2;	// IMP=0x00000001000179a8

@end

