/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SharedUtils/SharedUtils-Structs.h>
@interface LAACMHelper : NSObject {

	BOOL _contextOwner;
	ACMHandleRef _acmContext;

}

@property (nonatomic,readonly) ACMHandleRef acmContext;              //@synthesize acmContext=_acmContext - In the implementation block
-(void)dealloc;
-(id)initWithExternalizedContext:(id)arg1 ;
-(BOOL)performCredentialBlock:(/*^block*/id)arg1 credentialType:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)performContextBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)_verifyRequirement:(ACMRequirementRef)arg1 satisfiedForType:(unsigned)arg2 ;
-(id)initWithACMContext:(ACMHandleRef)arg1 ;
-(BOOL)addCredential:(unsigned)arg1 scope:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)replacePassphraseCredentialWithPurpose:(unsigned)arg1 passphrase:(id)arg2 scope:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)removeCredentialsOfType:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)isCredentialOfTypeSet:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)verifyRequirementOfType:(unsigned)arg1 policy:(char*)arg2 error:(id*)arg3 ;
-(ACMHandleRef)acmContext;
@end

