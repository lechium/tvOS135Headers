/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCPlayerCommandRequest;

@interface MPCMediaRemoteCommandOperation : MPAsyncOperation {

	MPCPlayerCommandRequest* _request;
	unsigned long long _options;

}

@property (nonatomic,readonly) MPCPlayerCommandRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                     //@synthesize options=_options - In the implementation block
-(unsigned long long)options;
-(MPCPlayerCommandRequest *)request;
-(void)execute;
-(id)initWithCommandRequest:(id)arg1 options:(unsigned long long)arg2 ;
@end

