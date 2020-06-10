/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFControlFlowAction.h>

@interface WFRepeatAction : WFControlFlowAction {

	long long _currentIndex;

}

@property (nonatomic,readonly) long long currentIndex;                        //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfLoops; 
-(id)name;
-(unsigned long long)numberOfLoops;
-(long long)currentIndex;
-(void)runWithInput:(id)arg1 error:(id*)arg2 ;
-(id)providedVariableNames;
-(BOOL)outputsMultipleItems;
-(BOOL)shouldRepeatWithVariableSource:(id)arg1 ;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg1 ;
-(id)createAccompanyingActions;
-(BOOL)ignoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2 ;
-(BOOL)displaysParameterSummary;
-(id)defaultOutputName;
-(id)indexVariableName;
-(id)indexVariableNameWithScopeLevel:(unsigned long long)arg1 ;
-(id)itemVariableNameWithScopeLevel:(unsigned long long)arg1 ;
@end

