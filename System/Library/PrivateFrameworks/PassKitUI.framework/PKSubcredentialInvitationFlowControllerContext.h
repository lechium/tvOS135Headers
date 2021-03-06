/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKSubcredentialProvisioningFlowControllerContext.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKAppletSubcredentialSharingInvitation;

@interface PKSubcredentialInvitationFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying> {

	PKAppletSubcredentialSharingInvitation* _localDeviceInvitation;
	PKAppletSubcredentialSharingInvitation* _remoteDeviceInvitation;

}

@property (nonatomic,retain) PKAppletSubcredentialSharingInvitation * localDeviceInvitation;               //@synthesize localDeviceInvitation=_localDeviceInvitation - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialSharingInvitation * remoteDeviceInvitation;              //@synthesize remoteDeviceInvitation=_remoteDeviceInvitation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(PKAppletSubcredentialSharingInvitation *)remoteDeviceInvitation;
-(void)setRemoteDeviceInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
-(PKAppletSubcredentialSharingInvitation *)localDeviceInvitation;
-(id)initWithInvitation:(id)arg1 localDeviceWebService:(id)arg2 remoteDeviceWebService:(id)arg3 ;
-(void)setLocalDeviceInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
@end

