//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "TVHJSMediaServerContentsChange-Protocol.h"

@class NSString, TVHSMediaServerContentsChange;

@interface TVHJSMediaServerContentsChange : IKJSObject <TVHJSMediaServerContentsChange>
{
    TVHSMediaServerContentsChange *_contentsChange;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010002aa54
@property(copy, nonatomic) TVHSMediaServerContentsChange *contentsChange; // @synthesize contentsChange=_contentsChange;
@property(readonly, copy, nonatomic) NSString *photoLibraryState;
@property(readonly, nonatomic) unsigned long long revision;
@property(readonly, copy, nonatomic) NSString *protocol;
- (id)initWithContentsChange:(id)arg1 appContext:(id)arg2;	// IMP=0x000000010002a8a4
- (id)initWithAppContext:(id)arg1;	// IMP=0x000000010002a81c
- (id)init;	// IMP=0x000000010002a794

@end

