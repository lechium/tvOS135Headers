/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary;

@interface IKAppDataSet : NSObject <NSCopying> {

	NSArray* _itemIDs;
	NSArray* _items;
	NSDictionary* _usedPrototypesByIdentifier;
	NSDictionary* _indexTitles;

}

@property (nonatomic,copy,readonly) NSArray * items;                                        //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * usedPrototypesByIdentifier;              //@synthesize usedPrototypesByIdentifier=_usedPrototypesByIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * indexTitles;                             //@synthesize indexTitles=_indexTitles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemIDs;                                      //@synthesize itemIDs=_itemIDs - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(NSDictionary *)indexTitles;
-(NSArray *)itemIDs;
-(id)initWithItems:(id)arg1 usedPrototypesByIdentifier:(id)arg2 indexTitles:(id)arg3 ;
-(NSDictionary *)usedPrototypesByIdentifier;
@end

