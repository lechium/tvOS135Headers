/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBDictionary.h>
@class NSArray;


@protocol _INPBDictionary <NSObject>
@property (nonatomic,copy) NSArray * pairs; 
@property (nonatomic,readonly) unsigned long long pairsCount; 
@required
+(Class)pairType;
-(NSArray *)pairs;
-(void)setPairs:(id)arg1;
-(unsigned long long)pairsCount;
-(void)addPair:(id)arg1;
-(void)clearPairs;
-(id)pairAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface _INPBDictionary : PBCodable <_INPBDictionary, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSArray* _pairs;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * pairs;                                                              //@synthesize pairs=_pairs - In the implementation block
@property (nonatomic,readonly) unsigned long long pairsCount; 
+(BOOL)supportsSecureCoding;
+(Class)pairType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSArray *)pairs;
-(void)setPairs:(NSArray *)arg1 ;
-(unsigned long long)pairsCount;
-(void)addPair:(id)arg1 ;
-(void)clearPairs;
-(id)pairAtIndex:(unsigned long long)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
@end

