//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;
@protocol OTDeviceInformationNameUpdateListener;

@protocol OTDeviceInformationAdapter
- (void)registerForDeviceNameUpdates:(id <OTDeviceInformationNameUpdateListener>)arg1;
- (NSString *)serialNumber;
- (NSString *)osVersion;
- (NSString *)deviceName;
- (NSString *)modelID;
@end

