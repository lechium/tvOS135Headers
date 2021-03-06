/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface FBSProcessExecutionStrategy : NSObject <NSCopying, BSDescriptionProviding> {

	NSString* _strategyName;
	long long _schedulingPolicy;
	long long _graphicsPolicy;
	long long _jetsamPolicy;
	BOOL _customPolicy;
	unsigned _bksReason;
	unsigned _bksFlags;

}

@property (nonatomic,copy) NSString * strategyName;                                //@synthesize strategyName=_strategyName - In the implementation block
@property (assign,nonatomic) long long schedulingPolicy;                           //@synthesize schedulingPolicy=_schedulingPolicy - In the implementation block
@property (assign,nonatomic) long long graphicsPolicy;                             //@synthesize graphicsPolicy=_graphicsPolicy - In the implementation block
@property (assign,nonatomic) long long jetsamPolicy;                               //@synthesize jetsamPolicy=_jetsamPolicy - In the implementation block
@property (assign,getter=isCustomPolicy,nonatomic) BOOL customPolicy;              //@synthesize customPolicy=_customPolicy - In the implementation block
@property (assign,nonatomic) unsigned reason;                                      //@synthesize bksReason=_bksReason - In the implementation block
@property (assign,nonatomic) unsigned flags;                                       //@synthesize bksFlags=_bksFlags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)strategyForSchedulingPolicy:(long long)arg1 graphicsPolicy:(long long)arg2 jetsamPolicy:(long long)arg3 ;
+(id)userInteractive;
+(id)userInteractiveWithoutUI;
+(id)backgroundWithUI;
+(id)background;
+(id)policyWithReason:(unsigned)arg1 flags:(unsigned)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(unsigned)reason;
-(unsigned)flags;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(long long)schedulingPolicy;
-(void)setReason:(unsigned)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)setStrategyName:(NSString *)arg1 ;
-(void)setSchedulingPolicy:(long long)arg1 ;
-(void)setGraphicsPolicy:(long long)arg1 ;
-(void)setJetsamPolicy:(long long)arg1 ;
-(void)setCustomPolicy:(BOOL)arg1 ;
-(BOOL)isCustomPolicy;
-(long long)graphicsPolicy;
-(long long)jetsamPolicy;
-(NSString *)strategyName;
@end

