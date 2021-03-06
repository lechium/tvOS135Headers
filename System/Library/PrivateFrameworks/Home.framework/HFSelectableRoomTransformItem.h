/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFTransformItem.h>

@class HFRoomItem;

@interface HFSelectableRoomTransformItem : HFTransformItem

@property (nonatomic,readonly) HFRoomItem * roomItem; 
-(id)initWithRoomItem:(id)arg1 accessoryVendor:(id)arg2 ;
-(id)initWithSourceItem:(id)arg1 updateOptionsTransformBlock:(/*^block*/id)arg2 resultsTransformBlock:(/*^block*/id)arg3 ;
-(HFRoomItem *)roomItem;
@end

