/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression {

	long long _fontStyle;

}

@property (nonatomic,readonly) long long fontStyle;              //@synthesize fontStyle=_fontStyle - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isNumber;
-(long long)fontStyle;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)mathMLString;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 isPartOfWord:(BOOL)arg3 ;
-(BOOL)isNaturalSuperscript;
-(BOOL)canFormWordStartingWithExpression:(id)arg1 ;
-(BOOL)_isPrime;
@end

