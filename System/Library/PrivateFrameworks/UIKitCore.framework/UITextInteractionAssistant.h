/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UITextInteraction_AssistantDelegate.h>
#import <UIKit/UIResponderStandardEditActions.h>

@protocol UITextInput;
@class _UIKeyboardTextSelectionController, UIResponder, UITextSelectionView, UITextChecker, UITextRange, UITextLinkInteraction, UITextInteraction, NSNumber, UILongPressGestureRecognizer, UITapGestureRecognizer, UIGestureRecognizer, UIScrollView, NSString, UIFieldEditor;

@interface UITextInteractionAssistant : NSObject <UITextInteraction_AssistantDelegate, UIResponderStandardEditActions> {

	UIResponder*<UITextInput> _view;
	UITextSelectionView* _selectionView;
	int _autoscrollRamp;
	double _autoscrollFactor;
	CGPoint _autoscrollBasePoint;
	CGPoint _autoscrollUntransformedExtentPoint;
	CGPoint _loupeGestureEndPoint;
	UITextChecker* _textChecker;
	BOOL _inGesture;
	BOOL _autoscrolled;
	BOOL _willHandoffLoupeMagnifier;
	BOOL _needsGestureUpdate;
	long long _previousRepeatedGranularity;
	UITextRange* _stashedTextRange;
	BOOL _didUseStashedRange;
	BOOL _expectingCommit;
	BOOL _externalTextInput;
	BOOL _suppressSystemUI;
	unsigned long long _activeSelectionInteractions;
	UITextLinkInteraction* _linkInteraction;
	UITextInteraction* _interactions;
	long long _textInteractionMode;
	UITextInteraction* _externalInteractions;
	id _grabberSuppressionAssertion;
	_UIKeyboardTextSelectionController* _nonEditableSelectionController;
	BOOL _detaching;
	NSNumber* _viewConformsToTextItemInteracting;
	NSNumber* _viewRespondsToInteractiveTextSelectionDisabled;

}

