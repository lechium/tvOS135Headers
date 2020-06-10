/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufPromptDetailsForVirtualCard : PBCodable <NSCopying> {

	NSString* _identifier;
	BOOL _showNotification;
	SCD_Struct_PK13 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasShowNotification; 
@property (assign,nonatomic) BOOL showNotification;                 //@synthesize showNotification=_showNotification - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setShowNotification:(BOOL)arg1 ;
-(void)setHasShowNotification:(BOOL)arg1 ;
-(BOOL)hasShowNotification;
-(BOOL)showNotification;
@end

