/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString;

@interface SAResultSelected : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * processedAudioDuration; 
@property (nonatomic,copy) NSString * resultId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)resultSelected;
+(id)resultSelectedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)processedAudioDuration;
-(void)setProcessedAudioDuration:(NSNumber *)arg1 ;
-(NSString *)resultId;
-(void)setResultId:(NSString *)arg1 ;
@end

