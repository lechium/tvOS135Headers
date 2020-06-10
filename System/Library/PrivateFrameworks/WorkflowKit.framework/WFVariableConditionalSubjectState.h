/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFConditionalSubjectParameterState.h>

@class WFContentProperty, WFVariableParameterState, WFVariable;

@interface WFVariableConditionalSubjectState : WFConditionalSubjectParameterState {

	WFContentProperty* _effectiveContentProperty;
	WFVariableParameterState* _variableState;

}

@property (nonatomic,readonly) WFVariableParameterState * variableState;                  //@synthesize variableState=_variableState - In the implementation block
@property (nonatomic,readonly) WFContentProperty * effectiveContentProperty;              //@synthesize effectiveContentProperty=_effectiveContentProperty - In the implementation block
@property (nonatomic,readonly) WFVariable * variable; 
+(id)subjectType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(WFVariable *)variable;
-(id)initWithVariable:(id)arg1 ;
-(long long)contentType;
-(id)serializedRepresentation;
-(id)containedVariables;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(void)getContentWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isIrrational;
-(unsigned long long)tense;
-(BOOL)isEnumeration;
-(void)getEnumerationPossibleStatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)localizedLabelForEnumerationPossibleState:(id)arg1 ;
-(id)unitType;
-(unsigned long long)displayableTimeUnits;
-(id)supportedComparisonOperators;
-(unsigned long long)comparableTimeUnits;
-(BOOL)isCaseInsensitive;
-(id)initWithVariableState:(id)arg1 ;
-(Class)contentClassProvidingContentProperty;
-(WFContentProperty *)effectiveContentProperty;
-(WFVariableParameterState *)variableState;
@end
