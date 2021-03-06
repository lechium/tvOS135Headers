/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@class NSString;

@interface WFAskForInputAction : WFHandleCustomIntentAction

@property (nonatomic,readonly) NSString * inputType; 
@property (nonatomic,readonly) NSString * promptText; 
@property (nonatomic,readonly) NSString * defaultAnswer; 
@property (nonatomic,readonly) long long datePickerMode; 
@property (nonatomic,readonly) BOOL immediatelyActivateWatchDictation; 
-(NSString *)inputType;
-(long long)datePickerMode;
-(NSString *)promptText;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)getOutputFromIntentResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)outputContentClasses;
-(NSString *)defaultAnswer;
-(BOOL)immediatelyActivateWatchDictation;
-(void)runWithSiriUserInterface:(id)arg1 input:(id)arg2 ;
-(void)finishRunningWithResultText:(id)arg1 ;
-(void)finishRunningWithDate:(id)arg1 ;
@end

