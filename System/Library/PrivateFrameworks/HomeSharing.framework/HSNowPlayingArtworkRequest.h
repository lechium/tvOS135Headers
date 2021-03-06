/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <HomeSharing/HSRequest.h>

@interface HSNowPlayingArtworkRequest : HSRequest {

	unsigned _interfaceID;
	unsigned _playQueueIndex;
	CGSize _maximumSize;

}

@property (nonatomic,readonly) unsigned interfaceID;                 //@synthesize interfaceID=_interfaceID - In the implementation block
@property (nonatomic,readonly) CGSize maximumSize;                   //@synthesize maximumSize=_maximumSize - In the implementation block
@property (nonatomic,readonly) unsigned playQueueIndex;              //@synthesize playQueueIndex=_playQueueIndex - In the implementation block
-(CGSize)maximumSize;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)initWithInterfaceID:(unsigned)arg1 maximumSize:(CGSize)arg2 playQueueIndex:(unsigned)arg3 ;
-(unsigned)interfaceID;
-(unsigned)playQueueIndex;
@end

