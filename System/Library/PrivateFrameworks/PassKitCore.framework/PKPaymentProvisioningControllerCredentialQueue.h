/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PKPaymentProvisioningControllerCredentialQueue : NSObject {

	NSMutableArray* _credentials;
	NSMutableArray* _completedCredentials;
	unsigned long long _currentIndex;

}
-(id)init;
-(unsigned long long)count;
-(unsigned long long)remaining;
-(void)setCredentialsToProvision:(id)arg1 ;
-(void)removeCredential:(id)arg1 ;
-(id)nextCredentialToProvision;
-(void)setCurrentCredential:(id)arg1 ;
-(unsigned long long)completedCount;
@end

