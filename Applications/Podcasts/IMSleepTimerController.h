//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAVPlayer;
@protocol IMSleepTimerDelegate;

@interface IMSleepTimerController : NSObject
{
    id <IMSleepTimerDelegate> _delegate;	// 8 = 0x8
    IMAVPlayer *_player;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001c6ffc
@property(retain, nonatomic) IMAVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <IMSleepTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addActionWithTitle:(id)arg1 autoStop:(unsigned long long)arg2 timerTime:(double)arg3 alertController:(id)arg4;	// IMP=0x00000001001c6d44
- (void)addActionForTime:(double)arg1 alertController:(id)arg2;	// IMP=0x00000001001c6b54
- (id)alertControllerForSleepTimer;	// IMP=0x00000001001c68ac
- (id)initWithPlayer:(id)arg1;	// IMP=0x00000001001c6838

@end

