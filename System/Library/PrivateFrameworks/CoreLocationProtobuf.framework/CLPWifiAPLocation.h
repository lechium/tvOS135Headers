/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLPLocation;

@interface CLPWifiAPLocation : PBCodable <NSCopying> {

	double _scanTimestamp;
	NSString* _appBundleId;
	int _channel;
	int _hidden;
	CLPLocation* _location;
	NSString* _mac;
	int _rssi;
	int _serverHash;
	SCD_Struct_CL1 _has;

}

@property (nonatomic,retain) NSString * mac;                      //@synthesize mac=_mac - In the implementation block
@property (assign,nonatomic) int channel;                         //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) int hidden;                          //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) int rssi;                            //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasScanTimestamp; 
@property (assign,nonatomic) double scanTimestamp;                //@synthesize scanTimestamp=_scanTimestamp - In the implementation block
@property (nonatomic,retain) CLPLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;              //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                      //@synthesize serverHash=_serverHash - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)channel;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)rssi;
-(void)setRssi:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setChannel:(int)arg1 ;
-(CLPLocation *)location;
-(void)setHidden:(int)arg1 ;
-(int)hidden;
-(void)setLocation:(CLPLocation *)arg1 ;
-(void)setAppBundleId:(NSString *)arg1 ;
-(void)setServerHash:(int)arg1 ;
-(void)setHasServerHash:(BOOL)arg1 ;
-(BOOL)hasServerHash;
-(NSString *)appBundleId;
-(int)serverHash;
-(BOOL)hasAppBundleId;
-(void)setMac:(NSString *)arg1 ;
-(void)setHasHidden:(BOOL)arg1 ;
-(BOOL)hasHidden;
-(NSString *)mac;
-(void)setScanTimestamp:(double)arg1 ;
-(void)setHasScanTimestamp:(BOOL)arg1 ;
-(BOOL)hasScanTimestamp;
-(double)scanTimestamp;
@end

