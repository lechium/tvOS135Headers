/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NightModeControl, NightShiftDisplayWrapper, NSObject, NSMutableDictionary;

@interface BLControl : NSObject {

	BOOL AABEnabled;
	IOHIDEventSystemClientRef hidSystemClient;
	AABC* aab[2];
	LegacyBacklightC* legacyAutoBacklight;
	unsigned alsNode[3];
	unsigned driverNode[3];
	unsigned alsOrientation[3];
	_IOHIDServiceClient* alsClient[3];
	_IOHIDServiceClient* otherClients[4];
	unsigned alsCount;
	unsigned otherClientsCount;
	unsigned backlight[2];
	_Display* display[2];
	NightModeControl* _nightModeControl[2];
	NightShiftDisplayWrapper* _nightShiftWrapper[2];
	unsigned displayCount;
	NSObject*<OS_dispatch_queue> rootQueue;
	NSObject*<OS_dispatch_queue> queue;
	BOOL aabExist;
	BOOL ignoreBrightnessKey;
	BOOL overrideIgnoreBrightness;
	BOOL ignoreALSEvents;
	/*^block*/id _callback;
	void* _callbackContext;
	BOOL monitorALSOnly;
	BOOL useRootQueue;
	BOOL _useMultiCurves;
	int _ecoModeNotificationToken;
	/*^block*/id _ecoModeNotificationHandler;
	int _ecoModePreferencesUpdateNotificationToken;
	/*^block*/id _ecoModePreferencesUpdateNotificationHandler;
	CFDictionaryRef _clientDisplayMap;
	NSMutableDictionary* _disps;
	IONotificationPortRef _displayMatchingNotificationPort;
	unsigned _displayArrivalIterator;
	unsigned _displayRemovalIterator;
	unsigned _displayArrivalIteratorUser;
	unsigned _displayRemovalIteratorUser;
	NSObject*<OS_os_log> _logHandle;

}
-(id)init;
-(void)dealloc;
-(BOOL)start;
-(void)stop;
-(void)callBlockWithProperty:(CFStringRef)arg1 value:(void*)arg2 ;
-(CFDictionaryRef)createDictWithUsagePairPage:(unsigned)arg1 usage:(unsigned)arg2 ;
-(void*)copyBLControlPropertyWithkey:(CFStringRef)arg1 ;
-(BOOL)setBLControlPropertyWithKey:(CFStringRef)arg1 property:(void*)arg2 ;
-(void)waitForALSArrival;
-(BOOL)findAlsNodes;
-(int)rootQueuePthreadAttrInit:(opaque_pthread_attr_t*)arg1 ;
-(BOOL)findBacklight;
-(BOOL)findHIDClients;
-(BOOL)setPropertyWithKey:(id)arg1 property:(id)arg2 client:(id)arg3 ;
-(BOOL)initialiseHIDDisplayLookup;
-(void)cancelHIDDisplayLookup;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)handleDisplayArrival:(unsigned)arg1 ;
-(void)handleDisplayRemoval:(unsigned)arg1 ;
-(id)copyPropertyWithKey:(id)arg1 client:(id)arg2 ;
@end

