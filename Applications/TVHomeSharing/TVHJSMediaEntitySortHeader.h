//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "TVHJSMediaEntitySortHeader-Protocol.h"

@class NSString, TVHKMediaEntitySortHeader;

@interface TVHJSMediaEntitySortHeader : IKJSObject <TVHJSMediaEntitySortHeader>
{
    TVHKMediaEntitySortHeader *_wrappedSortHeader;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000975c
@property(retain, nonatomic) TVHKMediaEntitySortHeader *wrappedSortHeader; // @synthesize wrappedSortHeader=_wrappedSortHeader;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) unsigned long long startIndex;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy) NSString *description;
- (id)initWithMediaEntitySortHeader:(id)arg1 appContext:(id)arg2;	// IMP=0x0000000100009460
- (id)initWithAppContext:(id)arg1;	// IMP=0x00000001000093d8
- (id)init;	// IMP=0x0000000100009350

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

