/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIAppPunchOut, SASportsMetadata, NSString;

@interface SASportsAthleteComparisonSnippetItemDetails : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAUIAppPunchOut * leagueAppPunchOut; 
@property (nonatomic,retain) SASportsMetadata * metadata; 
@property (nonatomic,retain) SAUIAppPunchOut * providerPunchOut; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)athleteComparisonSnippetItemDetails;
+(id)athleteComparisonSnippetItemDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SASportsMetadata *)metadata;
-(void)setMetadata:(SASportsMetadata *)arg1 ;
-(id)encodedClassName;
-(SAUIAppPunchOut *)leagueAppPunchOut;
-(void)setLeagueAppPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAUIAppPunchOut *)providerPunchOut;
-(void)setProviderPunchOut:(SAUIAppPunchOut *)arg1 ;
@end

