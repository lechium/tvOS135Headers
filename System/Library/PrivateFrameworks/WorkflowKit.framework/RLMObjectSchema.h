/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, RLMProperty, NSDictionary;

@interface RLMObjectSchema : NSObject <NSCopying> {

	BOOL _isSwiftClass;
	NSArray* _swiftGenericProperties;
	NSArray* _properties;
	NSString* _className;
	RLMProperty* _primaryKeyProperty;
	NSDictionary* _allPropertiesByName;
	Class _objectClass;
	Class _accessorClass;
	Class _unmanagedClass;
	NSArray* _computedProperties;

}

@property (nonatomic,retain) NSDictionary * allPropertiesByName;              //@synthesize allPropertiesByName=_allPropertiesByName - In the implementation block
@property (nonatomic,retain) NSString * className;                            //@synthesize className=_className - In the implementation block
@property (nonatomic,readonly) NSString * objectName; 
@property (nonatomic,copy) NSArray * properties;                              //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL isSwiftClass;                               //@synthesize isSwiftClass=_isSwiftClass - In the implementation block
@property (assign,nonatomic) Class objectClass;                               //@synthesize objectClass=_objectClass - In the implementation block
@property (assign,nonatomic) Class accessorClass;                             //@synthesize accessorClass=_accessorClass - In the implementation block
@property (assign,nonatomic) Class unmanagedClass;                            //@synthesize unmanagedClass=_unmanagedClass - In the implementation block
@property (nonatomic,retain) RLMProperty * primaryKeyProperty;                //@synthesize primaryKeyProperty=_primaryKeyProperty - In the implementation block
@property (nonatomic,copy) NSArray * computedProperties;                      //@synthesize computedProperties=_computedProperties - In the implementation block
@property (nonatomic,readonly) NSArray * swiftGenericProperties; 
+(id)propertiesForClass:(Class)arg1 isSwift:(BOOL)arg2 ;
+(void)addSwiftProperties:(id)arg1 objectUtil:(Class)arg2 instance:(id)arg3 indexed:(id)arg4 nameMap:(id)arg5 ;
+(id)objectSchemaForObjectStoreSchema:(const ObjectSchema*)arg1 ;
+(id)schemaForObjectClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSArray *)properties;
-(NSString *)className;
-(Class)objectClass;
-(void)setObjectClass:(Class)arg1 ;
-(void)setProperties:(NSArray *)arg1 ;
-(void)setClassName:(NSString *)arg1 ;
-(NSArray *)computedProperties;
-(void)setAccessorClass:(Class)arg1 ;
-(RLMProperty *)primaryKeyProperty;
-(Class)accessorClass;
-(BOOL)isSwiftClass;
-(Class)unmanagedClass;
-(void)_propertiesDidChange;
-(void)setPrimaryKeyProperty:(RLMProperty *)arg1 ;
-(void)setIsSwiftClass:(BOOL)arg1 ;
-(void)setComputedProperties:(NSArray *)arg1 ;
-(id)initWithClassName:(id)arg1 objectClass:(Class)arg2 properties:(id)arg3 ;
-(NSArray *)swiftGenericProperties;
-(NSDictionary *)allPropertiesByName;
-(void)setAllPropertiesByName:(NSDictionary *)arg1 ;
-(NSString *)objectName;
-(ObjectSchema*)objectStoreCopy:(id)arg1 ;
-(BOOL)isEqualToObjectSchema:(id)arg1 ;
-(void)setUnmanagedClass:(Class)arg1 ;
@end

