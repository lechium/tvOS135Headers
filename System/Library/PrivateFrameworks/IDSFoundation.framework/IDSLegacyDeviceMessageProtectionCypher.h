/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ENCypher.h>

@class IDSMPPublicLegacyIdentity, NSString;

@interface IDSLegacyDeviceMessageProtectionCypher : NSObject <ENCypher> {

	IDSMPPublicLegacyIdentity* _publicIdentity;

}

@property (nonatomic,readonly) IDSMPPublicLegacyIdentity * publicIdentity;              //@synthesize publicIdentity=_publicIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
+(BOOL)supportsSecureCoding;
+(id)cypherWithEndpoint:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id*)arg3 error:(id*)arg4 ;
-(id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id*)arg5 ;
-(id)initWithPublicIdentity:(id)arg1 ;
-(IDSMPPublicLegacyIdentity *)publicIdentity;
-(id)_fullIdentityFromAccountIdentity:(id)arg1 error:(id*)arg2 ;
@end

