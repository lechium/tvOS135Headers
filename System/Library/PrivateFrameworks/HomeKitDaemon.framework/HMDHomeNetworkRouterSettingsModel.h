/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString;

@interface HMDHomeNetworkRouterSettingsModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSString * activeNetworkRouterAccessoryUUID; 
@property (nonatomic,retain) NSString * minimumNetworkRouterSupportHomeKitVersion; 
@property (nonatomic,retain) NSString * minHomeKitVersionForAccessoryNetworkProtectionChange; 
+(id)properties;
+(id)modelIDForHome:(id)arg1 ;
+(id)defaultModelForHome:(id)arg1 ;
+(id)modelNamespace;
-(id)dependentUUIDs;
@end

