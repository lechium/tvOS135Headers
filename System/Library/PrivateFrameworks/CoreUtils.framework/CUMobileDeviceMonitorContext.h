/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUMobileDevice, CUMobileDeviceDiscovery;

@interface CUMobileDeviceMonitorContext : NSObject {

	CUMobileDevice* _device;
	CUMobileDeviceDiscovery* _discovery;

}

@property (nonatomic,retain) CUMobileDevice * device;                          //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) CUMobileDeviceDiscovery * discovery;              //@synthesize discovery=_discovery - In the implementation block
-(CUMobileDevice *)device;
-(void)setDevice:(CUMobileDevice *)arg1 ;
-(CUMobileDeviceDiscovery *)discovery;
-(void)setDiscovery:(CUMobileDeviceDiscovery *)arg1 ;
@end

