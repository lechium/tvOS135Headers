/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBKeyValueTuple.h>
@class NSString, NSData;


@protocol _SFPBKeyValueTuple <NSObject>
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)key;
-(id)initWithDictionary:(id)arg1;
-(NSString *)value;
-(void)setKey:(id)arg1;
-(void)setValue:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBKeyValueTuple : PBCodable <_SFPBKeyValueTuple, NSSecureCoding> {

	NSString* _key;
	NSString* _value;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * key;                          //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)key;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)value;
-(void)setKey:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

