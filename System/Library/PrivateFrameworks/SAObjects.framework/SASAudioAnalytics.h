/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSString;

@interface SASAudioAnalytics : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * acousticFeatures; 
@property (nonatomic,copy) NSDictionary * speechRecognitionFeatures; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioAnalytics;
+(id)audioAnalyticsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_audioAnalytics;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDictionary *)acousticFeatures;
-(void)setAcousticFeatures:(NSDictionary *)arg1 ;
-(NSDictionary *)speechRecognitionFeatures;
-(void)setSpeechRecognitionFeatures:(NSDictionary *)arg1 ;
@end
