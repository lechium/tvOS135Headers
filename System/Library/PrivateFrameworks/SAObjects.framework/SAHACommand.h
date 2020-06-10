/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SAConditionallyMutatingClientBoundCommand.h>

@class NSArray, NSNumber, SAHAFilter, NSString;

@interface SAHACommand : SADomainCommand <SAConditionallyMutatingClientBoundCommand>

@property (nonatomic,copy) NSArray * actionRequests; 
@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,copy) NSNumber * commandTimeout; 
@property (nonatomic,retain) SAHAFilter * filter; 
@property (assign,nonatomic) BOOL mutatingCommand; 
@property (nonatomic,copy) NSString * serverValidity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)command;
+(id)commandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(SAHAFilter *)filter;
-(void)setFilter:(SAHAFilter *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setMutatingCommand:(BOOL)arg1 ;
-(NSString *)serverValidity;
-(void)setServerValidity:(NSString *)arg1 ;
-(NSArray *)actionRequests;
-(void)setActionRequests:(NSArray *)arg1 ;
-(NSNumber *)commandTimeout;
-(void)setCommandTimeout:(NSNumber *)arg1 ;
@end
