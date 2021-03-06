/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVRCDevice;

@interface TVRCDeviceEventManager : NSObject {

	TVRCDevice* _device;
	/*^block*/id _eventResponseHandler;

}

@property (nonatomic,retain) TVRCDevice * device;                //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) id eventResponseHandler;              //@synthesize eventResponseHandler=_eventResponseHandler - In the implementation block
-(TVRCDevice *)device;
-(void)setDevice:(TVRCDevice *)arg1 ;
-(id)initWithDevice:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)sendEvent:(id)arg1 options:(id)arg2 ;
-(id)eventResponseHandler;
-(void)setEventResponseHandler:(id)arg1 ;
@end

