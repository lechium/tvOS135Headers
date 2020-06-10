/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSDictionary, INCodableAttribute, NSArray, NSString;

@interface INCodableAttributeRelationship : NSObject <NSSecureCoding, INCodableCoding> {

	NSDictionary* _originalDictionary;
	INCodableAttribute* _parentCodableAttribute;
	unsigned long long _relation;
	NSArray* _values;
	INCodableAttribute* _codableAttribute;

}

@property (setter=_setOriginalDictionary:,nonatomic,retain) NSDictionary * _originalDictionary;              //@synthesize originalDictionary=_originalDictionary - In the implementation block
@property (nonatomic,__weak,readonly) INCodableAttribute * codableAttribute;                                 //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (assign,nonatomic,__weak) INCodableAttribute * parentCodableAttribute;                             //@synthesize parentCodableAttribute=_parentCodableAttribute - In the implementation block
@property (assign,nonatomic) unsigned long long relation;                                                    //@synthesize relation=_relation - In the implementation block
@property (nonatomic,retain) NSArray * values;                                                               //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) Class valueClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * cacheGroup; 
@property (nonatomic,copy,readonly) NSString * keyPrefix; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(id)dictionaryRepresentation;
-(unsigned long long)relation;
-(void)setRelation:(unsigned long long)arg1 ;
-(NSString *)cacheGroup;
-(NSString *)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INCodableAttribute *)codableAttribute;
-(id)initWithCodableAttribute:(id)arg1 ;
-(NSDictionary *)_originalDictionary;
-(BOOL)compareValue:(id)arg1 ;
-(Class)valueClass;
-(void)_establishRelationship;
-(void)_setOriginalDictionary:(id)arg1 ;
-(INCodableAttribute *)parentCodableAttribute;
-(void)setParentCodableAttribute:(INCodableAttribute *)arg1 ;
@end

