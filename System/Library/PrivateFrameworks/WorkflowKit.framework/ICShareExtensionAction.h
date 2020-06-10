/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/ICAction.h>

@class ICShareExtension, NSString, NSArray;

@interface ICShareExtensionAction : ICAction {

	ICShareExtension* _shareExtension;

}

@property (nonatomic,__weak,readonly) ICShareExtension * shareExtension;              //@synthesize shareExtension=_shareExtension - In the implementation block
@property (nonatomic,readonly) NSString * inputType; 
@property (nonatomic,readonly) NSArray * socialTypes; 
@property (nonatomic,readonly) NSArray * contentItemClasses; 
-(id)name;
-(id)identifier;
-(id)category;
-(NSString *)inputType;
-(id)descriptionDictionary;
-(id)inputContentClasses;
-(BOOL)inputsMultipleItems;
-(id)initWithDefinition:(id)arg1 shareExtension:(id)arg2 ;
-(void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(BOOL)inputRequired;
-(NSArray *)contentItemClasses;
-(NSArray *)socialTypes;
-(id)textItemHandling;
-(ICShareExtension *)shareExtension;
@end
