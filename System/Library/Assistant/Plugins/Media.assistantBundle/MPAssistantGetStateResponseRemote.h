/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPGetStateResponseRemote.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSDictionary, NSMutableDictionary, NSObject, MPCAssistantEncodings, NSString;

@interface MPAssistantGetStateResponseRemote : SAMPGetStateResponseRemote {

	NSDictionary* _decodedDeviceUIDs;
	NSMutableDictionary* _workingRemoteResponse;
	NSMutableDictionary* _originMapping;
	NSObject*<OS_dispatch_queue> _responseCollectionQueue;
	NSObject*<OS_dispatch_group> _completionGroup;
	MPCAssistantEncodings* _encoder;
	NSString* _requestAceHash;

}
-(void)dealloc;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)setPlayingInfoFromEndpoint:(void*)arg1 ;
@end
