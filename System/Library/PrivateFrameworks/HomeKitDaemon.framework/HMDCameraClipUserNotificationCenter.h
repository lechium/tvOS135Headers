/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDBulletinBoard, HMDDeviceFileManager, HMDHeroFrameDataSource, NSObject, NSString;

@interface HMDCameraClipUserNotificationCenter : HMFObject <HMFLogging> {

	HMDBulletinBoard* _bulletinBoard;
	HMDDeviceFileManager* _fileManager;
	HMDHeroFrameDataSource* _dataSource;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _heroFrameDirPath;

}

@property (readonly) HMDBulletinBoard * bulletinBoard;                    //@synthesize bulletinBoard=_bulletinBoard - In the implementation block
@property (readonly) HMDDeviceFileManager * fileManager;                  //@synthesize fileManager=_fileManager - In the implementation block
@property (readonly) HMDHeroFrameDataSource * dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSString * heroFrameDirPath;                         //@synthesize heroFrameDirPath=_heroFrameDirPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHeroFrameDataSource *)dataSource;
-(HMDDeviceFileManager *)fileManager;
-(HMDBulletinBoard *)bulletinBoard;
-(id)initWithBulletinBoard:(id)arg1 fileManager:(id)arg2 dataSource:(id)arg3 workQueue:(id)arg4 ;
-(void)postSignificantEventNotification:(id)arg1 forCameraProfile:(id)arg2 ;
-(void)removeEventNotificationForClipWithUUID:(id)arg1 ;
-(NSString *)heroFrameDirPath;
-(BOOL)_createDirectoryAtPathIfNonExistent:(id)arg1 ;
-(unsigned long long)_effectiveReasonForSignificantEvent:(id)arg1 ;
-(id)_copyHeroFrameAtURL:(id)arg1 ;
-(void)_removeFile:(id)arg1 ;
@end

