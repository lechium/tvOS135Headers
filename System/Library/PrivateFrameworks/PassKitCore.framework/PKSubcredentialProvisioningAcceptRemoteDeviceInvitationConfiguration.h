/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKSubcredentialProvisioningConfiguration.h>

@class PKAppletSubcredentialSharingInvitation, PKPaymentWebService;

@interface PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration : PKSubcredentialProvisioningConfiguration {

	BOOL _canRequestInvitation;
	PKAppletSubcredentialSharingInvitation* _invitation;
	PKPaymentWebService* _remoteDeviceWebService;
	PKPaymentWebService* _localDeviceWebService;

}

@property (nonatomic,readonly) PKAppletSubcredentialSharingInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (nonatomic,readonly) BOOL canRequestInvitation;                                        //@synthesize canRequestInvitation=_canRequestInvitation - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * remoteDeviceWebService;                     //@synthesize remoteDeviceWebService=_remoteDeviceWebService - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * localDeviceWebService;                      //@synthesize localDeviceWebService=_localDeviceWebService - In the implementation block
-(id)description;
-(PKAppletSubcredentialSharingInvitation *)invitation;
-(id)transitionTable;
-(PKPaymentWebService *)localDeviceWebService;
-(PKPaymentWebService *)remoteDeviceWebService;
-(BOOL)canRequestInvitation;
-(long long)startingState;
-(id)initWithInvitation:(id)arg1 canRequestInvitation:(BOOL)arg2 localDeviceWebService:(id)arg3 remoteDeviceWebService:(id)arg4 configurationType:(long long)arg5 ;
-(id)initWithInvitation:(id)arg1 canRequestInvitation:(BOOL)arg2 localDeviceWebService:(id)arg3 remoteDeviceWebService:(id)arg4 ;
@end

