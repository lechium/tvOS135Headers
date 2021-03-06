/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AMSBagKeySetAggregator : NSObject {

	NSMutableDictionary* _bagKeySets;

}

@property (nonatomic,retain) NSMutableDictionary * bagKeySets;              //@synthesize bagKeySets=_bagKeySets - In the implementation block
-(id)init;
-(BOOL)hasBagKeySetForConsumer:(Class)arg1 ;
-(void)addBagKeySet:(id)arg1 forConsumer:(Class)arg2 ;
-(id)generateAggregatedBagKeySet;
-(NSMutableDictionary *)bagKeySets;
-(void)setBagKeySets:(NSMutableDictionary *)arg1 ;
@end

