/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSInputStream, ATCodableStream;

@interface ATMessage : NSObject <NSSecureCoding> {

	unsigned _messageID;
	unsigned _sessionID;
	NSDictionary* _parameters;
	double _timestamp;
	NSInputStream* _dataStream;
	ATCodableStream* _stream;

}

@property (nonatomic,retain) ATCodableStream * stream;                //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) unsigned messageID;                      //@synthesize messageID=_messageID - In the implementation block
@property (assign,nonatomic) unsigned sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;               //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSInputStream * dataStream;              //@synthesize dataStream=_dataStream - In the implementation block
@property (assign,nonatomic) unsigned options; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(unsigned)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(double)timestamp;
-(NSDictionary *)parameters;
-(ATCodableStream *)stream;
-(void)setTimestamp:(double)arg1 ;
-(void)setStream:(ATCodableStream *)arg1 ;
-(unsigned)messageID;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setMessageID:(unsigned)arg1 ;
-(NSInputStream *)dataStream;
-(id)parameterForKey:(id)arg1 ;
-(id)additionalDescription;
-(void)setDataStream:(NSInputStream *)arg1 ;
@end

