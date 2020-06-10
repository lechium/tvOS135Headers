/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTPlatform : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)currentPlatform;
+(BOOL)version:(SCD_Struct_RT5)arg1 equalToVersion:(SCD_Struct_RT5)arg2 ;
+(BOOL)version:(SCD_Struct_RT5)arg1 noGreaterThanVersion:(SCD_Struct_RT5)arg2 ;
+(BOOL)operatingSystemNoGreaterThanVersion:(SCD_Struct_RT5)arg1 ;
+(BOOL)operatingSystemAtLeastVersion:(SCD_Struct_RT5)arg1 ;
+(BOOL)version:(SCD_Struct_RT5)arg1 atLeastVersion:(SCD_Struct_RT5)arg2 ;
+(SCD_Struct_RT5)operatingSystemVersionFromString:(id)arg1 ;
-(id)systemVersion;
-(id)productType;
-(id)deviceClass;
-(id)buildVersion;
-(id)serialNumber;
-(BOOL)internalInstall;
-(BOOL)paired;
-(BOOL)supportsPairedDevice;
-(BOOL)supportsMultiUser;
-(BOOL)supportsCoreRoutineCapability;
-(id)userAssignedDeviceName;
-(id)systemModel;
-(BOOL)iPhonePlatform;
-(BOOL)watchPlatform;
-(BOOL)macOSPlatform;
-(BOOL)simulatorPlatform;
-(BOOL)usesTSCForClustering;
-(BOOL)lowEndHardware;
-(unsigned long long)deviceMemorySize;
-(BOOL)iPhoneDevice;
-(BOOL)supportsScenarioTriggers;
@end

