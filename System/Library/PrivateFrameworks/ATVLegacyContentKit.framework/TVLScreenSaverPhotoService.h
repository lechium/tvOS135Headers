/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TVPhotoServiceInterface.h>

@protocol OS_dispatch_queue, TVPhotoServerInterface;
@class TVLJSDataClient, NSObject, NSMutableArray, TVLAppliance, NSString;

@interface TVLScreenSaverPhotoService : NSObject <TVPhotoServiceInterface> {

	TVLJSDataClient* _dataClient;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _requestsQueue;
	TVLAppliance* _appliance;
	id<TVPhotoServerInterface> _remotePhotoServerInterface;

}

@property (nonatomic,retain) id<TVPhotoServerInterface> remotePhotoServerInterface;              //@synthesize remotePhotoServerInterface=_remotePhotoServerInterface - In the implementation block
@property (nonatomic,retain) TVLAppliance * appliance;                                           //@synthesize appliance=_appliance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_enqueueRequest:(id)arg1 ;
-(void)_processRequest:(id)arg1 ;
-(void)photoAssetsWithOptions:(id)arg1 responseBlock:(/*^block*/id)arg2 ;
-(void)registerRemotePhotoServer:(id)arg1 ;
-(TVLAppliance *)appliance;
-(void)setAppliance:(TVLAppliance *)arg1 ;
-(void)_handleConnectionStatusUpdate:(id)arg1 ;
-(void)_processRequestsIfReady;
-(id<TVPhotoServerInterface>)remotePhotoServerInterface;
-(void)setRemotePhotoServerInterface:(id<TVPhotoServerInterface>)arg1 ;
@end

