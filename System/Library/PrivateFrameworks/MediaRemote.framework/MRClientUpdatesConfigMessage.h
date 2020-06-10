/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRClientUpdatesConfigMessage : MRProtocolMessage

@property (nonatomic,readonly) BOOL nowPlayingUpdates; 
@property (nonatomic,readonly) BOOL artworkUpdates; 
@property (nonatomic,readonly) BOOL volumeUpdates; 
@property (nonatomic,readonly) BOOL keyboardUpdates; 
@property (nonatomic,readonly) BOOL outputDeviceUpdates; 
-(unsigned long long)type;
-(BOOL)nowPlayingUpdates;
-(BOOL)artworkUpdates;
-(BOOL)volumeUpdates;
-(BOOL)keyboardUpdates;
-(BOOL)outputDeviceUpdates;
-(id)initWithNowPlayingUpdates:(BOOL)arg1 artworkUpdates:(BOOL)arg2 volumeUpdates:(BOOL)arg3 keyboardUpdates:(BOOL)arg4 outputDeviceUpdates:(BOOL)arg5 ;
@end

