/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCProfile.h>

@class NSArray, MCProfileServiceProfile, NSNumber;

@interface MCConfigurationProfile : MCProfile {

	NSArray* _payloads;
	NSArray* _managedPayloads;
	BOOL _isCloudProfile;
	BOOL _isCloudLocked;
	BOOL _isMDMProfile;
	MCProfileServiceProfile* _OTAProfile;
	NSNumber* _isCloudProfileNum;
	NSNumber* _isCloudLockedNum;

}

@property (nonatomic,retain) NSNumber * isCloudProfileNum;                      //@synthesize isCloudProfileNum=_isCloudProfileNum - In the implementation block
@property (nonatomic,retain) NSNumber * isCloudLockedNum;                       //@synthesize isCloudLockedNum=_isCloudLockedNum - In the implementation block
@property (nonatomic,retain) MCProfileServiceProfile * OTAProfile;              //@synthesize OTAProfile=_OTAProfile - In the implementation block
@property (assign,nonatomic) BOOL isCloudProfile;                               //@synthesize isCloudProfile=_isCloudProfile - In the implementation block
@property (assign,nonatomic) BOOL isCloudLocked;                                //@synthesize isCloudLocked=_isCloudLocked - In the implementation block
@property (assign,nonatomic) BOOL isMDMProfile;                                 //@synthesize isMDMProfile=_isMDMProfile - In the implementation block
-(id)description;
-(id)stubDictionary;
-(SecCertificateRef)copyCertificateWithPersistentID:(id)arg1 ;
-(id)payloads;
-(void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3 ;
-(id)_sortPayloads:(id)arg1 ;
-(id)payloadWithUUID:(id)arg1 ;
-(SecCertificateRef)copyCertificateFromPayloadWithUUID:(id)arg1 ;
-(id)_subjectSummaryFromCertificate:(SecCertificateRef)arg1 ;
-(void)_sortPayloads;
-(BOOL)isManagedByMDM;
-(id)installationWarningsIncludeUnsignedProfileWarning:(BOOL)arg1 ;
-(NSNumber *)isCloudProfileNum;
-(NSNumber *)isCloudLockedNum;
-(id)_localizedPayloadSummaryByType:(id)arg1 ;
-(id)managedPayloads;
-(id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1 ;
-(id)subjectSummaryFromCertificateWithPersistentID:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 options:(id)arg2 signerCerts:(id)arg3 allowEmptyPayload:(BOOL)arg4 outError:(id*)arg5 ;
-(BOOL)isManagedByProfileService;
-(id)localizedPayloadSummaryByType;
-(id)localizedManagedPayloadSummaryByType;
-(id)earliestCertificateExpiryDate;
-(void)replacePayloadWithUUID:(id)arg1 withPayload:(id)arg2 ;
-(MCProfileServiceProfile *)OTAProfile;
-(void)setOTAProfile:(MCProfileServiceProfile *)arg1 ;
-(BOOL)isCloudProfile;
-(void)setIsCloudProfile:(BOOL)arg1 ;
-(BOOL)isCloudLocked;
-(void)setIsCloudLocked:(BOOL)arg1 ;
-(BOOL)isMDMProfile;
-(void)setIsMDMProfile:(BOOL)arg1 ;
-(void)setIsCloudProfileNum:(NSNumber *)arg1 ;
-(void)setIsCloudLockedNum:(NSNumber *)arg1 ;
@end

