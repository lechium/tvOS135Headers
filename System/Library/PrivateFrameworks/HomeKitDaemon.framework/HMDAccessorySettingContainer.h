/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMDMediaSystem, HMDAccessory, HMDHome, HMDAccessorySettingTarget, NSUUID, NSString, NSArray;

@interface HMDAccessorySettingContainer : NSObject {

	HMDMediaSystem* _mediaSystem;
	HMDAccessory* _accessory;

}

@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                        //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,__weak,readonly) HMDHome * home; 
@property (nonatomic,__weak,readonly) HMDAccessorySettingTarget * target; 
@property (nonatomic,__weak,readonly) HMDMediaSystem * mediaSystem;                    //@synthesize mediaSystem=_mediaSystem - In the implementation block
@property (nonatomic,readonly) NSUUID * parentUUID; 
@property (nonatomic,readonly) NSString * name; 
@property (readonly) NSArray * supportedMultiUserLanguageCodes; 
@property (readonly) NSArray * accessories; 
-(NSString *)name;
-(id)description;
-(HMDAccessorySettingTarget *)target;
-(HMDHome *)home;
-(NSUUID *)parentUUID;
-(HMDAccessory *)accessory;
-(NSArray *)accessories;
-(HMDMediaSystem *)mediaSystem;
-(id)initWithAccessory:(id)arg1 mediaSystem:(id)arg2 ;
-(void)auditRootSettingsGroup:(unsigned long long)arg1 ;
-(NSArray *)supportedMultiUserLanguageCodes;
-(BOOL)isMediaSystemContainer;
@end

