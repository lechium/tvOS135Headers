/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAAceDomainSignal : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * appIdHints; 
@property (nonatomic,copy) NSString * domain; 
+(id)aceDomainSignal;
+(id)aceDomainSignalWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)appIdHints;
-(void)setAppIdHints:(NSArray *)arg1 ;
@end

