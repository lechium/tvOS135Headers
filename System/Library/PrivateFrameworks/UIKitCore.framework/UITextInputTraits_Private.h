/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSIndexSet, UIColor, UIImage, UIInputContextHistory;


@protocol UITextInputTraits_Private <NSObject,UITextInputTraits>
@property (nonatomic,copy) NSString * recentInputIdentifier; 
@property (assign,nonatomic) NSRange validTextRange; 
@property (nonatomic,copy) NSIndexSet * PINEntrySeparatorIndexes; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (nonatomic,retain) UIColor * underlineColorForTextAlternatives; 
@property (nonatomic,retain) UIColor * underlineColorForSpelling; 
@property (assign,nonatomic) unsigned long long insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) BOOL isSingleLineDocument; 
@property (assign,nonatomic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic) BOOL hasDefaultContents; 
@property (assign,nonatomic) BOOL acceptsPayloads; 
@property (assign,nonatomic) BOOL acceptsEmoji; 
@property (assign,nonatomic) BOOL acceptsDictationSearchResults; 
@property (assign,nonatomic) BOOL useAutomaticEndpointing; 
@property (assign,nonatomic) BOOL showDictationButton; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) BOOL forceDisableDictation; 
@property (assign,nonatomic) BOOL forceDefaultDictationInfo; 
@property (assign,nonatomic) long long forceDictationKeyboardType; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL forceFloatingKeyboard; 
@property (assign,nonatomic) UIEdgeInsets floatingKeyboardEdgeInsets; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL displaySecureEditsUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (nonatomic,retain) UIInputContextHistory * inputContextHistory; 
@property (assign,nonatomic) BOOL disableInputBars; 
@property (assign,nonatomic) BOOL isCarPlayIdiom; 
@property (assign,nonatomic) long long textScriptType; 
@property (assign,nonatomic) BOOL loadKeyboardsForSiriLanguage; 
@property (assign,nonatomic) BOOL disablePrediction; 
@property (assign,nonatomic) BOOL hidePrediction; 
@property (assign,getter=isDevicePasscodeEntry,nonatomic) BOOL devicePasscodeEntry; 
@optional
-(NSString *)responseContext;
-(UIInputContextHistory *)inputContextHistory;
-(void)setInputContextHistory:(id)arg1;
-(void)setResponseContext:(id)arg1;
-(long long)textScriptType;
-(void)setTextScriptType:(long long)arg1;
-(BOOL)disablePrediction;
-(void)setDisablePrediction:(BOOL)arg1;
-(NSString *)recentInputIdentifier;
-(void)setRecentInputIdentifier:(id)arg1;
-(UIColor *)underlineColorForTextAlternatives;
-(UIColor *)underlineColorForSpelling;
-(void)setUnderlineColorForTextAlternatives:(id)arg1;
-(void)setUnderlineColorForSpelling:(id)arg1;
-(void)setUseAutomaticEndpointing:(BOOL)arg1;
-(BOOL)useAutomaticEndpointing;
-(void)setDisplaySecureTextUsingPlainText:(BOOL)arg1;
-(void)setDevicePasscodeEntry:(BOOL)arg1;
-(void)setInsertionPointColor:(id)arg1;
-(void)setSelectionBarColor:(id)arg1;
-(void)setSelectionHighlightColor:(id)arg1;
-(void)setTextLoupeVisibility:(int)arg1;
-(void)setReturnKeyGoesToNextResponder:(BOOL)arg1;
-(void)setContentsIsSingleValue:(BOOL)arg1;
-(void)setTextSuggestionDelegate:(id)arg1;
-(UIColor *)insertionPointColor;
-(UIColor *)selectionBarColor;
-(UIColor *)selectionHighlightColor;
-(void)setShortcutConversionType:(int)arg1;
-(NSRange)validTextRange;
-(void)setValidTextRange:(NSRange)arg1;
-(NSIndexSet *)PINEntrySeparatorIndexes;
-(void)setPINEntrySeparatorIndexes:(id)arg1;
-(CFCharacterSetRef)textTrimmingSet;
-(void)setTextTrimmingSet:(CFCharacterSetRef)arg1;
-(UIImage *)selectionDragDotImage;
-(void)setSelectionDragDotImage:(id)arg1;
-(unsigned long long)insertionPointWidth;
-(void)setInsertionPointWidth:(unsigned long long)arg1;
-(int)textLoupeVisibility;
-(int)textSelectionBehavior;
-(void)setTextSelectionBehavior:(int)arg1;
-(id)textSuggestionDelegate;
-(BOOL)isSingleLineDocument;
-(void)setIsSingleLineDocument:(BOOL)arg1;
-(BOOL)contentsIsSingleValue;
-(BOOL)hasDefaultContents;
-(void)setHasDefaultContents:(BOOL)arg1;
-(BOOL)acceptsPayloads;
-(void)setAcceptsPayloads:(BOOL)arg1;
-(BOOL)acceptsEmoji;
-(void)setAcceptsEmoji:(BOOL)arg1;
-(BOOL)acceptsDictationSearchResults;
-(void)setAcceptsDictationSearchResults:(BOOL)arg1;
-(BOOL)showDictationButton;
-(void)setShowDictationButton:(BOOL)arg1;
-(BOOL)forceEnableDictation;
-(void)setForceEnableDictation:(BOOL)arg1;
-(BOOL)forceDisableDictation;
-(void)setForceDisableDictation:(BOOL)arg1;
-(BOOL)forceDefaultDictationInfo;
-(void)setForceDefaultDictationInfo:(BOOL)arg1;
-(long long)forceDictationKeyboardType;
-(void)setForceDictationKeyboardType:(long long)arg1;
-(int)emptyContentReturnKeyType;
-(void)setEmptyContentReturnKeyType:(int)arg1;
-(BOOL)returnKeyGoesToNextResponder;
-(BOOL)acceptsFloatingKeyboard;
-(void)setAcceptsFloatingKeyboard:(BOOL)arg1;
-(BOOL)forceFloatingKeyboard;
-(void)setForceFloatingKeyboard:(BOOL)arg1;
-(UIEdgeInsets)floatingKeyboardEdgeInsets;
-(void)setFloatingKeyboardEdgeInsets:(UIEdgeInsets)arg1;
-(BOOL)acceptsSplitKeyboard;
-(void)setAcceptsSplitKeyboard:(BOOL)arg1;
-(BOOL)displaySecureTextUsingPlainText;
-(BOOL)displaySecureEditsUsingPlainText;
-(void)setDisplaySecureEditsUsingPlainText:(BOOL)arg1;
-(BOOL)learnsCorrections;
-(void)setLearnsCorrections:(BOOL)arg1;
-(int)shortcutConversionType;
-(BOOL)suppressReturnKeyStyling;
-(void)setSuppressReturnKeyStyling:(BOOL)arg1;
-(BOOL)useInterfaceLanguageForLocalization;
-(void)setUseInterfaceLanguageForLocalization:(BOOL)arg1;
-(BOOL)deferBecomingResponder;
-(void)setDeferBecomingResponder:(BOOL)arg1;
-(BOOL)enablesReturnKeyOnNonWhiteSpaceContent;
-(void)setEnablesReturnKeyOnNonWhiteSpaceContent:(BOOL)arg1;
-(NSString *)autocorrectionContext;
-(void)setAutocorrectionContext:(id)arg1;
-(BOOL)disableInputBars;
-(void)setDisableInputBars:(BOOL)arg1;
-(BOOL)isCarPlayIdiom;
-(void)setIsCarPlayIdiom:(BOOL)arg1;
-(BOOL)loadKeyboardsForSiriLanguage;
-(void)setLoadKeyboardsForSiriLanguage:(BOOL)arg1;
-(BOOL)hidePrediction;
-(void)setHidePrediction:(BOOL)arg1;
-(BOOL)isDevicePasscodeEntry;

@required
-(void)takeTraitsFrom:(id)arg1;

@end

