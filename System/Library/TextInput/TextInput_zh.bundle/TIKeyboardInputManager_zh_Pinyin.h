/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputChinese/TIKeyboardInputManagerChinesePhonetic.h>

@interface TIKeyboardInputManager_zh_Pinyin : TIKeyboardInputManagerChinesePhonetic
-(unsigned long long)initialSelectedIndex;
-(BOOL)usesPunctuationKeysForRowNavigation;
-(BOOL)usesAutoDeleteWord;
-(id)keyboardBehaviors;
-(id)validCharacterSetForAutocorrection;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(BOOL)supportsPairedPunctutationInput;
-(BOOL)usesGeometryModelData;
-(BOOL)currentShuangpinTypeUsesSemicolon;
-(BOOL)isSpecialInput:(id)arg1 ;
-(BOOL)isShuangpinSemicolon:(id)arg1 ;
-(id)remapInput:(id)arg1 isFacemarkInput:(BOOL*)arg2 ;
-(BOOL)shouldSearchCompletionForSubstrings;
@end

