/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputContextCommunicationChannelInternal;

@interface AVOutputContextCommunicationChannel : NSObject {

	AVOutputContextCommunicationChannelInternal* _ivars;

}

@property (nonatomic,readonly) const CFStringRef commChannelUUID; 
@property (nonatomic,readonly) id<AVOutputContextCommunicationChannelImpl> impl; 
-(id)init;
-(void)dealloc;
-(id<AVOutputContextCommunicationChannelImpl>)impl;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithOutputContextCommunicationChannelImpl:(id)arg1 ;
-(const CFStringRef)commChannelUUID;
@end

