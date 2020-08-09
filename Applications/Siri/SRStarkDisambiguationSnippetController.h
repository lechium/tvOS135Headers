//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SRStarkTableViewController.h"

#import "SRStarkItemController-Protocol.h"
#import "SRStarkTableViewControllerDelegate-Protocol.h"

@class AFAnalyticsTurnBasedInstrumentationContext, NSMutableDictionary, NSString, NSTimer, NSUUID, SAUIListItem;
@protocol SRStarkDisambiguationSnippetControllerDelegate;

@interface SRStarkDisambiguationSnippetController : SRStarkTableViewController <SRStarkTableViewControllerDelegate, SRStarkItemController>
{
    unsigned long long _preferredListItemIndex;	// 8 = 0x8
    SAUIListItem *_preferredListItem;	// 16 = 0x10
    _Bool _isGroup;	// 24 = 0x18
    NSMutableDictionary *_groupNameMapping;	// 32 = 0x20
    _Bool _isIdle;	// 40 = 0x28
    NSUUID *_conversationItemIdentifier;	// 48 = 0x30
    id <SRStarkDisambiguationSnippetControllerDelegate> _delegate;	// 56 = 0x38
    NSString *_disambiguationKey;	// 64 = 0x40
    NSTimer *_idleTimer;	// 72 = 0x48
    AFAnalyticsTurnBasedInstrumentationContext *_turnContext;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100029810
@property(retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *turnContext; // @synthesize turnContext=_turnContext;
@property(retain, nonatomic, getter=_idleTimer) NSTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(nonatomic, getter=_isIdle) _Bool isIdle; // @synthesize isIdle=_isIdle;
@property(copy, nonatomic, getter=_disambiguationKey) NSString *disambiguationKey; // @synthesize disambiguationKey=_disambiguationKey;
@property(nonatomic) __weak id <SRStarkDisambiguationSnippetControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSUUID *conversationItemIdentifier; // @synthesize conversationItemIdentifier=_conversationItemIdentifier;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000296c4
- (id)backgroundColorForTableViewCells;	// IMP=0x0000000100029668
- (id)_disambiguationAttributedString:(id)arg1 boldedRange:(struct _NSRange)arg2;	// IMP=0x00000001000294e0
- (void)didPressShowMore;	// IMP=0x0000000100029328
- (void)didPressItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000010002910c
- (id)newShowMoreCellWithIdentifier:(id)arg1;	// IMP=0x00000001000290b4
- (Class)showMoreCellClass;	// IMP=0x00000001000290a8
- (void)configureCell:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000100028d28
- (id)newCellWithIdentifier:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000100028cd4
- (id)cellIdentifierForItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000100028cc8
- (id)tableCellIdentifiersAndClasses;	// IMP=0x0000000100028c48
- (void)siriDidEndSpeechRecording;	// IMP=0x0000000100028c3c
- (void)siriDidStartSpeechRecording;	// IMP=0x0000000100028c08
- (void)siriDidFinishSpeakingWithIdentifier:(id)arg1;	// IMP=0x0000000100028bf4
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x0000000100028bc0
- (_Bool)isActive;	// IMP=0x0000000100028ba0
- (long long)preferredUserInterfaceStyle;	// IMP=0x0000000100028b98
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100028b3c
- (void)_createNewIdleTimer;	// IMP=0x00000001000289dc
- (void)_resetIdleTimer;	// IMP=0x0000000100028914
- (void)_cancelIdleTimer;	// IMP=0x000000010002880c
- (void)_idleTimerFired:(id)arg1;	// IMP=0x000000010002873c
- (void)autodisambiguate;	// IMP=0x0000000100028710
- (_Bool)shouldAutodisambiguate;	// IMP=0x00000001000286f8
- (id)initWithAceObject:(id)arg1 conversationItemIdentifier:(id)arg2 turnContext:(id)arg3;	// IMP=0x000000010002800c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldProceedToNextCommandAtSpeechSynthesisEnd;
@property(readonly) Class superclass;

@end

