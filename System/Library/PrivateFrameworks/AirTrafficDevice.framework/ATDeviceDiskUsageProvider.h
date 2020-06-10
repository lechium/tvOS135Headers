/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSMutableDictionary, ATUserDefaults, NSObject, ATClientController;

@interface ATDeviceDiskUsageProvider : NSObject {

	NSMutableDictionary* _diskUsageInfo;
	ATUserDefaults* _defaults;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _usageInfoAccessQueue;
	NSObject*<OS_dispatch_group> _usageUpdateGroup;
	ATClientController* _clientController;

}
+(id)sharedInstance;
-(id)init;
-(void)getUpdatedUsageWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadCurrentDiskUsage;
-(void)getCurrentUsageWithUpdatedDataClasses:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)getCurrentUsage;
-(id)_diskUsageForDataClass:(id)arg1 ;
-(void)_updatePurgeableStorageUsage;
@end
