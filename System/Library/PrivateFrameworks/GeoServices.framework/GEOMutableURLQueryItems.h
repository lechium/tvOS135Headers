/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface GEOMutableURLQueryItems : NSObject {

	NSMutableArray* _items;

}

@property (nonatomic,readonly) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
-(id)init;
-(NSMutableArray *)items;
-(void)addItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(void)addItemWithName:(id)arg1 value:(id)arg2 ;
-(void)addItemsFromArray:(id)arg1 ;
-(void)addItemWithName:(id)arg1 intValue:(int)arg2 ;
-(void)addItemWithName:(id)arg1 uintValue:(unsigned)arg2 ;
-(void)addItemWithName:(id)arg1 uint64Value:(unsigned long long)arg2 ;
@end

