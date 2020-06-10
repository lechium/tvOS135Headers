/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, MAGraphReference, NSString, MAGraph;

@interface MAElement : NSObject <NSCopying> {

	unsigned _identifier;
	unsigned short _domain;
	NSMutableDictionary* _properties;
	MAGraphReference* _graphReference;
	float _weight;
	NSString* _label;

}

@property (assign,nonatomic) unsigned identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) MAGraphReference * graphReference;              //@synthesize graphReference=_graphReference - In the implementation block
@property (assign,nonatomic) float weight;                                   //@synthesize weight=_weight - In the implementation block
@property (readonly) BOOL isAbstract; 
@property (nonatomic,copy,readonly) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) unsigned short domain;                        //@synthesize domain=_domain - In the implementation block
@property (nonatomic,__weak,readonly) MAGraph * graph; 
+(BOOL)areProperties:(id)arg1 similarToOtherProperties:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned short)domain;
-(id)propertyForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(unsigned)identifier;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)removePropertyForKey:(id)arg1 ;
-(NSString *)label;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(void)setProperties:(id)arg1 ;
-(BOOL)isAbstract;
-(unsigned long long)propertiesCount;
-(MAGraph *)graph;
-(id)shortDescription;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(void)removeAllProperties;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(id)propertyKeys;
-(id)visualString;
-(id)propertyDictionary;
-(BOOL)matchesElement:(id)arg1 includingProperties:(BOOL)arg2 ;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(unsigned long long)_memoryFootprint:(id)arg1 ;
-(BOOL)isEqualToElement:(id)arg1 ;
-(BOOL)hasEqualPropertiesToElement:(id)arg1 ;
-(BOOL)isNode;
-(id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2 ;
-(BOOL)hasPropertyForKey:(id)arg1 ;
-(BOOL)hasPropertyForKey:(id)arg1 kindOfClass:(Class)arg2 ;
-(BOOL)hasPropertiesForKeys:(id)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(void)_removePersistentStorePropertyForKey:(id)arg1 ;
-(void)_removeAllPersistentStoreProperties;
-(void)_removeAllLocalProperties;
-(void)_setPersistentStorePropertyValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setLocalProperties:(id)arg1 ;
-(void)_setPersistentStoreProperties:(id)arg1 ;
-(void)mergeProperties:(id)arg1 ;
-(id)propertiesVisualStringForKeys:(id)arg1 ;
-(MAGraphReference *)graphReference;
-(void)setGraphReference:(MAGraphReference *)arg1 ;
@end

