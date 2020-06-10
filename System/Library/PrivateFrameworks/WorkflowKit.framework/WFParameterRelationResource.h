/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFResource.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class WFAction, NSString;

@interface WFParameterRelationResource : WFResource <WFActionEventObserver> {

	WFAction* _action;

}

@property (assign,nonatomic,__weak) WFAction * action;               //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSString * parameterKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)mustBeAvailableForDisplay;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)refreshAvailability;
-(id)initWithParameterKey:(id)arg1 parameterValues:(id)arg2 relation:(id)arg3 ;
-(id)comparedValues;
-(NSString *)parameterKey;
-(void)setupWithAction:(id)arg1 ;
@end

