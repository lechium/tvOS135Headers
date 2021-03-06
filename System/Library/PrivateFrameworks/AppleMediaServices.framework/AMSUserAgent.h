/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSMappedBundleInfo, AMSProcessInfo, NSString;

@interface AMSUserAgent : NSObject {

	AMSMappedBundleInfo* _bundleInfo;
	AMSProcessInfo* _processInfo;

}

@property (nonatomic,readonly) AMSMappedBundleInfo * bundleInfo;              //@synthesize bundleInfo=_bundleInfo - In the implementation block
@property (nonatomic,readonly) AMSProcessInfo * processInfo;                  //@synthesize processInfo=_processInfo - In the implementation block
@property (nonatomic,retain) NSString * clientName; 
@property (nonatomic,retain) NSString * clientVersion; 
+(id)userAgentForProcessInfo:(id)arg1 ;
+(id)_sharedCache;
+(id)cachedUserAgentForBundleIdentifier:(id)arg1 ;
+(void)cacheUserAgent:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(AMSProcessInfo *)processInfo;
-(NSString *)clientName;
-(void)setClientName:(NSString *)arg1 ;
-(id)initWithProcessInfo:(id)arg1 ;
-(NSString *)clientVersion;
-(void)setClientVersion:(NSString *)arg1 ;
-(id)compile;
-(AMSMappedBundleInfo *)bundleInfo;
-(id)_compileAndShouldCache:(BOOL*)arg1 ;
-(id)_sharedComponentFairPlayDeviceType;
-(id)_iOSComponentClientInfo;
-(id)_iOSComponentProductVersion;
-(id)_iOSComponentDeviceModel;
-(id)_iOSComponentHardwarePlatform;
-(id)_iOSComponentBuildVersion;
-(id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)arg1 ;
-(id)_sharedComponentFrameworkVersion;
@end

