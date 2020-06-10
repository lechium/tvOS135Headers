/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFUnfairLock, NSMutableDictionary;

@interface HMDNotificationRegistry : HMFObject <NSSecureCoding> {

	HMFUnfairLock* _lock;
	NSMutableDictionary* _notificationRegistry;

}

@property (nonatomic,readonly) NSMutableDictionary * notificationRegistry;              //@synthesize notificationRegistry=_notificationRegistry - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyForCharacteristic:(id)arg1 ;
+(id)_createCharacteristicsMapForCharacteristics:(id)arg1 ;
+(id)keyForProperty:(id)arg1 mediaProfile:(id)arg2 ;
+(BOOL)doesKey:(id)arg1 matchMediaProfile:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
-(NSMutableDictionary *)notificationRegistry;
-(id)usersRegisteredForNotificationsForCharacteristics:(id)arg1 ;
-(void)auditUsersForNotifications:(id)arg1 forHome:(id)arg2 ;
-(BOOL)enableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2 ;
-(BOOL)disableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2 characteristicsToDisableEvents:(id*)arg3 ;
-(BOOL)enableNotificationForProperties:(id)arg1 forUser:(id)arg2 ;
-(BOOL)disableNotificationForProperties:(id)arg1 forUser:(id)arg2 ;
-(BOOL)removeRegistrationsForMediaProfile:(id)arg1 ;
-(id)filterCharacteristics:(id)arg1 forUser:(id)arg2 ;
-(id)usersRegisteredForNotificationsForProperties:(id)arg1 ;
-(id)filterProperties:(id)arg1 forUser:(id)arg2 ;
-(void)disableNotification:(id)arg1 user:(id)arg2 ignoreLockReq:(BOOL)arg3 home:(id)arg4 ;
-(id)_delayedBlocksCollectedWhileDeregisteringUsers:(id)arg1 forHome:(id)arg2 isiOS:(BOOL)arg3 isResident:(BOOL)arg4 ;
-(id)allCharacteristicIdentifiers;
-(void)deregisterUsers:(id)arg1 forHome:(id)arg2 ;
@end

