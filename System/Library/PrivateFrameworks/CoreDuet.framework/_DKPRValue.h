/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, _DKPRValueType;

@interface _DKPRValue : PBCodable <NSCopying> {

	double _dateValue;
	double _doubleValue;
	long long _integerValue;
	NSData* _blobValue;
	NSString* _stringValue;
	_DKPRValueType* _type;
	SCD_Struct_DK4 _has;

}

@property (nonatomic,retain) _DKPRValueType * type;               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntegerValue; 
@property (assign,nonatomic) long long integerValue;              //@synthesize integerValue=_integerValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                  //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasBlobValue; 
@property (nonatomic,retain) NSData * blobValue;                  //@synthesize blobValue=_blobValue - In the implementation block
@property (assign,nonatomic) BOOL hasDateValue; 
@property (assign,nonatomic) double dateValue;                    //@synthesize dateValue=_dateValue - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)doubleValue;
-(_DKPRValueType *)type;
-(void)setType:(_DKPRValueType *)arg1 ;
-(NSString *)stringValue;
-(long long)integerValue;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(double)dateValue;
-(void)setIntegerValue:(long long)arg1 ;
-(void)setDateValue:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStringValue;
-(void)setHasIntegerValue:(BOOL)arg1 ;
-(BOOL)hasIntegerValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(BOOL)hasDateValue;
-(void)copyTo:(id)arg1 ;
-(void)setBlobValue:(NSData *)arg1 ;
-(BOOL)hasBlobValue;
-(void)setHasDateValue:(BOOL)arg1 ;
-(NSData *)blobValue;
@end

