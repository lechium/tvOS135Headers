//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SATVBluetoothKeyboardManagerDelegate <NSObject>

@optional
- (void)didFailToPairBluetoothKeyboardWithName:(NSString *)arg1;
- (void)didPairBluetoothKeyboardWithName:(NSString *)arg1;
- (void)willAttemptToPairBluetoothKeyboardWithName:(NSString *)arg1;
- (void)presentPIN:(long long)arg1 forKeyboardWithName:(NSString *)arg2;
@end