@property (nonatomic,readonly) BOOL _wk_hasFloatingCursor; 
@property (nonatomic,readonly) UIResponder*<UITextInput> view; 
@property (nonatomic,readonly) UITextSelectionView * selectionView; 
@property (nonatomic,readonly) UIResponder*<UITextInput> textDocument; 
@property (nonatomic,retain,readonly) UILongPressGestureRecognizer * loupeGesture; 
@property (nonatomic,retain,readonly) UITapGestureRecognizer * singleTapGesture; 
@property (nonatomic,retain,readonly) UIGestureRecognizer * doubleTapGesture; 
@property (nonatomic,retain,readonly) UIGestureRecognizer * forcePressGesture; 
@property (assign,nonatomic) BOOL inGesture; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) BOOL autoscrolled; 
@property (assign,nonatomic) CGPoint autoscrollUntransformedExtentPoint; 
@property (nonatomic,readonly) BOOL externalTextInput; 
@property (assign,nonatomic) CGPoint loupeGestureEndPoint; 
@property (nonatomic,readonly) BOOL willHandoffLoupeMagnifier; 
@property (nonatomic,retain,readonly) UITextInteraction * interactions; 
@property (nonatomic,retain) UITextInteraction * externalInteractions; 
@property (nonatomic,retain) UITextLinkInteraction * linkInteraction; 
@property (assign,nonatomic) BOOL expectingCommit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL needsGestureUpdate; 
@property (nonatomic,retain) id grabberSuppressionAssertion; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * activeSelectionController; 
@property (nonatomic,readonly) UIFieldEditor * fieldEditor; 
@property (getter=isInteractiveSelectionDisabled,nonatomic,readonly) BOOL interactiveSelectionDisabled; 
+(long long)_nextGranularityInCycle:(long long)arg1 forTouchType:(long long)arg2 ;
-(BOOL)_wk_hasFloatingCursor;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)activate;
-(void)detach;
-(void)attach;
-(UIResponder*<UITextInput>)view;
-(void)detach:(BOOL)arg1 ;
-(void)selectAll:(id)arg1 ;
-(UITextSelectionView *)selectionView;
-(void)clearSelection;
-(UITextInteraction *)interactions;
-(UIScrollView *)scrollView;
-(id)initWithView:(id)arg1 ;
-(id)_scrollable;
-(void)deactivateSelection;
-(BOOL)inGesture;
-(void)activateSelection;
-(UILongPressGestureRecognizer *)loupeGesture;
-(UITapGestureRecognizer *)singleTapGesture;
-(void)setGestureRecognizers;
-(void)willStartScrollingOrZooming;
-(void)didEndScrollingOrZooming;
-(void)selectWord;
-(void)selectionChanged;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)cancelAutoscroll;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endFloatingCursor;
-(id)attributedTextInRange:(id)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(id)_selectionView;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(void)updateAutoscroll:(id)arg1 ;
-(void)autoscrollWillNotStart;
-(void)stashCurrentSelection;
-(void)setAutoscrolled:(BOOL)arg1 ;
-(void)setInGesture:(BOOL)arg1 ;
-(void)setGrabberSuppressionAssertion:(id)arg1 ;
-(void)setLoupeGestureEndPoint:(CGPoint)arg1 ;
-(void)setNeedsGestureUpdate:(BOOL)arg1 ;
-(void)setFirstResponderIfNecessary;
-(_UIKeyboardTextSelectionController *)activeSelectionController;
-(void)willBeginSelectionInteraction;
-(void)resetWillHandoffLoupeMagnifier;
-(BOOL)autoscrolled;
-(void)didEndSelectionInteraction;
-(BOOL)needsGestureUpdate;
-(BOOL)willHandoffLoupeMagnifier;
-(void)clearStashedSelection;
-(BOOL)hasReplacements;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(UITextInteraction *)externalInteractions;
-(BOOL)shouldEnqueueObserverUpdates;
-(void)scheduleReplacementsWithOptions:(unsigned long long)arg1 ;
-(void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2 ;
-(void)scrollSelectionToVisible;
-(void)setWillHandoffLoupeMagnifier;
-(void)willBeginFloatingCursor:(BOOL)arg1 ;
-(void)loupeMagnifierWithState:(long long)arg1 atPoint:(CGPoint)arg2 ;
-(void)rangedMagnifierWithState:(long long)arg1 atPoint:(CGPoint)arg2 ;
-(void)loupeGestureWithState:(long long)arg1 location:(/*^block*/id)arg2 translation:(/*^block*/id)arg3 velocity:(/*^block*/id)arg4 modifierFlags:(long long)arg5 shouldCancel:(BOOL*)arg6 ;
-(BOOL)containerIsPlainStyleAtom;
-(void)notifyKeyboardSelectionChanged;
-(id)rangeForTextReplacement:(id)arg1 ;
-(void)selectWordWithoutShowingCommands;
-(BOOL)containerIsTextField;
-(void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)updateWithMagnifierTerminalPoint:(BOOL)arg1 ;
-(BOOL)useGesturesForEditableContent;
-(BOOL)viewCouldBecomeEditable:(id)arg1 ;
-(void)canBeginDragCursor:(id)arg1 ;
-(BOOL)containerAllowsSelectionTintOnly;
-(id)initWithView:(id)arg1 textInteractionMode:(long long)arg2 ;
-(void)addGestureRecognizersToView:(id)arg1 ;
-(void)resignedFirstResponder;
-(void)checkEditabilityAndSetFirstResponderIfNecessary;
-(void)scheduleReplacements;
-(void)scheduleChineseTransliteration;
-(CGPoint)constrainedPoint:(CGPoint)arg1 ;
-(void)setExternalInteractions:(UITextInteraction *)arg1 ;
-(void)setSuppressSystemUI:(BOOL)arg1 ;
-(BOOL)supportsIndirectInteractions;
-(void)lollipopGestureWithState:(long long)arg1 location:(CGPoint)arg2 locationOfFirstTouch:(CGPoint)arg3 forTouchType:(long long)arg4 ;
-(void)setFirstResponderIfNecessaryActivatingSelection:(BOOL)arg1 ;
-(void)setExpectingCommit:(BOOL)arg1 ;
-(void)clearGestureRecognizers:(BOOL)arg1 ;
-(id)initWithResponder:(id)arg1 ;
-(void)clearGestureRecognizers;
-(id)textSelectionView;
-(BOOL)isInteractiveSelectionDisabled;
-(BOOL)containerIsBrowserView;
-(BOOL)usesAsynchronousSelectionController;
-(UIFieldEditor *)fieldEditor;
-(BOOL)containerIsAtom;
-(BOOL)wantsLinkInteraction;
-(Class)selectionInteractionClass;
-(id)_asText;
-(void)extendSelectionToPoint:(CGPoint)arg1 ;
-(void)_updateSelectionWithPoint:(CGPoint)arg1 granularity:(long long)arg2 forceGranularity:(BOOL)arg3 ;
-(void)selectionAnimationDidStop;
-(void)setAutoscrollUntransformedExtentPoint:(CGPoint)arg1 ;
-(CGPoint)autoscrollUntransformedExtentPoint;
-(BOOL)handleMultilingualAlternativeWithString:(id)arg1 range:(id)arg2 ;
-(void)scheduleDictationReplacementsForMultilingualAlternatives:(id)arg1 range:(id)arg2 ;
-(id)generatorForRange:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)layoutChangedByScrolling:(BOOL)arg1 ;
-(id)grabberSuppressionAssertion;
-(BOOL)requiresImmediateUpdate;
-(UIResponder*<UITextInput>)textDocument;
-(UITextLinkInteraction *)linkInteraction;
-(UIGestureRecognizer *)doubleTapGesture;
-(UIGestureRecognizer *)forcePressGesture;
-(CGPoint)loupeGestureEndPoint;
-(BOOL)externalTextInput;
-(BOOL)expectingCommit;
-(BOOL)containerAllowsSelection;
-(void)extendSelectionToLoupeOrSetToPoint:(CGPoint)arg1 ;
-(BOOL)shouldSuppressSelectionCommands;
-(void)rangeSelectionStarted:(CGPoint)arg1 ;
-(void)rangeSelectionEnded:(CGPoint)arg1 ;
-(void)rangeSelectionCanceled;
-(void)rangeSelectionMoved:(CGPoint)arg1 withTouchPoint:(CGPoint)arg2 ;
-(BOOL)didUseStashedSelection;
-(BOOL)hasActiveSelectionInteraction;
-(BOOL)showMultilingualDictationReplacementWithRange:(id)arg1 ;
-(BOOL)swallowsDoubleTapWithScale:(double)arg1 atPoint:(CGPoint)arg2 ;
@end

