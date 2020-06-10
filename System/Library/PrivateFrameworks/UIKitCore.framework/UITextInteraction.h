/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol UITextInteractionDelegate, UITextInput, UITextInteraction_AssistantDelegate;
@class NSMutableArray, NSMutableDictionary, UILongPressGestureRecognizer, UIResponder, UIView, UITextInteractionInputDelegate, NSArray, NSDictionary, NSString;

@interface UITextInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {

	UITextInteraction* _parent;
	NSMutableArray* _children;
	NSMutableArray* _gestures;
	NSMutableDictionary* _gestureMap;
	BOOL _inGesture;
	long long _textInteractionMode;
	UILongPressGestureRecognizer* _customHighlighterGesture;
	id<UITextInteractionDelegate> _delegate;
	UIResponder*<UITextInput> _textInput;
	UIView* _view;
	UITextInteractionInputDelegate* _interactionInputDelegate;
	id<UITextInteraction_AssistantDelegate> _assistantDelegate;

}

@property (assign,nonatomic,__weak) UIView * view;                                                          //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UITextInteractionInputDelegate * interactionInputDelegate;                     //@synthesize interactionInputDelegate=_interactionInputDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UITextInteraction_AssistantDelegate> assistantDelegate;              //@synthesize assistantDelegate=_assistantDelegate - In the implementation block
@property (__weak,readonly) UITextInteraction * parent; 
@property (__weak,readonly) UITextInteraction * root; 
@property (nonatomic,readonly) NSArray * children;                                                          //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) NSArray * gestures;                                                          //@synthesize gestures=_gestures - In the implementation block
@property (nonatomic,readonly) NSDictionary * gestureMap;                                                   //@synthesize gestureMap=_gestureMap - In the implementation block
@property (assign,setter=setInGesture:,nonatomic) BOOL inGesture;                                           //@synthesize inGesture=_inGesture - In the implementation block
@property (nonatomic,readonly) long long textInteractionSet; 
@property (nonatomic,retain) UILongPressGestureRecognizer * _customHighlighterGesture;                      //@synthesize customHighlighterGesture=_customHighlighterGesture - In the implementation block
@property (assign,nonatomic,__weak) id<UITextInteractionDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIResponder*<UITextInput> textInput;                                    //@synthesize textInput=_textInput - In the implementation block
@property (nonatomic,readonly) long long textInteractionMode;                                               //@synthesize textInteractionMode=_textInteractionMode - In the implementation block
@property (nonatomic,readonly) NSArray * gesturesForFailureRequirements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textInteractionForMode:(long long)arg1 ;
+(id)textInteractionsForSet:(long long)arg1 ;
-(id)init;
-(void)addChild:(id)arg1 ;
-(UITextInteraction *)parent;
-(id<UITextInteractionDelegate>)delegate;
-(void)setDelegate:(id<UITextInteractionDelegate>)arg1 ;
-(NSArray *)children;
-(UITextInteraction *)root;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)removeChild:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)inGesture;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(NSArray *)gesturesForFailureRequirements;
-(UIResponder*<UITextInput>)textInput;
-(void)setTextInput:(UIResponder*<UITextInput>)arg1 ;
-(id)_textInput;
-(void)didMoveToView:(id)arg1 ;
-(NSArray *)gestures;
-(id)_transientState;
-(void)willMoveToView:(id)arg1 ;
-(id)recognizerForName:(id)arg1 ;
-(void)addGestureRecognizer:(id)arg1 withName:(id)arg2 ;
-(BOOL)currentSelectionContainsPoint:(CGPoint)arg1 ;
-(void)cancelLinkInteractionSession;
-(id<UITextInteraction_AssistantDelegate>)assistantDelegate;
-(void)_createFeedbackIfNecessary;
-(void)_prepareFeedbackForGesture;
-(void)setInGesture:(BOOL)arg1 ;
-(void)turnOffDrawsAsAtomIfPlainStyleAtom;
-(void)disableClearsOnInsertion;
-(void)_playFeedbackForCursorMovement;
-(void)_cancelRecognizerWithName:(id)arg1 ;
-(void)_cleanUpFeedbackForGesture;
-(NSDictionary *)gestureMap;
-(BOOL)doesControlDelegate;
-(BOOL)shouldHandleFormGestureAtLocation:(CGPoint)arg1 ;
-(id)defaultDoubleTapRecognizerWithAction:(SEL)arg1 ;
-(id)defaultTapRecognizerWithAction:(SEL)arg1 ;
-(BOOL)containerChangesSelectionOnOneFingerTap;
-(BOOL)_shouldObscureTextInput;
-(id)interactionWithClass:(Class)arg1 ;
-(id)interactionWithGestureForName:(id)arg1 ;
-(void)finishSetup;
-(void)_applyTransientState:(id)arg1 ;
-(long long)textInteractionMode;
-(BOOL)shouldAllowWithTouchTypes:(id)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(UITextInteractionInputDelegate *)interactionInputDelegate;
-(void)setInteractionInputDelegate:(UITextInteractionInputDelegate *)arg1 ;
-(void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 locationOfFirstTouch:(CGPoint)arg4 forTouchType:(long long)arg5 ;
-(void)_setLinkInteractionSession:(id)arg1 ;
-(BOOL)selection:(id)arg1 containsPoint:(CGPoint)arg2 ;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(BOOL)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)removeGestureRecognizerWithName:(id)arg1 ;
-(void)_callDelegateWillMoveTextRangeExtentAtPoint:(CGPoint)arg1 ;
-(long long)textInteractionSet;
-(void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 ;
-(void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 locationOfFirstTouch:(CGPoint)arg4 ;
-(id)linkInteractionSession;
-(void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting:(id)arg1 ;
-(double)distanceBetweenPoint:(CGPoint)arg1 andRects:(id)arg2 ;
-(id)defaultTripleTapRecognizerWithAction:(SEL)arg1 ;
-(UILongPressGestureRecognizer *)_customHighlighterGesture;
-(void)set_customHighlighterGesture:(UILongPressGestureRecognizer *)arg1 ;
-(void)setAssistantDelegate:(id<UITextInteraction_AssistantDelegate>)arg1 ;
@end

