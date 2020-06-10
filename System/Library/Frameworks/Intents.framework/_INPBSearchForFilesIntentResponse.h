/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBSearchForFilesIntentResponse.h>
@class NSArray, _INPBInteger, _INPBString;


@protocol _INPBSearchForFilesIntentResponse <NSObject>
@property (nonatomic,copy) NSArray * entities; 
@property (nonatomic,readonly) unsigned long long entitiesCount; 
@property (nonatomic,retain) _INPBInteger * numResults; 
@property (nonatomic,readonly) BOOL hasNumResults; 
@property (nonatomic,retain) _INPBString * query; 
@property (nonatomic,readonly) BOOL hasQuery; 
@property (assign,nonatomic) BOOL success; 
@property (assign,nonatomic) BOOL hasSuccess; 
@required
+(Class)entitiesType;
-(_INPBString *)query;
-(void)setQuery:(id)arg1;
-(NSArray *)entities;
-(void)setEntities:(id)arg1;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1;
-(void)setHasSuccess:(BOOL)arg1;
-(BOOL)hasSuccess;
-(BOOL)hasQuery;
-(void)clearEntities;
-(void)addEntities:(id)arg1;
-(id)entitiesAtIndex:(unsigned long long)arg1;
-(unsigned long long)entitiesCount;
-(_INPBInteger *)numResults;
-(void)setNumResults:(id)arg1;
-(BOOL)hasNumResults;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, _INPBInteger, _INPBString, NSString;

@interface _INPBSearchForFilesIntentResponse : PBCodable <_INPBSearchForFilesIntentResponse, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL _success;
	BOOL __encodeLegacyGloryData;
	NSArray* _entities;
	_INPBInteger* _numResults;
	_INPBString* _query;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * entities;                                                           //@synthesize entities=_entities - In the implementation block
@property (nonatomic,readonly) unsigned long long entitiesCount; 
@property (nonatomic,retain) _INPBInteger * numResults;                                                  //@synthesize numResults=_numResults - In the implementation block
@property (nonatomic,readonly) BOOL hasNumResults; 
@property (nonatomic,retain) _INPBString * query;                                                        //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) BOOL hasQuery; 
@property (assign,nonatomic) BOOL success;                                                               //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
+(BOOL)supportsSecureCoding;
+(Class)entitiesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_INPBString *)query;
-(id)dictionaryRepresentation;
-(void)setQuery:(_INPBString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSArray *)entities;
-(void)setEntities:(NSArray *)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(BOOL)hasQuery;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)clearEntities;
-(void)addEntities:(id)arg1 ;
-(id)entitiesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)entitiesCount;
-(_INPBInteger *)numResults;
-(void)setNumResults:(_INPBInteger *)arg1 ;
-(BOOL)hasNumResults;
@end

