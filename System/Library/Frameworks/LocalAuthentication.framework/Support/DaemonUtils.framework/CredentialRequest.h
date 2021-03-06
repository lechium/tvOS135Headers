/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DaemonUtils/Request.h>

@class LASecureData;

@interface CredentialRequest : Request {

	BOOL _readOnly;
	long long _credentialType;
	LASecureData* _credentialData;

}

@property (nonatomic,readonly) long long credentialType;                   //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,readonly) LASecureData * credentialData;              //@synthesize credentialData=_credentialData - In the implementation block
@property (nonatomic,readonly) BOOL readOnly;                              //@synthesize readOnly=_readOnly - In the implementation block
-(long long)credentialType;
-(BOOL)readOnly;
-(id)initWithCredential:(long long)arg1 value:(id)arg2 readOnly:(BOOL)arg3 ;
-(LASecureData *)credentialData;
@end

