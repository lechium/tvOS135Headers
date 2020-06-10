/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBActivateCarSignalIntentResponse.h>

@protocol _INPBActivateCarSignalIntentResponse <NSObject>
@property (nonatomic,readonly) int* signals; 
@property (nonatomic,readonly) unsigned long long signalsCount; 
@required
-(int*)signals;
-(void)clearSignals;
-(void)addSignals:(int)arg1;
-(int)signalsAtIndex:(unsigned long long)arg1;
-(void)setSignals:(int*)arg1 count:(unsigned long long)arg2;
-(id)signalsAsString:(int)arg1;
-(int)StringAsSignals:(id)arg1;
-(unsigned long long)signalsCount;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _INPBActivateCarSignalIntentResponse : PBCodable <_INPBActivateCarSignalIntentResponse, NSSecureCoding, NSCopying> {

	SCD_Struct_IN5* _signals;
	{?=} _has;
	BOOL __encodeLegacyGloryData;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int* signals; 
@property (nonatomic,readonly) unsigned long long signalsCount; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(int*)signals;
-(void)clearSignals;
-(void)addSignals:(int)arg1 ;
-(int)signalsAtIndex:(unsigned long long)arg1 ;
-(void)setSignals:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)signalsAsString:(int)arg1 ;
-(int)StringAsSignals:(id)arg1 ;
-(unsigned long long)signalsCount;
@end

