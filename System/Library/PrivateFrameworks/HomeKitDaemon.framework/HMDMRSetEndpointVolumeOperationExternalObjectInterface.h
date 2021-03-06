/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDMRSetEndpointVolumeOperationExternalObjectInterface
@required
-(id)createMPCAssistantDiscovery;
-(id)createMPCAssistantConnection;
-(id)copyMRAVEndpointOutputDevices:(void*)arg1;
-(id)copyMRAVOutputDeviceUniqueIdentifier:(void*)arg1;
-(void)setMRAVOutputDeviceVolume:(float)arg1 endpoint:(void*)arg2 outputDeviceUID:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5;

@end

