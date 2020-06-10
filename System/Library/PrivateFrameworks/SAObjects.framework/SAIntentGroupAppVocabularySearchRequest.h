/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAIntentGroupAppVocabularySearchRequest : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSString * appBundleId; 
@property (nonatomic,copy) NSString * appVocabularyType; 
@property (nonatomic,copy) NSString * query; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appVocabularySearchRequest;
+(id)appVocabularySearchRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)appVocabularyType;
-(void)setAppVocabularyType:(NSString *)arg1 ;
@end

