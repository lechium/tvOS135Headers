/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ClientConnectionDelegate.h>
#import <libobjc.A.dylib/DatabaseChangeHandling.h>
#import <CalendarDaemon/CalActivatable.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSXPCListener, NSMutableSet, NSLock, NSArray, CDBDataProtectionObserver, NSString;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable> {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _backgroundTaskCount;
	NSXPCListener* _NSXPCListener;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSMutableSet* _clientConnections;
	NSLock* _connectionLock;
	NSArray* _signalSensors;
	BOOL _active;
	CDBDataProtectionObserver* _dataProtectionObserver;
	NSArray* _modules;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _alarmQueue;

}

@property (nonatomic,retain) CDBDataProtectionObserver * dataProtectionObserver;              //@synthesize dataProtectionObserver=_dataProtectionObserver - In the implementation block
@property (nonatomic,retain) NSArray * modules;                                               //@synthesize modules=_modules - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                     //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> alarmQueue;                       //@synthesize alarmQueue=_alarmQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_stringForBackgroundTaskAgentJobStatus:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)activate;
-(void)deactivate;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)modules;
-(void)setModules:(NSArray *)arg1 ;
-(void)_registerForNotifications;
-(void)clientConnectionDied:(id)arg1 ;
-(id)initWithModules:(id)arg1 ;
-(void)_enableICloudBackups;
-(void)_setUpSignalHandlers;
-(void)setDataProtectionObserver:(CDBDataProtectionObserver *)arg1 ;
-(CDBDataProtectionObserver *)dataProtectionObserver;
-(void)_protectedDataDidBecomeAvailable;
-(void)_finishInitializationWithDataAvailable;
-(void)_handleXPCConnection:(id)arg1 ;
-(void)_registerMaintenanceActivities;
-(void)_tearDownSignalHandlers;
-(void)_registerForAlarmEvents;
-(void)_registerForBackgroundTaskAgentJobs;
-(void)_startBirthdayManager;
-(void)_deactivateAndExitWithStatus:(int)arg1 ;
-(void)_dumpState;
-(void)_updateOccurrenceCacheTimeZone;
-(BOOL)_trimAndExtendOccurrenceCache;
-(NSObject*<OS_dispatch_queue>)alarmQueue;
-(void)_registerForDatabaseCleanup;
-(void)_registerForAnalyticsCollection;
-(void)_registerForAttachmentCleanup;
-(void)_registerForChangeTableCleanup;
-(void)cleanupDatabase:(CalDatabase*)arg1 ;
-(void)_registerActivityWithIdentifier:(const char*)arg1 block:(/*^block*/id)arg2 ;
-(void)_cleanupChangeTablesInDatabase:(CalDatabase*)arg1 ;
-(void)_exitWithStatus:(int)arg1 ;
-(void)_handleDatabaseChanged;
@end

