/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SASVoiceSearchPartialResult : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * recognitionText; 
@property (assign,nonatomic) BOOL stable; 
@property (nonatomic,copy) NSArray * voiceSearchResults; 
+(id)voiceSearchPartialResult;
+(id)voiceSearchPartialResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)recognitionText;
-(void)setRecognitionText:(NSString *)arg1 ;
-(NSArray *)voiceSearchResults;
-(void)setVoiceSearchResults:(NSArray *)arg1 ;
-(BOOL)stable;
-(void)setStable:(BOOL)arg1 ;
@end

