/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SADestroyAssistant : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * assistantId; 
@property (nonatomic,copy) NSString * speechId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)destroyAssistant;
+(id)destroyAssistantWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)speechId;
-(void)setSpeechId:(NSString *)arg1 ;
-(NSString *)assistantId;
-(void)setAssistantId:(NSString *)arg1 ;
@end

