/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSRegistrationAccountStatus : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _accountType;
	unsigned _doesExist;
	unsigned _isEnabled;
	unsigned _isUserDisabled;
	unsigned _isiCloudSignedIn;
	unsigned _isiTunesSignedIn;
	int _registrationError;
	int _registrationErrorReason;
	int _registrationStatus;
	NSString* _serviceIdentifier;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAccountType; 
@property (assign,nonatomic) int accountType;                              //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceIdentifier; 
@property (nonatomic,retain) NSString * serviceIdentifier;                 //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDoesExist; 
@property (assign,nonatomic) unsigned doesExist;                           //@synthesize doesExist=_doesExist - In the implementation block
@property (assign,nonatomic) BOOL hasIsEnabled; 
@property (assign,nonatomic) unsigned isEnabled;                           //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserDisabled; 
@property (assign,nonatomic) unsigned isUserDisabled;                      //@synthesize isUserDisabled=_isUserDisabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsiCloudSignedIn; 
@property (assign,nonatomic) unsigned isiCloudSignedIn;                    //@synthesize isiCloudSignedIn=_isiCloudSignedIn - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationStatus; 
@property (assign,nonatomic) int registrationStatus;                       //@synthesize registrationStatus=_registrationStatus - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationError; 
@property (assign,nonatomic) int registrationError;                        //@synthesize registrationError=_registrationError - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationErrorReason; 
@property (assign,nonatomic) int registrationErrorReason;                  //@synthesize registrationErrorReason=_registrationErrorReason - In the implementation block
@property (assign,nonatomic) BOOL hasIsiTunesSignedIn; 
@property (assign,nonatomic) unsigned isiTunesSignedIn;                    //@synthesize isiTunesSignedIn=_isiTunesSignedIn - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)isEnabled;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)accountType;
-(void)setAccountType:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setRegistrationError:(int)arg1 ;
-(void)setHasRegistrationError:(BOOL)arg1 ;
-(BOOL)hasRegistrationError;
-(int)registrationError;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)setHasAccountType:(BOOL)arg1 ;
-(BOOL)hasAccountType;
-(BOOL)hasServiceIdentifier;
-(void)setDoesExist:(unsigned)arg1 ;
-(void)setHasDoesExist:(BOOL)arg1 ;
-(BOOL)hasDoesExist;
-(void)setIsEnabled:(unsigned)arg1 ;
-(void)setHasIsEnabled:(BOOL)arg1 ;
-(BOOL)hasIsEnabled;
-(void)setIsUserDisabled:(unsigned)arg1 ;
-(void)setHasIsUserDisabled:(BOOL)arg1 ;
-(BOOL)hasIsUserDisabled;
-(void)setIsiCloudSignedIn:(unsigned)arg1 ;
-(void)setHasIsiCloudSignedIn:(BOOL)arg1 ;
-(BOOL)hasIsiCloudSignedIn;
-(void)setRegistrationStatus:(int)arg1 ;
-(void)setHasRegistrationStatus:(BOOL)arg1 ;
-(BOOL)hasRegistrationStatus;
-(void)setRegistrationErrorReason:(int)arg1 ;
-(void)setHasRegistrationErrorReason:(BOOL)arg1 ;
-(BOOL)hasRegistrationErrorReason;
-(void)setIsiTunesSignedIn:(unsigned)arg1 ;
-(void)setHasIsiTunesSignedIn:(BOOL)arg1 ;
-(BOOL)hasIsiTunesSignedIn;
-(unsigned)doesExist;
-(unsigned)isUserDisabled;
-(unsigned)isiCloudSignedIn;
-(int)registrationStatus;
-(int)registrationErrorReason;
-(unsigned)isiTunesSignedIn;
@end

