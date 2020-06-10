/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIDynamicValueConvergenceAnimation, NSHashTable;

@interface _UIFocusEffectsController : NSObject {

	_UIDynamicValueConvergenceAnimation* _rollbackAnimation;
	NSHashTable* _observers;
	CGPoint _displayOffset;
	double _displayMovementAdjustment;
	BOOL _displayOffsetAccumulatorEnabled;
	CGPoint _currentOffset;

}

@property (nonatomic,readonly) CGPoint currentOffset;                           //@synthesize currentOffset=_currentOffset - In the implementation block
@property (nonatomic,readonly) CGPoint displayOffset; 
@property (assign,nonatomic) BOOL displayOffsetAccumulatorEnabled;              //@synthesize displayOffsetAccumulatorEnabled=_displayOffsetAccumulatorEnabled - In the implementation block
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)reset;
-(CGPoint)currentOffset;
-(void)setDisplayOffsetAccumulatorEnabled:(BOOL)arg1 ;
-(void)cancelRollbackAnimation;
-(void)updateCurrentOffset:(CGPoint)arg1 ;
-(void)adjustDisplayOffsetAccumulationFactorForFocusTransfer;
-(void)updateCurrentOffset:(CGPoint)arg1 overrideDisplayOffset:(id)arg2 ;
-(void)startRollbackAnimation;
-(void)startRollbackAnimationFasterConvergence;
-(void)resetDisplayOffsetAccumulationFactor;
-(void)_notifyObserversForMovementDirection:(CGVector)arg1 ;
-(CGPoint)displayOffset;
-(BOOL)displayOffsetAccumulatorEnabled;
@end

