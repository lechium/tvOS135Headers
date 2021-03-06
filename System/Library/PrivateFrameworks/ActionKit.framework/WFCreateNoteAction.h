/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFCreateNoteAction : WFHandleSystemIntentAction
+(void)getNoteContentFromInput:(id)arg1 includingImages:(BOOL)arg2 actionName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)skipsProcessingHiddenParameters;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)getOutputFromIntentResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)targetDataInfo;
-(void)initializeParameters;
-(id)inputContentClasses;
-(id)localizedKeyParameterDisplayName;
-(BOOL)inputPassthrough;
-(id)groupParameter;
-(void)selectedAppDidChange;
@end

