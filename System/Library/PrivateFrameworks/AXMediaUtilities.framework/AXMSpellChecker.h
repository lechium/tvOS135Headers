/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AppleSpell;

@interface AXMSpellChecker : NSObject {

	AppleSpell* _spellChecker;

}

@property (nonatomic,retain) AppleSpell * spellChecker;              //@synthesize spellChecker=_spellChecker - In the implementation block
-(AppleSpell *)spellChecker;
-(void)correctSpellingInText:(id)arg1 withLanguages:(id)arg2 ;
-(BOOL)textContainsMisspelling:(id)arg1 withLanguages:(id)arg2 ;
-(void)setSpellChecker:(AppleSpell *)arg1 ;
@end
