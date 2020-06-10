/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSgPTPNetworkPortClient.h>

@protocol OS_dispatch_queue;
@class NSObject, TSgPTPPort, NSString;

@interface TSPortInterface : NSObject <TSgPTPNetworkPortClient> {

	NSObject*<OS_dispatch_queue> _notificationsQueue;
	/*function pointer*/void* _macLookupTimeoutCallback;
	void* _macLookupTimeoutRefcon;
	TSgPTPPort* _port;

}

@property (nonatomic,retain) TSgPTPPort * port;                     //@synthesize port=_port - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(TSgPTPPort *)port;
-(void)setPort:(TSgPTPPort *)arg1 ;
-(void)didTimeoutOnMACLookupForPort:(id)arg1 ;
-(id)initWithgPTPPort:(id)arg1 onClockIdentifier:(unsigned long long)arg2 ;
-(void)setMACLookupTimeoutCallback:(/*function pointer*/void*)arg1 refcon:(void*)arg2 ;
@end

