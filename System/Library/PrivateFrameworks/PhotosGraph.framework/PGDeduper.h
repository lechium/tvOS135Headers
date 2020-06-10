/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface PGDeduper : NSObject {

	NSSet* _identifiersOfRequiredItems;

}

@property (nonatomic,copy) NSSet * identifiersOfRequiredItems;              //@synthesize identifiersOfRequiredItems=_identifiersOfRequiredItems - In the implementation block
-(BOOL)itemIsRequired:(id)arg1 ;
-(id)requiredItemsInItems:(id)arg1 ;
-(NSSet *)identifiersOfRequiredItems;
-(void)setIdentifiersOfRequiredItems:(NSSet *)arg1 ;
-(id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end
