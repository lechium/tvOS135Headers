/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIKeyboardCandidateList <NSObject>
@optional
-(id)candidates;
-(id)secureCandidateRenderTraits;
-(void)setInlineText:(id)arg1;
-(BOOL)hasCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
-(BOOL)handleNumberKey:(unsigned long long)arg1;
-(id)inlineText;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6;
-(void)showCaret:(BOOL)arg1 gradually:(BOOL)arg2;
-(BOOL)handleTabKeyWithShift:(BOOL)arg1;
-(void)candidatesDidChange;
-(void)jumpToCompositions;
-(void)revealHiddenCandidates;
-(long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1;
-(long long)rowForCandidateAtIndex:(unsigned long long)arg1;

@required
-(BOOL)hasCandidates;
-(id)keyboardBehaviors;
-(id)currentCandidate;
-(unsigned long long)currentIndex;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
-(BOOL)showCandidate:(id)arg1;
-(BOOL)isExtendedList;
-(BOOL)isFloatingList;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1;
-(void)showCandidateAtIndex:(unsigned long long)arg1;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1;
-(id)statisticsIdentifier;
-(unsigned long long)selectedSortIndex;

@end

