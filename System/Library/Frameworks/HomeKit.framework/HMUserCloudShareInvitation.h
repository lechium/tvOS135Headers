/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, CKDeviceToDeviceShareInvitationToken, NSString, HMHome, HMUser;

@interface HMUserCloudShareInvitation : NSObject {

	NSURL* _shareURL;
	CKDeviceToDeviceShareInvitationToken* _shareToken;
	NSString* _containerID;
	HMHome* _home;
	HMUser* _user;
	HMUser* _fromUser;

}

@property (readonly) NSURL * shareURL;                                               //@synthesize shareURL=_shareURL - In the implementation block
@property (readonly) CKDeviceToDeviceShareInvitationToken * shareToken;              //@synthesize shareToken=_shareToken - In the implementation block
@property (readonly) NSString * containerID;                                         //@synthesize containerID=_containerID - In the implementation block
@property (readonly) HMHome * home;                                                  //@synthesize home=_home - In the implementation block
@property (readonly) HMUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (readonly) HMUser * fromUser;                                              //@synthesize fromUser=_fromUser - In the implementation block
-(HMUser *)user;
-(NSString *)containerID;
-(HMHome *)home;
-(NSURL *)shareURL;
-(CKDeviceToDeviceShareInvitationToken *)shareToken;
-(id)initWithUser:(id)arg1 URL:(id)arg2 shareToken:(id)arg3 containerID:(id)arg4 forHome:(id)arg5 fromUser:(id)arg6 ;
-(HMUser *)fromUser;
@end

