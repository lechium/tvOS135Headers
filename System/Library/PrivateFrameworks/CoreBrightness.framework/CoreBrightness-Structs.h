/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct __CFString* CFStringRef;

typedef struct BLRAggdInfo {
	float manualModeTime;
	float sunModeTime;
	float scheduleModeTime;
	int turnOnForNowCount;
	int turnOffForNowCount;
	int turnOnUntilTomorrowCount;
	int turnOffUntilTomorrowCount;
	double _aggdModeChangeTimestamp;
} BLRAggdInfo;

typedef struct NMFactorState {
	double rampStartTime;
	float factor;
	float target;
	float start;
	float rampLength;
} NMFactorState;

typedef struct __CFTimeZone* CFTimeZoneRef;

typedef struct {
	int hour;
	int minute;
} SCD_Struct_Ni7;

typedef struct {
	SCD_Struct_Ni7 fromTime;
	SCD_Struct_Ni7 toTime;
} SCD_Struct_Ni8;

typedef struct {
	BOOL active;
	BOOL enabled;
	BOOL sunSchedulePermitted;
	int mode;
	SCD_Struct_Ni8 schedule;
	unsigned long long disableFlags;
	BOOL available;
} SCD_Struct_Ni9;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	int field4;
	SCD_Struct_Ni8 field5;
	unsigned long long field6;
	BOOL field7;
} SCD_Struct_Ni11;

typedef struct {
	float minCCT;
	float maxCCT;
	float midCCT;
} SCD_Struct_CB12;

typedef struct __Display* DisplayRef;

typedef struct __IOHIDDevice* IOHIDDeviceRef;

typedef struct __IOHIDElement* IOHIDElementRef;

