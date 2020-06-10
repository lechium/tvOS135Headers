/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOModality : PBCodable <NSCopying> {

	double _timestamp;
	int _confidence;
	BOOL _expectedModality;
	BOOL _notMoving;
	struct {
		unsigned has_timestamp : 1;
		unsigned has_confidence : 1;
		unsigned has_expectedModality : 1;
		unsigned has_notMoving : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) BOOL hasExpectedModality; 
@property (assign,nonatomic) BOOL expectedModality; 
@property (assign,nonatomic) BOOL hasNotMoving; 
@property (assign,nonatomic) BOOL notMoving; 
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)confidence;
-(double)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setConfidence:(int)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(id)confidenceAsString:(int)arg1 ;
-(int)StringAsConfidence:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)expectedModality;
-(void)setExpectedModality:(BOOL)arg1 ;
-(void)setHasExpectedModality:(BOOL)arg1 ;
-(BOOL)hasExpectedModality;
-(BOOL)notMoving;
-(void)setNotMoving:(BOOL)arg1 ;
-(void)setHasNotMoving:(BOOL)arg1 ;
-(BOOL)hasNotMoving;
@end

