/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaControlReceiver.framework/MediaControlReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class APReceiverMediaRemoteCommunicationChannelInternal, NSString;

@interface APReceiverMediaRemoteCommunicationChannel : NSObject {

	APReceiverMediaRemoteCommunicationChannelInternal* _commChannel;

}

@property (nonatomic,readonly) NSString * uuid; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)uuid;
-(id)objectID;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

