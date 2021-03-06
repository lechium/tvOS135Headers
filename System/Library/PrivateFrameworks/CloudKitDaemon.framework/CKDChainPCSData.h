/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDPCSData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKEncryptedData;

@interface CKDChainPCSData : CKDPCSData <NSSecureCoding> {

	CKEncryptedData* _encryptedChainPCSPrivateKey;

}

@property (nonatomic,readonly) CKEncryptedData * encryptedChainPCSPrivateKey;              //@synthesize encryptedChainPCSPrivateKey=_encryptedChainPCSPrivateKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)CKPropertiesDescription;
-(CKEncryptedData *)encryptedChainPCSPrivateKey;
-(id)initWithPCSData:(id)arg1 encryptedPrivateKey:(id)arg2 ;
@end

