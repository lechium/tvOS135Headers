/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate, OS_dispatch_queue;
@class NSSet, HMDHAPAccessory, NSObject, HMDNotificationRegistration, NSString;

@interface HMDCameraNotificationCharacteristicsAvailabilityListener : HMFObject <HMFLogging> {

	NSSet* _availableCharacteristics;
	id<HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate> _delegate;
	HMDHAPAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDNotificationRegistration* _notificationRegistration;

}

@property (__weak,readonly) HMDHAPAccessory * accessory;                                                       //@synthesize accessory=_accessory - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMDNotificationRegistration * notificationRegistration;                                   //@synthesize notificationRegistration=_notificationRegistration - In the implementation block
@property (retain) NSSet * availableCharacteristics;                                                           //@synthesize availableCharacteristics=_availableCharacteristics - In the implementation block
@property (__weak) id<HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)start;
-(HMDHAPAccessory *)accessory;
-(void)_notifyDelegate;
-(void)_registerForNotifications;
-(HMDNotificationRegistration *)notificationRegistration;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 ;
-(NSSet *)availableCharacteristics;
-(void)handleCharacteristicsUpdated:(id)arg1 ;
-(void)setAvailableCharacteristics:(NSSet *)arg1 ;
-(void)handleServicesUpdated:(id)arg1 ;
-(id)_recordingTriggerCharacteristicTypeForServiceType:(id)arg1 ;
-(id)_accessoryCharacteristicsToObserve;
@end

