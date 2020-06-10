/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDictionary;

@interface SASMultilingualSpeechRecognized : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL multilingualDisabled; 
@property (nonatomic,copy) NSDictionary * speechRecognizedByLanguage; 
+(id)multilingualSpeechRecognized;
+(id)multilingualSpeechRecognizedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)multilingualDisabled;
-(void)setMultilingualDisabled:(BOOL)arg1 ;
-(NSDictionary *)speechRecognizedByLanguage;
-(void)setSpeechRecognizedByLanguage:(NSDictionary *)arg1 ;
@end
