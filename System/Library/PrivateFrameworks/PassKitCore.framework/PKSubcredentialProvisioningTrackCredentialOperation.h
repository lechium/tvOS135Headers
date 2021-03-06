/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKSubcredentialProvisioningPairingSessionOperation.h>

@class PKAppletSubcredential, NSData;

@interface PKSubcredentialProvisioningTrackCredentialOperation : PKSubcredentialProvisioningPairingSessionOperation {

	BOOL _performingOperation;
	BOOL _hasTrackedCredential;
	BOOL _firstTransactionSucceeded;
	PKAppletSubcredential* _subcredential;
	NSData* _trackingAttestation;
	/*^block*/id _completionHandler;

}
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)performOperation;
-(void)performOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)trackCredentialWithAttestation;
@end

