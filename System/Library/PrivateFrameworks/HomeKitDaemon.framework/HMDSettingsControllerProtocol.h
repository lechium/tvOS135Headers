/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol HMDSettingsControllerProtocol <HMFObject,AWDHMDSettingsControllerProtocol>
@property (readonly) NSArray * allObjectIdentifiers; 
@property (readonly) id<HMDSettingGroupProtocol> rootGroup; 
@required
-(void)encodeWithCoder:(id)arg1;
-(void)configure;
-(id<HMDSettingGroupProtocol>)rootGroup;
-(void)migrateSettingsWithCompletion:(/*^block*/id)arg1;
-(id)modelsToMakeSettings;
-(void)loadWithModels:(id)arg1;
-(NSArray *)allObjectIdentifiers;

@end

