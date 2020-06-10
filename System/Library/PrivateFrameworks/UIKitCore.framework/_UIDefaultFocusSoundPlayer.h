/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIFocusSoundPlayer.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface _UIDefaultFocusSoundPlayer : NSObject <_UIFocusSoundPlayer> {

	NSMutableDictionary* _urlPools;
	NSMutableDictionary* _focusSoundPools;
	NSObject*<OS_dispatch_queue> _soundQueue;

}

@property (nonatomic,retain) NSMutableDictionary * urlPools;                       //@synthesize urlPools=_urlPools - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * focusSoundPools;                //@synthesize focusSoundPools=_focusSoundPools - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> soundQueue;              //@synthesize soundQueue=_soundQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)_init;
-(void)playSoundWithFocusSound:(long long)arg1 volume:(double)arg2 pan:(double)arg3 ;
-(void)playSoundWithURL:(id)arg1 volume:(double)arg2 pan:(double)arg3 ;
-(void)_playSystemSound:(unsigned)arg1 withVolume:(double)arg2 pan:(double)arg3 ;
-(NSMutableDictionary *)urlPools;
-(void)setUrlPools:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)focusSoundPools;
-(void)setFocusSoundPools:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)soundQueue;
-(void)setSoundQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
