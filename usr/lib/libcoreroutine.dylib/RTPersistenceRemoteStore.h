/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPersistentStoreCoordinator, NSManagedObjectID, RTDarwinNotificationHelper;

@interface RTPersistenceRemoteStore : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSManagedObjectID* _currentDeviceManagedObjectId;
	RTDarwinNotificationHelper* _notificationHelper;

}
-(id)init;
-(id)createManagedObjectContext;
-(id)initWithReadOnly:(BOOL)arg1 ;
-(id)_createManagedObjectContext;
-(void)updateCurrentDeviceMOIDWithContext:(id)arg1 ;
@end

