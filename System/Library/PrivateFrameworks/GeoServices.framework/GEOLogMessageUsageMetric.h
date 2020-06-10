/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMessageUsageMetric : PBCodable <NSCopying> {

	GEOSessionID _sessionId;
	unsigned long long _messageSize;
	unsigned _messageCount;
	int _metricState;
	int _metricType;
	unsigned _retryCount;
	struct {
		unsigned has_sessionId : 1;
		unsigned has_messageSize : 1;
		unsigned has_messageCount : 1;
		unsigned has_metricState : 1;
		unsigned has_metricType : 1;
		unsigned has_retryCount : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMetricType; 
@property (assign,nonatomic) int metricType; 
@property (assign,nonatomic) BOOL hasMetricState; 
@property (assign,nonatomic) int metricState; 
@property (assign,nonatomic) BOOL hasMessageCount; 
@property (assign,nonatomic) unsigned messageCount; 
@property (assign,nonatomic) BOOL hasMessageSize; 
@property (assign,nonatomic) unsigned long long messageSize; 
@property (assign,nonatomic) BOOL hasRetryCount; 
@property (assign,nonatomic) unsigned retryCount; 
@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)retryCount;
-(void)setRetryCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)metricType;
-(void)setMetricType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(BOOL)hasSessionId;
-(GEOSessionID)sessionId;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(void)setHasMessageSize:(BOOL)arg1 ;
-(BOOL)hasMessageSize;
-(unsigned long long)messageSize;
-(void)setHasRetryCount:(BOOL)arg1 ;
-(BOOL)hasRetryCount;
-(void)setHasSessionId:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasMetricType:(BOOL)arg1 ;
-(BOOL)hasMetricType;
-(id)metricTypeAsString:(int)arg1 ;
-(int)StringAsMetricType:(id)arg1 ;
-(int)metricState;
-(void)setMetricState:(int)arg1 ;
-(void)setHasMetricState:(BOOL)arg1 ;
-(BOOL)hasMetricState;
-(id)metricStateAsString:(int)arg1 ;
-(int)StringAsMetricState:(id)arg1 ;
-(unsigned)messageCount;
-(void)setMessageCount:(unsigned)arg1 ;
-(void)setHasMessageCount:(BOOL)arg1 ;
-(BOOL)hasMessageCount;
@end

