/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFItemUpdating;
@class NSSet;

@interface HFItemModule : NSObject {

	id<HFItemUpdating> _itemUpdater;

}

@property (nonatomic,readonly) NSSet * itemProviders; 
@property (nonatomic,readonly) NSSet * allItems; 
@property (nonatomic,__weak,readonly) id<HFItemUpdating> itemUpdater;              //@synthesize itemUpdater=_itemUpdater - In the implementation block
-(id)init;
-(BOOL)containsItem:(id)arg1 ;
-(NSSet *)allItems;
-(id<HFItemUpdating>)itemUpdater;
-(NSSet *)itemProviders;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;
@end

