/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAKnowledgeDeleteValueForKey : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * storeName; 
@property (nonatomic,copy) NSString * storeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deleteValueForKey;
+(id)deleteValueForKeyWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)key;
-(void)setStoreName:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)storeType;
-(void)setStoreType:(NSString *)arg1 ;
-(NSString *)storeName;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

