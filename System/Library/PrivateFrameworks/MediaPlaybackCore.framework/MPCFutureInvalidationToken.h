/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPCFuture;

@interface MPCFutureInvalidationToken : NSObject <NSCopying> {

	MPCFuture* _future;

}

@property (nonatomic,retain) MPCFuture * future;              //@synthesize future=_future - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPCFuture *)future;
-(void)setFuture:(MPCFuture *)arg1 ;
@end

