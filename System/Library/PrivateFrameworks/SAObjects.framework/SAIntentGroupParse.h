/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupParse : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * jsonIntent; 
@property (nonatomic,copy) NSString * jsonIntentTypeName; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * nlv3Parse; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * siriKitIntent; 
@property (nonatomic,copy) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)jsonIntent;
-(void)setJsonIntent:(NSString *)arg1 ;
-(NSString *)jsonIntentTypeName;
-(void)setJsonIntentTypeName:(NSString *)arg1 ;
-(SAIntentGroupProtobufMessage *)nlv3Parse;
-(void)setNlv3Parse:(SAIntentGroupProtobufMessage *)arg1 ;
-(SAIntentGroupProtobufMessage *)siriKitIntent;
-(void)setSiriKitIntent:(SAIntentGroupProtobufMessage *)arg1 ;
@end
