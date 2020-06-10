/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SACFAbstractClientCommandCompleted.h>

@class NSString, SACFProvideContext;

@interface SACFFlowCompleted : SACFAbstractClientCommandCompleted

@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,retain) SACFProvideContext * updateContext; 
+(id)flowCompleted;
+(id)flowCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SACFProvideContext *)updateContext;
-(void)setUpdateContext:(SACFProvideContext *)arg1 ;
@end
