/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/ENAccountPublicKey.h>

@class IDSMPPublicAccountIdentity, IDSMPPublicServiceIdentityAdmin, IDSMPPublicServiceIdentitySigning, NSString;

@interface IDSPublicAccountIdentity : NSObject <ENAccountPublicKey> {

	IDSMPPublicAccountIdentity* _accountIdentity;
	IDSMPPublicServiceIdentityAdmin* _adminIdentity;
	IDSMPPublicServiceIdentitySigning* _signingIdentity;

}

@property (nonatomic,readonly) IDSMPPublicAccountIdentity * accountIdentity;                     //@synthesize accountIdentity=_accountIdentity - In the implementation block
@property (nonatomic,readonly) IDSMPPublicServiceIdentityAdmin * adminIdentity;                  //@synthesize adminIdentity=_adminIdentity - In the implementation block
@property (nonatomic,readonly) IDSMPPublicServiceIdentitySigning * signingIdentity;              //@synthesize signingIdentity=_signingIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(IDSMPPublicAccountIdentity *)accountIdentity;
-(id)initWithAccountIdentity:(id)arg1 adminIdentity:(id)arg2 signingIdentity:(id)arg3 ;
-(IDSMPPublicServiceIdentityAdmin *)adminIdentity;
-(IDSMPPublicServiceIdentitySigning *)signingIdentity;
@end

