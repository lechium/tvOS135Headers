/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class NSData;

@interface TVRMSFairPlayKeyboardEncryption : NSObject {

	NSData* _challenge;
	BOOL _certIsTrusted;
	SecKeyRef _pubKeyRef;

}
-(void)dealloc;
-(void)reset;
-(BOOL)isTrusted;
-(id)_convertDataToString:(id)arg1 ;
-(id)_convertStringToData:(id)arg1 ;
-(BOOL)_verifyCert:(id)arg1 ;
-(id)encryptString:(id)arg1 ;
-(void)setLeafString:(id)arg1 ;
-(void)setChallengeString:(id)arg1 ;
@end

