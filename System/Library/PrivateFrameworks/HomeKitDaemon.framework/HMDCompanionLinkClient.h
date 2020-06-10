/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDCompanionLinkClient.h>

@protocol HMDCompanionLinkClient <NSObject>
@property (nonatomic,copy) id deviceFoundHandler; 
@property (nonatomic,copy) id deviceLostHandler; 
@property (nonatomic,copy) id deviceChangedHandler; 
@required
-(void)start;
-(void)stop;
-(void)setDeviceFoundHandler:(/*^block*/id)arg1;
-(void)setDeviceChangedHandler:(/*^block*/id)arg1;
-(void)setDeviceLostHandler:(/*^block*/id)arg1;
-(id)deviceFoundHandler;
-(id)deviceLostHandler;
-(id)deviceChangedHandler;

@end


@class RPCompanionLinkClient, NSString;

@interface HMDCompanionLinkClient : NSObject <HMDCompanionLinkClient> {

	RPCompanionLinkClient* _client;

}

@property (nonatomic,retain) RPCompanionLinkClient * client;              //@synthesize client=_client - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id deviceFoundHandler; 
@property (nonatomic,copy) id deviceLostHandler; 
@property (nonatomic,copy) id deviceChangedHandler; 
-(void)dealloc;
-(RPCompanionLinkClient *)client;
-(void)start;
-(void)stop;
-(void)setClient:(RPCompanionLinkClient *)arg1 ;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(void)setDeviceLostHandler:(id)arg1 ;
-(id)deviceFoundHandler;
-(id)deviceLostHandler;
-(id)deviceChangedHandler;
@end

