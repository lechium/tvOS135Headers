/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAIntentGroupIntentSearchMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * jsonData; 
@property (nonatomic,copy) NSString * metadataType; 
@property (assign,nonatomic) long long version; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)intentSearchMetadata;
+(id)intentSearchMetadataWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(id)groupIdentifier;
-(NSString *)metadataType;
-(id)encodedClassName;
-(NSString *)jsonData;
-(void)setJsonData:(NSString *)arg1 ;
-(void)setMetadataType:(NSString *)arg1 ;
@end

