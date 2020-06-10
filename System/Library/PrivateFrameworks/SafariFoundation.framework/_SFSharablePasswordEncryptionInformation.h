/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface _SFSharablePasswordEncryptionInformation : NSObject {

	NSData* _encryptedPasswordData;
	NSData* _encryptionKeyReference;

}

@property (nonatomic,copy,readonly) NSData * encryptedPasswordData;               //@synthesize encryptedPasswordData=_encryptedPasswordData - In the implementation block
@property (nonatomic,copy,readonly) NSData * encryptionKeyReference;              //@synthesize encryptionKeyReference=_encryptionKeyReference - In the implementation block
-(id)initWithEncryptedPasswordData:(id)arg1 encryptionKeyReference:(id)arg2 ;
-(NSData *)encryptedPasswordData;
-(NSData *)encryptionKeyReference;
@end
