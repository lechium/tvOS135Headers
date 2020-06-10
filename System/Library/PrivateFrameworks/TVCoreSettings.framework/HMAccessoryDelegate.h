/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMAccessoryDelegate <NSObject>
@optional
-(void)accessoryDidUpdateName:(id)arg1;
-(void)accessory:(id)arg1 didUpdateNameForService:(id)arg2;
-(void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2;
-(void)accessoryDidUpdateServices:(id)arg1;
-(void)accessory:(id)arg1 didAddProfile:(id)arg2;
-(void)accessory:(id)arg1 didRemoveProfile:(id)arg2;
-(void)accessoryDidUpdateReachability:(id)arg1;
-(void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
-(void)accessory:(id)arg1 didUpdateFirmwareVersion:(id)arg2;

@end

