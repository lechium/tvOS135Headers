/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Settings/DataSourceKit.framework/DataSourceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet;

@interface _DSKDataSourceSection : NSObject {

	id _sectionItem;
	NSMutableOrderedSet* __items;

}

@property (nonatomic,retain) NSMutableOrderedSet * _items;              //@synthesize _items=__items - In the implementation block
@property (nonatomic,retain) id sectionItem;                            //@synthesize sectionItem=_sectionItem - In the implementation block
@property (nonatomic,readonly) long long numberOfItems; 
-(NSMutableOrderedSet *)_items;
-(id)itemAtIndex:(long long)arg1 ;
-(long long)numberOfItems;
-(BOOL)containsItem:(id)arg1 ;
-(void)deleteAllItems;
-(void)appendItems:(id)arg1 ;
-(void)deleteItems:(id)arg1 ;
-(void)insertItems:(id)arg1 afterItem:(id)arg2 ;
-(id)sectionItem;
-(void)insertItems:(id)arg1 beforeItem:(id)arg2 ;
-(id)initWithSectionItem:(id)arg1 ;
-(void)setSectionItem:(id)arg1 ;
-(void)set_items:(NSMutableOrderedSet *)arg1 ;
@end

