//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSUUID;
@protocol SRStarkItemControllerDelegate;

@protocol SRStarkItemController <NSObject>
@property(copy, nonatomic) NSUUID *conversationItemIdentifier;
@property(nonatomic) __weak id <SRStarkItemControllerDelegate> delegate;
- (_Bool)isActive;

@optional
@property(readonly, nonatomic) _Bool shouldProceedToNextCommandAtSpeechSynthesisEnd;
- (void)siriDidEndSpeechRecording;
- (void)siriDidStartSpeechRecording;
- (void)siriDidFinishSpeakingWithIdentifier:(NSString *)arg1;
- (void)siriDidStartSpeakingWithIdentifier:(NSString *)arg1;
- (void)updateAfterSpeechQueueEmpties;
@end
