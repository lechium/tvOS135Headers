/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSString;


@protocol HMDWACDevice
@property (nonatomic,readonly) NSUUID * identifier; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSString * ssid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL isConfigured; 
@property (nonatomic,readonly) BOOL supportsAirPlay2; 
@property (nonatomic,readonly) id underlyingDevice; 
@required
-(NSString *)name;
-(NSUUID *)identifier;
-(BOOL)isConfigured;
-(void)startConfigurationWithCompletionHandler:(/*^block*/id)arg1;
-(NSString *)deviceID;
-(NSString *)ssid;
-(id)underlyingDevice;
-(void)cancelConfigurationWithCompletionHandler:(/*^block*/id)arg1;
-(BOOL)supportsAirPlay2;

@end

