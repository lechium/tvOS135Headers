/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface _HFItemManagerDebugStateDumpController : NSObject {

	NSHashTable* _itemManagers;

}

@property (nonatomic,retain) NSHashTable * itemManagers;              //@synthesize itemManagers=_itemManagers - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)registerItemManager:(id)arg1 ;
-(void)setItemManagers:(NSHashTable *)arg1 ;
-(id)_performStateDump;
-(NSHashTable *)itemManagers;
@end

