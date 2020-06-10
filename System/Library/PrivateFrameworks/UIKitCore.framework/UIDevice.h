/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, NSUUID;

@interface UIDevice : NSObject {

	long long _numDeviceOrientationObservers;
	float _batteryLevel;
	struct {
		unsigned batteryMonitoringEnabled : 1;
		unsigned proximityMonitoringEnabled : 1;
		unsigned expectsFaceContactInLandscape : 1;
		unsigned orientation : 3;
		unsigned batteryState : 2;
		unsigned proximityState : 1;
		unsigned hasTouchPadOverride : 1;
		unsigned hasTouchPad : 1;
	}  _deviceFlags;

}

@property (assign,nonatomic) long long orientation; 
@property (nonatomic,retain,readonly) NSString * buildVersion; 
@property (nonatomic,readonly) BOOL _supportsPencil; 
@property (assign,setter=_setBacklightLevel:,nonatomic) float _backlightLevel; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * localizedModel; 
@property (nonatomic,readonly) NSString * systemName; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) long long orientation; 
@property (nonatomic,readonly) NSUUID * identifierForVendor; 
@property (getter=isGeneratingDeviceOrientationNotifications,nonatomic,readonly) BOOL generatesDeviceOrientationNotifications; 
@property (assign,getter=isBatteryMonitoringEnabled,nonatomic) BOOL batteryMonitoringEnabled; 
@property (nonatomic,readonly) long long batteryState; 
@property (nonatomic,readonly) float batteryLevel; 
@property (assign,getter=isProximityMonitoringEnabled,nonatomic) BOOL proximityMonitoringEnabled; 
@property (nonatomic,readonly) BOOL proximityState; 
@property (getter=isMultitaskingSupported,nonatomic,readonly) BOOL multitaskingSupported; 
@property (nonatomic,readonly) long long userInterfaceIdiom; 
+(BOOL)currentIsIPad;
+(id)platform;
+(id)currentDevice;
+(BOOL)_isWatch;
+(id)modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
+(BOOL)_hasHomeButton;
+(BOOL)_isWatchCompanion;
+(long long)currentDeviceOrientationAllowingAmbiguous:(BOOL)arg1 ;
+(BOOL)_isLowEnd;
-(long long)memorySize;
-(BOOL)enoughMemoryForRendering12MPPhoto;
-(BOOL)screenCanShow2160P;
-(BOOL)enoughMemoryFor2160P;
-(int)numberOfCPU;
-(BOOL)hasPlentyOfMemory;
-(BOOL)hasMoreThan1GBOfMemory;
-(BOOL)enoughPowerFor2160P;
-(id)orientationString;
-(BOOL)isLargePhone;
-(BOOL)isWidePhone;
-(long long)freeMemory;
-(BOOL)enoughPowerForLargerPhotoThumbnails;
-(BOOL)canSupportHEVC;
-(BOOL)sufficientOomphForZoomedRenderScale;
-(BOOL)canEncode2160P;
-(BOOL)osVersionAtLeast:(id)arg1 ;
-(id)_avUserDeviceName;
-(BOOL)sf_isInternalInstall;
-(BOOL)sf_isiPad;
-(BOOL)sf_isiPhone;
-(unsigned long long)sf_yearOfManufacture;
-(unsigned long long)sf_weekOfManufacture;
-(id)sf_colorCodedSerialNumber;
-(id)sf_configString;
-(id)sf_deviceSubTypeString;
-(id)sf_screenClassString;
-(BOOL)sf_deviceSupportsDisplayZoom;
-(id)sf_plantCode;
-(BOOL)sf_isChinaRegionCellularDevice;
-(id)sf_udidString;
-(BOOL)sf_isAudioAccessory;
-(id)sf_serialNumber;
-(BOOL)sf_isAppleTV;
-(BOOL)sf_isCarrierInstall;
-(id)sf_monthAndYearOfManufacture;
-(id)sf_regionCode;
-(id)sf_productType;
-(id)sf_deviceType;
-(id)sf_regulatoryDeviceVariant;
-(NSString *)name;
-(NSString *)systemVersion;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(float)_backlightLevel;
-(NSString *)model;
-(NSString *)buildVersion;
-(float)batteryLevel;
-(long long)userInterfaceIdiom;
-(NSString *)localizedModel;
-(NSString *)systemName;
-(long long)_graphicsQuality;
-(void)setBatteryMonitoringEnabled:(BOOL)arg1 ;
-(id)_tapticEngine;
-(void)beginGeneratingDeviceOrientationNotifications;
-(void)endGeneratingDeviceOrientationNotifications;
-(BOOL)isBatteryMonitoringEnabled;
-(long long)batteryState;
-(NSUUID *)identifierForVendor;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_supportsDeepColor;
-(BOOL)proximityState;
-(id)_deviceInfoForKey:(CFStringRef)arg1 ;
-(BOOL)_supportsForceTouch;
-(BOOL)_hasTouchPad;
-(BOOL)isMultitaskingSupported;
-(long long)_keyboardGraphicsQuality;
-(BOOL)_isSystemSoundEnabled;
-(BOOL)_supportsPencil;
-(void)_registerForSystemSounds:(id)arg1 ;
-(void)_unregisterForSystemSounds:(id)arg1 ;
-(void)_enableDeviceOrientationEvents:(BOOL)arg1 ;
-(void)_playSystemSound:(unsigned)arg1 ;
-(void)_updateSystemSoundActiveStatus:(id)arg1 ;
-(void)_setActiveUserInterfaceIdiom:(long long)arg1 ;
-(BOOL)isGeneratingDeviceOrientationNotifications;
-(BOOL)isProximityMonitoringEnabled;
-(void)setProximityMonitoringEnabled:(BOOL)arg1 ;
-(void)_setExpectsFaceContactInLandscape:(BOOL)arg1 ;
-(void)playInputClick;
-(void)_setBacklightLevel:(float)arg1 ;
-(float)_softwareDimmingAlpha;
-(void)_playInputSelectSound;
-(void)_playInputDeleteSound;
-(void)_setProximityState:(BOOL)arg1 ;
-(void)_setBatteryState:(long long)arg1 ;
-(void)_setBatteryLevel:(float)arg1 ;
-(void)_setHasTouchPad:(BOOL)arg1 ;
-(void)_setGraphicsQualityOverride:(long long)arg1 ;
-(void)_clearGraphicsQualityOverride;
-(BOOL)_hasGraphicsQualityOverride;
-(long long)_predictionGraphicsQuality;
-(long long)_nativeScreenGamut;
@end

