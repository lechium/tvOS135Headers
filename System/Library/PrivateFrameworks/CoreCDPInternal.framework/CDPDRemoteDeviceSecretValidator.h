/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPInternal/CDPDDeviceSecretValidator.h>

@interface CDPDRemoteDeviceSecretValidator : CDPDDeviceSecretValidator {

	/*^block*/id _requestToJoinCompletion;
	BOOL _isWaitingForRemoteApproval;

}
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelApproveFromAnotherDevice;
-(void)resetAccountCDPState;
-(void)supportedEscapeOfferMaskCompletion:(/*^block*/id)arg1 ;
-(void)setValidSecretHandler:(/*^block*/id)arg1 ;
-(id)_decoratedDelegate;
@end

