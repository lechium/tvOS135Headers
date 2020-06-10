/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@class NSMutableArray, MCKeyboardInput, NSArray, NSString, TIKeyboardTouchEvent, MCDrawInput, TIWordSearch, TIWordSearchCandidateResultSet, NSMutableDictionary, NSCharacterSet;

@interface TIKeyboardInputManager_zh_ja : TIKeyboardInputManager {

	BOOL _hasCommittedPartialCandidate;
	BOOL _hasBackspacedIntoInputString;
	BOOL _preservesComposingInput;
	int _lastCommittedCandidateType;
	NSMutableArray* _touchDataArray;
	MCKeyboardInput* _composingInput;
	RefPtr<TI::Favonius::KeyboardLayout>* _baseLayout;
	TIKeyboardInputManager_zh_ja* chainedKeyboardInputManager;
	TIKeyboardInputManager_zh_ja* _composingKeyboardInputManager;
	NSArray* _clearedGeometryDataArray;
	NSArray* _clearedTouchDataArray;
	NSString* _currentClientIdentifier;
	NSString* _currentRecipientIdentifier;
	TIKeyboardTouchEvent* _previousTouchEvent;
	MCDrawInput* _cancelledDrawInput;
	RefPtr<TI::Favonius::KeyboardLayout>* _favoniusLayoutForCharacterKeysFrame;
	/*^block*/id _compositionCompletionHandler;
	TIWordSearch* _wordSearch;
	TIWordSearchCandidateResultSet* _wordSearchCandidateResultSet;
	MCKeyboardInput* _previouslyDeletedTypeInput;
	MCKeyboardInput* _previouslyProcessedDeleteInput;
	NSMutableArray* _geometryDataArray;
	NSMutableDictionary* _touchDownEvents;
	NSMutableDictionary* _touchUpEvents;
	CGRect _currentLayoutCharacterKeysFrame;

}

