/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue, HAPKeyStore;
@class NSObject;

@interface HAPAccessoryServerBrowser : HMFObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	long long _linkType;
	id<HAPKeyStore> _keyStore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) id<HAPKeyStore> keyStore;                            //@synthesize keyStore=_keyStore - In the implementation block
@property (nonatomic,readonly) long long linkType;                                //@synthesize linkType=_linkType - In the implementation block
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithQueue:(id)arg1 ;
-(long long)linkType;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id<HAPKeyStore>)keyStore;
-(void)setKeyStore:(id<HAPKeyStore>)arg1 ;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;
-(void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
@end
