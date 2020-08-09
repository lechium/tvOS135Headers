//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, SAUIAudioData;

@protocol AFUISpeechSynthesis <NSObject>
- (void)prewarmIfNeeded;
- (void)invalidate;
- (void)skipCurrentSynthesis;
- (void)cancel;
- (void)processDelayedItem:(NSString *)arg1;
- (void)enqueuePhaticWithCompletion:(void (^)(long long))arg1;
- (void)enqueueAudioData:(SAUIAudioData *)arg1 identifier:(NSString *)arg2 provisionally:(_Bool)arg3 eligibleAfterDuration:(double)arg4 completion:(void (^)(long long))arg5;
- (void)enqueueText:(NSString *)arg1 identifier:(NSString *)arg2 completion:(void (^)(long long))arg3;
- (void)enqueueText:(NSString *)arg1 identifier:(NSString *)arg2 language:(NSString *)arg3 gender:(NSString *)arg4 isPhonetic:(_Bool)arg5 provisionally:(_Bool)arg6 eligibleAfterDuration:(double)arg7 delayed:(_Bool)arg8 canUseServerTTS:(_Bool)arg9 preparationIdentifier:(NSString *)arg10 completion:(void (^)(long long))arg11 animationIdentifier:(NSString *)arg12 analyticsContext:(NSDictionary *)arg13 speakableContextInfo:(NSDictionary *)arg14;
@end

