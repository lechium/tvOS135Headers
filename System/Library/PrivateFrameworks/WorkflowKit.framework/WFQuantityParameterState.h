/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFParameterState.h>

@class WFNumberStringSubstitutableState, NSString;

@interface WFQuantityParameterState : NSObject <WFParameterState> {

	WFNumberStringSubstitutableState* _magnitudeState;
	NSString* _unitString;

}

@property (nonatomic,readonly) WFNumberStringSubstitutableState * magnitudeState;              //@synthesize magnitudeState=_magnitudeState - In the implementation block
@property (nonatomic,copy,readonly) NSString * unitString;                                     //@synthesize unitString=_unitString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)processingValueClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializedRepresentation;
-(NSString *)unitString;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)initWithMagnitudeState:(id)arg1 unitString:(id)arg2 ;
-(id)containedVariables;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(WFNumberStringSubstitutableState *)magnitudeState;
@end

