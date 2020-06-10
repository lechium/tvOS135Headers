/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking;
@class HMDMediaEndpoint, NSArray, NSString;

@interface HMDMediaAccessoryBrowseOperation : HMFOperation <HMFLogging> {

	id<HMFLocking> _lock;
	void* _session;
	unsigned _endpointFeatures;
	HMDMediaEndpoint* _endpoint;
	NSArray* _outputDevices;
	NSString* _accessoryIdentifier;

}

@property (copy,readonly) NSString * accessoryIdentifier;              //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (assign) unsigned endpointFeatures;                          //@synthesize endpointFeatures=_endpointFeatures - In the implementation block
@property (readonly) HMDMediaEndpoint * endpoint;                      //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) NSArray * outputDevices;                          //@synthesize outputDevices=_outputDevices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(double)defaultTimeout;
-(void)dealloc;
-(void)cancel;
-(HMDMediaEndpoint *)endpoint;
-(void)main;
-(NSArray *)outputDevices;
-(unsigned)endpointFeatures;
-(NSString *)accessoryIdentifier;
-(id)initWithAccessoryIdentifier:(id)arg1 ;
-(id)initWithAccessoryIdentifier:(id)arg1 timeout:(double)arg2 ;
-(void)setEndpointFeatures:(unsigned)arg1 ;
@end

