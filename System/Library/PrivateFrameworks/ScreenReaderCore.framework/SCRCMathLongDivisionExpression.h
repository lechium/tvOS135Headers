/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@class SCRCMathExpression;

@interface SCRCMathLongDivisionExpression : SCRCMathArrayExpression {

	SCRCMathExpression* _divisor;

}

@property (nonatomic,retain) SCRCMathExpression * divisor;              //@synthesize divisor=_divisor - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(void)setDivisor:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)divisor;
@end
