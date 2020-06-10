/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@interface SCRCMathRowExpression : SCRCMathArrayExpression
-(long long)integerValue;
-(BOOL)isNumber;
-(BOOL)isInteger;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)childSpeakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long*)arg4 ;
-(id)mathMLTag;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)latexDescriptionInMathMode:(BOOL)arg1 ;
-(unsigned long long)fractionLevel;
-(id)speakableSummary;
-(BOOL)canBeUsedWithRange;
-(BOOL)canBeUsedWithBase;
-(BOOL)isFunctionName;
-(BOOL)isWordOrAbbreviation;
-(BOOL)beginsWithSpace;
-(BOOL)endsWithSpace;
-(id)_indexesOfCharactersInWords;
-(void)_addSpacingAndChild:(id)arg1 toResult:(id)arg2 nextChild:(id)arg3 previousChild:(id)arg4 numberOfOuterRadicals:(unsigned long long)arg5 treePosition:(id)arg6 ;
@end
