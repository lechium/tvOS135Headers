/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaHardwareInterfaceIdentifier, NSData;

@interface SISchemaTextToSpeechBegin : PBCodable {

	int _audioOutputRoute;
	NSString* _aceID;
	SISchemaHardwareInterfaceIdentifier* _hardwareInterfaceVendorID;

}

@property (nonatomic,copy) NSString * aceID;                                                               //@synthesize aceID=_aceID - In the implementation block
@property (assign,nonatomic) int audioOutputRoute;                                                         //@synthesize audioOutputRoute=_audioOutputRoute - In the implementation block
@property (nonatomic,retain) SISchemaHardwareInterfaceIdentifier * hardwareInterfaceVendorID;              //@synthesize hardwareInterfaceVendorID=_hardwareInterfaceVendorID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)jsonData;
-(int)audioOutputRoute;
-(void)setAudioOutputRoute:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setAceID:(NSString *)arg1 ;
-(void)setHardwareInterfaceVendorID:(SISchemaHardwareInterfaceIdentifier *)arg1 ;
-(SISchemaHardwareInterfaceIdentifier *)hardwareInterfaceVendorID;
-(NSString *)aceID;
@end
