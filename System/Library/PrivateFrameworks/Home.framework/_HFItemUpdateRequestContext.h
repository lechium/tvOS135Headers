/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HFCharacteristicReadPolicy;
@class NSDictionary, HFUpdateLogger;

@interface _HFItemUpdateRequestContext : NSObject <NSCopying> {

	SEL _senderSelector;
	NSDictionary* _updateOptions;
	HFUpdateLogger* _logger;
	id<HFCharacteristicReadPolicy> _readPolicy;

}

@property (assign,nonatomic) SEL senderSelector;                                     //@synthesize senderSelector=_senderSelector - In the implementation block
@property (nonatomic,copy) NSDictionary * updateOptions;                             //@synthesize updateOptions=_updateOptions - In the implementation block
@property (nonatomic,retain) HFUpdateLogger * logger;                                //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicReadPolicy> readPolicy;              //@synthesize readPolicy=_readPolicy - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(HFUpdateLogger *)logger;
-(void)setLogger:(HFUpdateLogger *)arg1 ;
-(id<HFCharacteristicReadPolicy>)readPolicy;
-(void)setReadPolicy:(id<HFCharacteristicReadPolicy>)arg1 ;
-(SEL)senderSelector;
-(void)setSenderSelector:(SEL)arg1 ;
-(NSDictionary *)updateOptions;
-(void)setUpdateOptions:(NSDictionary *)arg1 ;
@end

