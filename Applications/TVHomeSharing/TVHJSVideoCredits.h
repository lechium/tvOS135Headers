//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "TVHJSVideoCredits-Protocol.h"

@class NSArray, TVHKVideoCredits;

@interface TVHJSVideoCredits : IKJSObject <TVHJSVideoCredits>
{
    TVHKVideoCredits *_videoCredits;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100022cbc
@property(retain, nonatomic) TVHKVideoCredits *videoCredits; // @synthesize videoCredits=_videoCredits;
@property(readonly, nonatomic) _Bool hasCredits;
@property(readonly, copy, nonatomic) NSArray *screenwriters;
@property(readonly, copy, nonatomic) NSArray *producers;
@property(readonly, copy, nonatomic) NSArray *directors;
@property(readonly, copy, nonatomic) NSArray *actors;
- (id)initWithVideoCredits:(id)arg1 appContext:(id)arg2;	// IMP=0x0000000100022974
- (id)initWithAppContext:(id)arg1;	// IMP=0x00000001000228ec
- (id)init;	// IMP=0x0000000100022864

@end

