/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDManagementFrames : PBCodable <NSCopying> {

	unsigned long long _aTIM;
	unsigned long long _action;
	unsigned long long _assocRequest;
	unsigned long long _assocResponse;
	unsigned long long _auth;
	unsigned long long _beacon;
	unsigned long long _deauth;
	unsigned long long _disassoc;
	unsigned long long _probeRequest;
	unsigned long long _probeResponse;
	unsigned long long _reassocRequest;
	unsigned long long _reassocResponse;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasAssocRequest; 
@property (assign,nonatomic) unsigned long long assocRequest;                 //@synthesize assocRequest=_assocRequest - In the implementation block
@property (assign,nonatomic) BOOL hasAssocResponse; 
@property (assign,nonatomic) unsigned long long assocResponse;                //@synthesize assocResponse=_assocResponse - In the implementation block
@property (assign,nonatomic) BOOL hasReassocRequest; 
@property (assign,nonatomic) unsigned long long reassocRequest;               //@synthesize reassocRequest=_reassocRequest - In the implementation block
@property (assign,nonatomic) BOOL hasReassocResponse; 
@property (assign,nonatomic) unsigned long long reassocResponse;              //@synthesize reassocResponse=_reassocResponse - In the implementation block
@property (assign,nonatomic) BOOL hasProbeRequest; 
@property (assign,nonatomic) unsigned long long probeRequest;                 //@synthesize probeRequest=_probeRequest - In the implementation block
@property (assign,nonatomic) BOOL hasProbeResponse; 
@property (assign,nonatomic) unsigned long long probeResponse;                //@synthesize probeResponse=_probeResponse - In the implementation block
@property (assign,nonatomic) BOOL hasBeacon; 
@property (assign,nonatomic) unsigned long long beacon;                       //@synthesize beacon=_beacon - In the implementation block
@property (assign,nonatomic) BOOL hasATIM; 
@property (assign,nonatomic) unsigned long long aTIM;                         //@synthesize aTIM=_aTIM - In the implementation block
@property (assign,nonatomic) BOOL hasDisassoc; 
@property (assign,nonatomic) unsigned long long disassoc;                     //@synthesize disassoc=_disassoc - In the implementation block
@property (assign,nonatomic) BOOL hasAuth; 
@property (assign,nonatomic) unsigned long long auth;                         //@synthesize auth=_auth - In the implementation block
@property (assign,nonatomic) BOOL hasDeauth; 
@property (assign,nonatomic) unsigned long long deauth;                       //@synthesize deauth=_deauth - In the implementation block
@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) unsigned long long action;                       //@synthesize action=_action - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)action;
-(void)setAction:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)hasAction;
-(void)setAssocRequest:(unsigned long long)arg1 ;
-(void)setHasAssocRequest:(BOOL)arg1 ;
-(BOOL)hasAssocRequest;
-(void)setAssocResponse:(unsigned long long)arg1 ;
-(void)setHasAssocResponse:(BOOL)arg1 ;
-(BOOL)hasAssocResponse;
-(void)setReassocRequest:(unsigned long long)arg1 ;
-(void)setHasReassocRequest:(BOOL)arg1 ;
-(BOOL)hasReassocRequest;
-(void)setReassocResponse:(unsigned long long)arg1 ;
-(void)setHasReassocResponse:(BOOL)arg1 ;
-(BOOL)hasReassocResponse;
-(void)setProbeRequest:(unsigned long long)arg1 ;
-(void)setHasProbeRequest:(BOOL)arg1 ;
-(BOOL)hasProbeRequest;
-(void)setProbeResponse:(unsigned long long)arg1 ;
-(void)setHasProbeResponse:(BOOL)arg1 ;
-(BOOL)hasProbeResponse;
-(void)setBeacon:(unsigned long long)arg1 ;
-(void)setHasBeacon:(BOOL)arg1 ;
-(BOOL)hasBeacon;
-(void)setATIM:(unsigned long long)arg1 ;
-(void)setHasATIM:(BOOL)arg1 ;
-(BOOL)hasATIM;
-(void)setDisassoc:(unsigned long long)arg1 ;
-(void)setHasDisassoc:(BOOL)arg1 ;
-(BOOL)hasDisassoc;
-(void)setAuth:(unsigned long long)arg1 ;
-(void)setHasAuth:(BOOL)arg1 ;
-(BOOL)hasAuth;
-(void)setDeauth:(unsigned long long)arg1 ;
-(void)setHasDeauth:(BOOL)arg1 ;
-(BOOL)hasDeauth;
-(unsigned long long)assocRequest;
-(unsigned long long)assocResponse;
-(unsigned long long)reassocRequest;
-(unsigned long long)reassocResponse;
-(unsigned long long)probeRequest;
-(unsigned long long)probeResponse;
-(unsigned long long)beacon;
-(unsigned long long)aTIM;
-(unsigned long long)disassoc;
-(unsigned long long)auth;
-(unsigned long long)deauth;
@end

