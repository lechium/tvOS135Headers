/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/CNKeyDescriptor_Private.h>

@class NSString;

@interface CNContactKeyVector : NSObject <NSMutableCopying, CNKeyDescriptor_Private> {

	long long _bitBuckets[1];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyVector;
+(id)keyVectorWithKeys:(id)arg1 ;
+(id)keyVectorWithKey:(id)arg1 ;
+(id)freezeIfClassIsImmutable:(id)arg1 ;
+(id)keyVectorWithAllKeys;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(BOOL)containsKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_cn_requiredKeys;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(id)_cn_optionalKeys;
-(id)keyVectorByAddingKey:(id)arg1 ;
-(BOOL)intersectsKeyVector:(id)arg1 ;
-(BOOL)isEqualToKeyVector:(id)arg1 ;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(id)_cn_ignorableKeys;
-(id)keyVectorByAddingKeysFromKeyVector:(id)arg1 ;
-(id)keyVectorByRemovingKeysFromKeyVector:(id)arg1 ;
-(id)initWithKeys:(id)arg1 ;
-(id)initWithAllKeys;
-(void)_checkStorageSize;
-(long long*)_bitBuckets;
-(id)keyVectorByAddingKeys:(id)arg1 ;
-(BOOL)containsAllKeys;
-(BOOL)isSubsetOfKeyVector:(id)arg1 ;
@end

