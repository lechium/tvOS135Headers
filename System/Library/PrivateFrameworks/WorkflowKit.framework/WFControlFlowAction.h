/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@interface WFControlFlowAction : WFAction {

	long long _mode;

}

@property (nonatomic,readonly) long long mode;              //@synthesize mode=_mode - In the implementation block
-(long long)mode;
-(id)icon;
-(id)shortName;
-(BOOL)hasChildren;
-(id)iconName;
-(BOOL)isDeletable;
-(id)serializedParameters;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2 ;
-(id)outputContentClasses;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(BOOL)inputPassthrough;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg1 ;
-(BOOL)inputTypePassthrough;
-(BOOL)snappingPassthrough;
-(BOOL)displaysParameterSummary;
-(id)createAccompanyingActionWithMode:(long long)arg1 ;
-(void)generateGroupingIdentifierIfNecessary;
-(id)outputIcon;
-(id)groupedOpenAction;
-(id)groupedCloseAction;
-(id)groupedIntermediaryActions;
@end

