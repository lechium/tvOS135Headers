/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class UNSKeyedDictionaryRepository, NSObject;

@interface UNSPushRegistrationRepository : NSObject {

	UNSKeyedDictionaryRepository* _repository;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)performMigration;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_performMigration;
-(void)setRegistration:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_removeRegistrationForBundleIdentifier:(id)arg1 ;
-(id)allBundleIdentifiers;
-(id)registrationForBundleIdentifier:(id)arg1 ;
-(void)removeRegistrationForBundleIdentifier:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 librarian:(id)arg2 ;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
-(id)_queue_registrationForBundleIdentifier:(id)arg1 ;
-(void)_queue_setRegistration:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end

