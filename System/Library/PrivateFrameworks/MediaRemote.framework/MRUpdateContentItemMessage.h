/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRNowPlayingPlayerPathProtobuf, NSArray;

@interface MRUpdateContentItemMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
@property (nonatomic,readonly) NSArray * contentItems; 
-(unsigned long long)type;
-(unsigned long long)priority;
-(NSArray *)contentItems;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2 ;
@end

