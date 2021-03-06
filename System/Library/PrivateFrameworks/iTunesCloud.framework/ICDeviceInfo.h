/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSString, NSData, NSNumber;

@interface ICDeviceInfo : NSObject {

	atomic_flag _hasRegisteredForNameNotifications;
	MGNotificationTokenStructRef _nameNotificationToken;
	NSString* _productVersion;
	NSString* _deviceModel;
	NSString* _rawDeviceModel;
	NSString* _hardwarePlatform;
	NSString* _buildVersion;
	int _deviceClass;
	unsigned _fairPlayDeviceType;
	NSString* _currentLocale;
	NSData* _deviceGUIDData;
	NSString* _deviceGUID;
	NSString* _name;
	NSString* _pairedDeviceGUID;
	NSString* _pairedDeviceMediaGUID;
	NSString* _serialNumber;
	CGSize _mainScreenSize;
	NSNumber* _hasCellularDataCapabilityNumber;
	NSNumber* _hasTelephonyCapabilityNumber;
	NSNumber* _hasWiFiCapabilityValue;
	NSNumber* _hasWAPICapabilityValue;
	NSNumber* _has720pCapabilityValue;
	NSNumber* _has1080pCapabilityValue;
	NSNumber* _screenClassValue;
	NSNumber* _isInternalBuildNumber;
	NSString* _systemReleaseType;
	os_unfair_lock_s _lock;

}

@property (nonatomic,copy,readonly) NSString * deviceModel; 
@property (nonatomic,copy,readonly) NSString * rawDeviceModel; 
@property (nonatomic,copy,readonly) NSString * hardwarePlatform; 
@property (nonatomic,copy,readonly) NSString * deviceGUID; 
@property (nonatomic,copy,readonly) NSData * deviceFairPlayGUIDData; 
@property (nonatomic,copy,readonly) NSString * pairedDeviceGUID; 
@property (nonatomic,copy,readonly) NSString * pairedDeviceMediaGUID; 
@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) CGSize mainScreenSize; 
@property (nonatomic,readonly) BOOL hasCellularDataCapability; 
@property (nonatomic,readonly) BOOL hasTelephonyCapability; 
@property (nonatomic,readonly) BOOL hasWiFiCapability; 
@property (nonatomic,readonly) BOOL hasWAPICapability; 
@property (nonatomic,readonly) BOOL has720pCapability; 
@property (nonatomic,readonly) BOOL has1080pCapability; 
@property (nonatomic,readonly) int screenClass; 
@property (nonatomic,readonly) int deviceClass; 
@property (nonatomic,readonly) BOOL isIPhone; 
@property (nonatomic,readonly) BOOL isAppleTV; 
@property (nonatomic,readonly) BOOL isIPad; 
@property (nonatomic,readonly) BOOL isIPod; 
@property (nonatomic,readonly) BOOL isWatch; 
@property (nonatomic,readonly) BOOL isAudioAccessory; 
@property (nonatomic,copy,readonly) NSString * productVersion; 
@property (nonatomic,copy,readonly) NSString * productPlatform; 
@property (nonatomic,copy,readonly) NSString * buildVersion; 
@property (getter=isInternalBuild,nonatomic,readonly) BOOL internalBuild; 
@property (nonatomic,copy,readonly) NSString * systemReleaseType; 
@property (nonatomic,readonly) unsigned fairPlayDeviceType; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * currentLocale; 
+(id)currentDeviceInfo;
+(id)defaultInfo;
-(NSString *)name;
-(void)dealloc;
-(id)_init;
-(NSString *)currentLocale;
-(NSString *)productVersion;
-(int)deviceClass;
-(BOOL)isWatch;
-(NSString *)buildVersion;
-(NSString *)serialNumber;
-(BOOL)isInternalBuild;
-(NSString *)systemReleaseType;
-(NSString *)deviceGUID;
-(NSString *)deviceModel;
-(BOOL)isAppleTV;
-(NSString *)hardwarePlatform;
-(BOOL)isAudioAccessory;
-(BOOL)hasTelephonyCapability;
-(BOOL)hasCellularDataCapability;
-(NSString *)pairedDeviceMediaGUID;
-(NSData *)deviceFairPlayGUIDData;
-(id)_activePairedDevice;
-(BOOL)isIPhone;
-(BOOL)isIPad;
-(BOOL)isIPod;
-(int)_gestaltDeviceClass;
-(NSString *)rawDeviceModel;
-(NSString *)pairedDeviceGUID;
-(CGSize)mainScreenSize;
-(BOOL)hasWiFiCapability;
-(BOOL)hasWAPICapability;
-(BOOL)has720pCapability;
-(BOOL)has1080pCapability;
-(int)screenClass;
-(NSString *)productPlatform;
-(unsigned)fairPlayDeviceType;
@end

