//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol AFUISpeechSynthesisDelegate <NSObject>
- (void)speechSynthesisDidStopSpeakingWithIdentifier:(NSString *)arg1 queueIsEmpty:(_Bool)arg2;
- (void)speechSynthesisDidStartSpeakingWithIdentifier:(NSString *)arg1;
- (void)speechSynthesisExecuteAnimationForIdentifier:(NSString *)arg1;
- (void)speechSynthesisGetPreparedTextForIdentifier:(NSString *)arg1 completion:(void (^)(NSString *, _Bool))arg2;
@end

