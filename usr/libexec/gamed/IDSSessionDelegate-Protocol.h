//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDSSession, NSArray, NSData, NSError, NSString;

@protocol IDSSessionDelegate <NSObject>

@optional
- (void)session:(IDSSession *)arg1 didReceiveReport:(NSArray *)arg2;
- (void)session:(NSString *)arg1 didReceiveData:(NSData *)arg2;
- (void)sessionEnded:(IDSSession *)arg1 withReason:(unsigned int)arg2 error:(NSError *)arg3;
- (void)sessionEnded:(IDSSession *)arg1;
- (void)sessionStarted:(IDSSession *)arg1;
- (void)session:(IDSSession *)arg1 receivedInvitationCancelFromID:(NSString *)arg2;
- (void)session:(IDSSession *)arg1 receivedInvitationDeclineFromID:(NSString *)arg2;
- (void)session:(IDSSession *)arg1 receivedInvitationAcceptFromID:(NSString *)arg2;
@end

