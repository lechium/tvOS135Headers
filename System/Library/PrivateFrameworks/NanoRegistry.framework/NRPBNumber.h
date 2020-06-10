/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NRPBNumber : PBCodable <NSCopying> {

	double _doubleValue;
	long long _int64Value;
	float _floatValue;
	int _int32Value;
	BOOL _boolValue;
	BOOL _isShortOrChar;
	BOOL _isUnsigned;
	SCD_Struct_NR7 _has;

}

@property (assign,nonatomic) BOOL hasInt32Value; 
@property (assign,nonatomic) int int32Value;                     //@synthesize int32Value=_int32Value - In the implementation block
@property (assign,nonatomic) BOOL hasFloatValue; 
@property (assign,nonatomic) float floatValue;                   //@synthesize floatValue=_floatValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                 //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasBoolValue; 
@property (assign,nonatomic) BOOL boolValue;                     //@synthesize boolValue=_boolValue - In the implementation block
@property (assign,nonatomic) BOOL hasInt64Value; 
@property (assign,nonatomic) long long int64Value;               //@synthesize int64Value=_int64Value - In the implementation block
@property (assign,nonatomic) BOOL hasIsUnsigned; 
@property (assign,nonatomic) BOOL isUnsigned;                    //@synthesize isUnsigned=_isUnsigned - In the implementation block
@property (assign,nonatomic) BOOL hasIsShortOrChar; 
@property (assign,nonatomic) BOOL isShortOrChar;                 //@synthesize isShortOrChar=_isShortOrChar - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(float)floatValue;
-(double)doubleValue;
-(BOOL)boolValue;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)copyTo:(id)arg1 ;
-(void)setHasBoolValue:(BOOL)arg1 ;
-(BOOL)hasBoolValue;
-(void)setFloatValue:(float)arg1 ;
-(long long)int64Value;
-(void)setInt32Value:(int)arg1 ;
-(void)setHasInt32Value:(BOOL)arg1 ;
-(BOOL)hasInt32Value;
-(void)setHasFloatValue:(BOOL)arg1 ;
-(BOOL)hasFloatValue;
-(void)setInt64Value:(long long)arg1 ;
-(void)setHasInt64Value:(BOOL)arg1 ;
-(BOOL)hasInt64Value;
-(void)setIsUnsigned:(BOOL)arg1 ;
-(void)setHasIsUnsigned:(BOOL)arg1 ;
-(BOOL)hasIsUnsigned;
-(void)setIsShortOrChar:(BOOL)arg1 ;
-(void)setHasIsShortOrChar:(BOOL)arg1 ;
-(BOOL)hasIsShortOrChar;
-(int)int32Value;
-(BOOL)isUnsigned;
-(BOOL)isShortOrChar;
@end

