/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaLocation, NSString, NSData;

@interface SISchemaDeviceDynamicContext : PBCodable {

	SISchemaLocation* _location;
	NSString* _countryCode;
	double _timeIntervalSince1970;

}

@property (nonatomic,retain) SISchemaLocation * location;               //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                      //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) double timeIntervalSince1970;              //@synthesize timeIntervalSince1970=_timeIntervalSince1970 - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)timeIntervalSince1970;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(SISchemaLocation *)location;
-(void)setLocation:(SISchemaLocation *)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setTimeIntervalSince1970:(double)arg1 ;
@end