@property (nonatomic,retain) NSArray * clearedGeometryDataArray;                                                     //@synthesize clearedGeometryDataArray=_clearedGeometryDataArray - In the implementation block
@property (nonatomic,retain) NSArray * clearedTouchDataArray;                                                        //@synthesize clearedTouchDataArray=_clearedTouchDataArray - In the implementation block
@property (nonatomic,copy) NSString * currentClientIdentifier;                                                       //@synthesize currentClientIdentifier=_currentClientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * currentRecipientIdentifier;                                                    //@synthesize currentRecipientIdentifier=_currentRecipientIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasCommittedPartialCandidate;                                                      //@synthesize hasCommittedPartialCandidate=_hasCommittedPartialCandidate - In the implementation block
@property (assign,nonatomic) BOOL hasBackspacedIntoInputString;                                                      //@synthesize hasBackspacedIntoInputString=_hasBackspacedIntoInputString - In the implementation block
@property (assign,nonatomic) int lastCommittedCandidateType;                                                         //@synthesize lastCommittedCandidateType=_lastCommittedCandidateType - In the implementation block
@property (assign,nonatomic) BOOL preservesComposingInput;                                                           //@synthesize preservesComposingInput=_preservesComposingInput - In the implementation block
@property (nonatomic,retain) TIKeyboardTouchEvent * previousTouchEvent;                                              //@synthesize previousTouchEvent=_previousTouchEvent - In the implementation block
@property (nonatomic,retain) MCDrawInput * cancelledDrawInput;                                                       //@synthesize cancelledDrawInput=_cancelledDrawInput - In the implementation block
@property (nonatomic,readonly) RefPtr<TI::Favonius::KeyboardLayout>* baseLayout;                                     //@synthesize baseLayout=_baseLayout - In the implementation block
@property (nonatomic,readonly) CGRect currentLayoutCharacterKeysFrame;                                               //@synthesize currentLayoutCharacterKeysFrame=_currentLayoutCharacterKeysFrame - In the implementation block
@property (assign,nonatomic) RefPtr<TI::Favonius::KeyboardLayout>* favoniusLayoutForCharacterKeysFrame;              //@synthesize favoniusLayoutForCharacterKeysFrame=_favoniusLayoutForCharacterKeysFrame - In the implementation block
@property (nonatomic,copy) id compositionCompletionHandler;                                                          //@synthesize compositionCompletionHandler=_compositionCompletionHandler - In the implementation block
@property (nonatomic,readonly) TIWordSearch * wordSearch;                                                            //@synthesize wordSearch=_wordSearch - In the implementation block
@property (nonatomic,readonly) MecabraRef mecabra; 
@property (nonatomic,retain) TIWordSearchCandidateResultSet * wordSearchCandidateResultSet;                          //@synthesize wordSearchCandidateResultSet=_wordSearchCandidateResultSet - In the implementation block
@property (nonatomic,readonly) BOOL supportsPerRecipientLearning; 
@property (nonatomic,readonly) MCKeyboardInput * composingInput;                                                     //@synthesize composingInput=_composingInput - In the implementation block
@property (nonatomic,readonly) BOOL usesComposingInput; 
@property (nonatomic,retain) MCKeyboardInput * previouslyDeletedTypeInput;                                           //@synthesize previouslyDeletedTypeInput=_previouslyDeletedTypeInput - In the implementation block
@property (nonatomic,retain) MCKeyboardInput * previouslyProcessedDeleteInput;                                       //@synthesize previouslyProcessedDeleteInput=_previouslyProcessedDeleteInput - In the implementation block
@property (nonatomic,readonly) NSMutableArray * geometryDataArray;                                                   //@synthesize geometryDataArray=_geometryDataArray - In the implementation block
@property (nonatomic,readonly) NSCharacterSet * validCharacterSetForAutocorrection; 
@property (nonatomic,readonly) NSMutableDictionary * touchDownEvents;                                                //@synthesize touchDownEvents=_touchDownEvents - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * touchUpEvents;                                                  //@synthesize touchUpEvents=_touchUpEvents - In the implementation block
@property (nonatomic,readonly) NSMutableArray * touchDataArray;                                                      //@synthesize touchDataArray=_touchDataArray - In the implementation block
@property (nonatomic,readonly) TIKeyboardInputManager_zh_ja * chainedKeyboardInputManager; 
@property (nonatomic,retain) TIKeyboardInputManager_zh_ja * composingKeyboardInputManager;                           //@synthesize composingKeyboardInputManager=_composingKeyboardInputManager - In the implementation block
+(id)initializedClients;
+(id)dummyTouchData;
+(id)dummyGeometryData;
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
+(id)offlineLearningHandleForInputMode:(id)arg1 ;
+(Class)wordSearchClass;
+(id)inputMethodWithChainedKeyboardInputManager:(id)arg1 ;
-(void)dealloc;
-(void)resume;
-(void)suspend;
-(void)setOriginalInput:(id)arg1 ;
-(BOOL)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(void)candidateRejected:(id)arg1 ;
-(void)lastAcceptedCandidateCorrected;
-(id)keyboardConfiguration;
-(unsigned long long)autoquoteType;
-(id)wordSeparator;
-(id)inputsToReject;
-(MecabraRef)mecabra;
-(RefPtr<TI::Favonius::KeyboardLayout>*)baseLayout;
-(TIKeyboardInputManager_zh_ja *)chainedKeyboardInputManager;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(MCKeyboardInput *)composingInput;
-(BOOL)usesComposingInput;
-(BOOL)isProgressivelyPathing;
-(BOOL)shouldDelayUpdateComposedText;
-(BOOL)shouldClearInputOnMarkedTextOutOfSync;
-(NSMutableArray *)touchDataArray;
-(id)geometryModelData;
-(NSRange)analysisStringRange;
-(NSCharacterSet *)validCharacterSetForAutocorrection;
-(void)saveGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)restoreGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)padGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)savePartialGeometryData;
-(void)updateComposedText;
-(id)convertInputsToSyntheticInputUptoCount:(int)arg1 ;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)clearInput;
-(BOOL)needsTouchEvents;
-(CGRect)currentLayoutCharacterKeysFrame;
-(long long)addTouch:(id)arg1 shouldHitTest:(BOOL)arg2 ;
-(id)touchDataForPathIndex:(long long)arg1 ;
-(void)saveTouchDataForEvent:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)logInputString;
-(void)logDocumentContext;
-(void)logAllCandidates;
-(void)logCommittedCandidate:(id)arg1 partial:(BOOL)arg2 ;
-(void)storeLanguageModelDynamicDataIncludingCache;
-(void)insertDummyGeometryDataAtIndex:(unsigned long long)arg1 ;
-(void)insertDummyTouchDataAtIndex:(unsigned long long)arg1 ;
-(void)handlePerformBackgroundMaintenanceNotification;
-(id)adaptationContextReadingForReanalysisString:(id)arg1 fromRecentlyCommittedCandidates:(id)arg2 ;
-(BOOL)shouldUpdateLanguageModel;
-(BOOL)updateLanguageModelForKeyboardState;
-(BOOL)supportsPerRecipientLearning;
-(void)setLanguageModelAdaptationContext;
-(int)mecabraTextContentTypeFromTITextContentType:(id)arg1 ;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(void)updateUsageStatisticsForCandidate:(id)arg1 isPartial:(BOOL)arg2 ;
-(void)incrementUsageTrackingKeysForDeleteFromInput;
-(id)handleKeyboardInput:(id)arg1 ;
-(void)updateDocumentContext;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(id)candidateResultSetFromWordSearchCandidateResultSet:(id)arg1 ;
-(void*)mecabraCandidateRefFromCandidate:(id)arg1 ;
-(id)segmentsFromCandidate:(id)arg1 phraseBoundary:(BOOL)arg2 ;
-(void)addProactiveTriggers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateProactiveCandidatesForCandidateResultSet:(id)arg1 withInput:(id)arg2 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 candidateHandler:(id)arg3 ;
-(BOOL)supportsCandidateGeneration;
-(BOOL)alreadyGeneratedCandidates;
-(id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 ;
-(id)generateRefinementsForCandidate:(id)arg1 ;
-(long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 withInput:(id)arg3 ;
-(TIKeyboardInputManager_zh_ja *)composingKeyboardInputManager;
-(void)setComposingKeyboardInputManager:(TIKeyboardInputManager_zh_ja *)arg1 ;
-(NSArray *)clearedGeometryDataArray;
-(void)setClearedGeometryDataArray:(NSArray *)arg1 ;
-(NSArray *)clearedTouchDataArray;
-(void)setClearedTouchDataArray:(NSArray *)arg1 ;
-(NSString *)currentClientIdentifier;
-(void)setCurrentClientIdentifier:(NSString *)arg1 ;
-(NSString *)currentRecipientIdentifier;
-(void)setCurrentRecipientIdentifier:(NSString *)arg1 ;
-(BOOL)hasCommittedPartialCandidate;
-(void)setHasCommittedPartialCandidate:(BOOL)arg1 ;
-(BOOL)hasBackspacedIntoInputString;
-(void)setHasBackspacedIntoInputString:(BOOL)arg1 ;
-(int)lastCommittedCandidateType;
-(void)setLastCommittedCandidateType:(int)arg1 ;
-(BOOL)preservesComposingInput;
-(void)setPreservesComposingInput:(BOOL)arg1 ;
-(TIKeyboardTouchEvent *)previousTouchEvent;
-(void)setPreviousTouchEvent:(TIKeyboardTouchEvent *)arg1 ;
-(MCDrawInput *)cancelledDrawInput;
-(void)setCancelledDrawInput:(MCDrawInput *)arg1 ;
-(RefPtr<TI::Favonius::KeyboardLayout>*)favoniusLayoutForCharacterKeysFrame;
-(void)setFavoniusLayoutForCharacterKeysFrame:(RefPtr<TI::Favonius::KeyboardLayout>*)arg1 ;
-(id)compositionCompletionHandler;
-(void)setCompositionCompletionHandler:(id)arg1 ;
-(TIWordSearch *)wordSearch;
-(TIWordSearchCandidateResultSet *)wordSearchCandidateResultSet;
-(void)setWordSearchCandidateResultSet:(TIWordSearchCandidateResultSet *)arg1 ;
-(MCKeyboardInput *)previouslyDeletedTypeInput;
-(void)setPreviouslyDeletedTypeInput:(MCKeyboardInput *)arg1 ;
-(MCKeyboardInput *)previouslyProcessedDeleteInput;
-(void)setPreviouslyProcessedDeleteInput:(MCKeyboardInput *)arg1 ;
-(NSMutableArray *)geometryDataArray;
-(NSMutableDictionary *)touchDownEvents;
-(NSMutableDictionary *)touchUpEvents;
-(id)initWithKeyboardInputManagerToChain:(id)arg1 ;
-(void)commitComposition;
-(void)composeText:(/*^block*/id)arg1 ;
-(void)_completeComposition:(BOOL)arg1 ;
-(void)composeTextWith:(id)arg1 ;
-(void)completeComposition;
-(void)cancelComposition;
@end

