/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/MTLModel.h>
@class NSDictionary;


@protocol MTLModel <NSObject,NSCopying>
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@required
+(id)propertyKeys;
+(id)modelWithDictionary:(id)arg1 error:(id*)arg2;
-(BOOL)validate:(id*)arg1;
-(NSDictionary *)dictionaryValue;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2;
-(void)mergeValueForKey:(id)arg1 fromModel:(id)arg2;

@end


@class NSDictionary, NSString;

@interface MTLModel : NSObject <NSCoding, MTLModel>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)modelVersion;
+(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
+(id)propertyKeys;
+(id)modelWithDictionary:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1 ;
+(id)allowedSecureCodingClassesByPropertyKey;
+(id)permanentPropertyKeys;
+(id)transitoryPropertyKeys;
+(void)generateAndCacheStorageBehaviors;
+(id)encodingBehaviorsByPropertyKey;
+(id)dictionaryValueFromArchivedExternalRepresentation:(id)arg1 version:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(NSDictionary *)dictionaryValue;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(void)mergeValueForKey:(id)arg1 fromModel:(id)arg2 ;
-(id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3 ;
-(void)mergeValuesForKeysFromModel:(id)arg1 ;
@end

