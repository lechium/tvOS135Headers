/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMDAccessoryNetworkProtectionGroup;

@interface HMDAccessoryNetworkProtectionGroupRecord : NSObject {

	BOOL _active;
	BOOL _persisted;
	HMDAccessoryNetworkProtectionGroup* _group;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                     //@synthesize active=_active - In the implementation block
@property (assign,getter=isPersisted,nonatomic) BOOL persisted;               //@synthesize persisted=_persisted - In the implementation block
@property (readonly) HMDAccessoryNetworkProtectionGroup * group;              //@synthesize group=_group - In the implementation block
+(id)recordWithGroup:(id)arg1 active:(BOOL)arg2 persisted:(BOOL)arg3 ;
-(HMDAccessoryNetworkProtectionGroup *)group;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithGroup:(id)arg1 active:(BOOL)arg2 persisted:(BOOL)arg3 ;
-(BOOL)isPersisted;
-(void)setPersisted:(BOOL)arg1 ;
@end

