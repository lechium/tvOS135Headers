/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/ICAction.h>

@class ICScheme, NSString;

@interface ICSchemeAction : ICAction {

	ICScheme* _scheme;

}

@property (nonatomic,readonly) NSString * formatString; 
@property (nonatomic,__weak,readonly) ICScheme * scheme;                                 //@synthesize scheme=_scheme - In the implementation block
@property (getter=isCallbackAction,nonatomic,readonly) BOOL callbackAction; 
-(ICScheme *)scheme;
-(NSString *)formatString;
-(void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(id)initWithDefinition:(id)arg1 scheme:(id)arg2 ;
-(id)formatKeys;
-(BOOL)isCallbackAction;
-(id)defersCompletionUntilReturn;
@end

