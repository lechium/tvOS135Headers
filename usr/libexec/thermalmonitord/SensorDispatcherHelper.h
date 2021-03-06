//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SensorDispatcherHelper : NSObject
{
    unsigned int connect;	// 8 = 0x8
    unsigned long long sensorCount;	// 16 = 0x10
    struct __CFDictionary *_smcSensorDict;	// 24 = 0x18
    struct sensorTemperatureData _sensorData;	// 32 = 0x20
    struct sensorTemperature4CC _sensor4CC;	// 92 = 0x5c
}

+ (id)sharedInstance;	// IMP=0x00000001000375e0
- (int)getTemperatureFromSMCForKey:(struct __CFString *)arg1;	// IMP=0x0000000100037a1c
- (int)getValueFromSMCForKey:(struct __CFString *)arg1;	// IMP=0x00000001000379ac
- (struct __CFString *)convert4CCIntToString:(int)arg1;	// IMP=0x0000000100037958
- (int)writeKeysToSensorDispatcher:(struct smcKeyWrites)arg1;	// IMP=0x00000001000378e4
- (void)readKeysFromSensorDispatcher;	// IMP=0x000000010003786c
- (id)init;	// IMP=0x0000000100037644

@end

