//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "JSExport-Protocol.h"

@class JSValue, NSArray, NSDictionary, NSString;

@protocol TVHJSStateMachine <JSExport>
- (void)postEvent:(NSString *)arg1:(NSDictionary *)arg2;
- (void)deactivate;
- (void)activate;
- (void)executeCallbackAfterCurrentStateTransition:(JSValue *)arg1;
- (void)ignoreEventInState:(NSString *)arg1:(NSString *)arg2;
- (void)registerStateTransitionFromState:(NSString *)arg1:(NSString *)arg2:(NSString *)arg3;
- (void)registerDefaultHandlerForEvent:(NSString *)arg1:(JSValue *)arg2;
- (void)registerHandlerForEventAndStates:(NSString *)arg1:(NSArray *)arg2:(JSValue *)arg3;
- (void)registerHandlerForEventAndState:(NSString *)arg1:(NSString *)arg2:(JSValue *)arg3;
- (id)initWithName:(NSString *)arg1:(NSString *)arg2;
@end

