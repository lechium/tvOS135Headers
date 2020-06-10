/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SASServerEndpointFeatures : SABaseClientBoundCommand

@property (assign,nonatomic) double eosLikelihood; 
@property (assign,nonatomic) long long numOfWords; 
@property (nonatomic,copy) NSArray * pauseCounts; 
@property (assign,nonatomic) long long processedAudioDurationMs; 
@property (assign,nonatomic) double silenceProbability; 
@property (nonatomic,copy) NSString * taskName; 
@property (assign,nonatomic) long long trailingSilenceDuration; 
+(id)serverEndpointFeatures;
+(id)serverEndpointFeaturesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(double)eosLikelihood;
-(void)setEosLikelihood:(double)arg1 ;
-(long long)numOfWords;
-(void)setNumOfWords:(long long)arg1 ;
-(NSArray *)pauseCounts;
-(void)setPauseCounts:(NSArray *)arg1 ;
-(long long)processedAudioDurationMs;
-(void)setProcessedAudioDurationMs:(long long)arg1 ;
-(double)silenceProbability;
-(void)setSilenceProbability:(double)arg1 ;
-(NSString *)taskName;
-(void)setTaskName:(NSString *)arg1 ;
-(long long)trailingSilenceDuration;
-(void)setTrailingSilenceDuration:(long long)arg1 ;
@end

