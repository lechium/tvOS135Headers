//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol DMDActivationPredicateObserverDelegate;

@interface DMDActivationPredicateObserver : NSObject
{
    _Bool _lastPredicateEvaluationValue;	// 8 = 0x8
    id <DMDActivationPredicateObserverDelegate> _delegate;	// 16 = 0x10
    NSString *_predicateType;	// 24 = 0x18
    NSString *_uniqueIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100012014
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *predicateType; // @synthesize predicateType=_predicateType;
@property(nonatomic) _Bool lastPredicateEvaluationValue; // @synthesize lastPredicateEvaluationValue=_lastPredicateEvaluationValue;
@property(nonatomic) __weak id <DMDActivationPredicateObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)calendarForIdentifier:(id)arg1;	// IMP=0x0000000100011d00
- (void)reportActivationPredicateObserverDidTrigger;	// IMP=0x0000000100011c48
- (id)metadata;	// IMP=0x0000000100011b20
- (void)invalidate;	// IMP=0x0000000100011b10
- (void)updateObserverRegistration;	// IMP=0x0000000100011b0c
- (id)evaluatePredicateWithError:(id *)arg1;	// IMP=0x0000000100011b04
- (id)initWithDelegate:(id)arg1 uniqueIdentifier:(id)arg2 predicate:(id)arg3;	// IMP=0x00000001000119f4

@end
