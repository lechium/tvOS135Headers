/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraSessionID, HMDDevice;

@interface HMDCameraIDSSessionInviterDeviceVerifier : HMFObject {

	HMDCameraSessionID* _session;
	HMDDevice* _expectedInviter;

}

@property (nonatomic,readonly) HMDCameraSessionID * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) HMDDevice * expectedInviter;               //@synthesize expectedInviter=_expectedInviter - In the implementation block
-(HMDCameraSessionID *)session;
-(id)initWithSession:(id)arg1 expectedInviter:(id)arg2 ;
-(HMDDevice *)expectedInviter;
-(BOOL)canAcceptInvitationFromDeviceWithHandle:(id)arg1 forSessionWithIdentifier:(id)arg2 ;
@end
