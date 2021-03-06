//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "JSExport-Protocol.h"
#import "TVHJSMediaEntity-Protocol.h"

@class NSDate, NSNumber, NSString;

@protocol TVHJSMediaCollection <TVHJSMediaEntity, JSExport>
@property(readonly, copy, nonatomic) NSString *playlistType;
@property(readonly, copy, nonatomic) NSDate *addedToDate;
@property(readonly, copy, nonatomic) NSString *selectedMediaCollectionIdentifier;
@property(readonly, copy, nonatomic) NSNumber *mediaItemCount;
@property(readonly, copy, nonatomic) NSString *artistIdentifier;
@property(readonly, copy, nonatomic) NSString *artistTitle;
@end

