//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TVPPlayback><TVPAVFPlayback;

@interface MTTVPlayerManager : NSObject
{
    id <TVPPlayback><TVPAVFPlayback> _player;	// 8 = 0x8
}

+ (id)defaultPlayer;	// IMP=0x00000001000b9618
+ (id)sharedInstance;	// IMP=0x00000001000b957c
- (void).cxx_destruct;	// IMP=0x00000001000b96ec
@property(retain, nonatomic) id <TVPPlayback><TVPAVFPlayback> player; // @synthesize player=_player;
- (id)init;	// IMP=0x00000001000b9674

@end

