/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MUMathExpressionBase.h>

@interface MUMathExpressionDoubleBased : MUMathExpressionBase {

	FunctionInterpreter<double>* mInterpreter;

}
+(double)invalidResult;
+(double)evaluateString:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id)stringValue;
-(void)cleanup;
-(double)valueForVariable:(id)arg1 ;
-(BOOL)isConstant;
-(double)evaluate;
-(id)initWithString:(id)arg1 error:(id*)arg2 ;
-(void)setVariableValues:(id)arg1 ;
-(void)setValue:(double)arg1 forVariable:(id)arg2 ;
-(void)resetAllVariables;
-(void)_resetVariableIndicies;
-(void)replaceVariable:(id)arg1 withValue:(double)arg2 ;
-(BOOL)isValueIllegal:(double)arg1 ;
@end

