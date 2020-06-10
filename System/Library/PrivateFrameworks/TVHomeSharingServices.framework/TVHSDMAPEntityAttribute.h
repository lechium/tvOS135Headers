/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHomeSharingServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSValueTransformer;

@interface TVHSDMAPEntityAttribute : NSObject <NSCopying> {

	BOOL _queryable;
	NSNumber* _code;
	NSString* _name;
	unsigned long long _codeValueType;
	unsigned long long _codeValueBytesLength;
	unsigned long long _attributeType;
	NSValueTransformer* _valueTransformer;

}

@property (nonatomic,copy) NSNumber * code;                                        //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL queryable;                                       //@synthesize queryable=_queryable - In the implementation block
@property (assign,nonatomic) unsigned long long codeValueType;                     //@synthesize codeValueType=_codeValueType - In the implementation block
@property (assign,nonatomic) unsigned long long codeValueBytesLength;              //@synthesize codeValueBytesLength=_codeValueBytesLength - In the implementation block
@property (assign,nonatomic) unsigned long long attributeType;                     //@synthesize attributeType=_attributeType - In the implementation block
@property (nonatomic,retain) NSValueTransformer * valueTransformer;                //@synthesize valueTransformer=_valueTransformer - In the implementation block
+(unsigned long long)_attributeTypeFromCodeValueType:(unsigned long long)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSNumber *)code;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)attributeType;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(void)setCode:(NSNumber *)arg1 ;
-(NSValueTransformer *)valueTransformer;
-(void)setValueTransformer:(NSValueTransformer *)arg1 ;
-(unsigned long long)codeValueType;
-(unsigned long long)codeValueBytesLength;
-(BOOL)queryable;
-(void)setQueryable:(BOOL)arg1 ;
-(void)setCodeValueType:(unsigned long long)arg1 ;
-(void)setCodeValueBytesLength:(unsigned long long)arg1 ;
@end
