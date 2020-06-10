/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@interface NSTypesetter : NSObject {

	void* _reserved;

}
+(void)initialize;
+(long long)defaultTypesetterBehavior;
+(BOOL)allowsDefaultLineBreakStrategy;
+(unsigned long long)defaultLineBreakStrategy;
+(id)sharedSystemTypesetterForBehavior:(long long)arg1 ;
+(long long)defaultStringDrawingTypesetterBehavior;
+(BOOL)_usesATSTypesetter;
+(id)sharedSystemTypesetter;
-(void)dealloc;
-(void)finalize;
-(void)setAttributedString:(id)arg1 ;
-(void)setHyphenationFactor:(float)arg1 ;
-(double)lineFragmentPadding;
-(id)attributedString;
-(void)setUsesFontLeading:(BOOL)arg1 ;
-(void)setLineFragmentPadding:(double)arg1 ;
-(id)layoutManager;
-(BOOL)usesFontLeading;
-(long long)applicationFrameworkContext;
-(NSRange)glyphRangeForCharacterRange:(NSRange)arg1 actualCharacterRange:(NSRange*)arg2 ;
-(double)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned long long)arg2 ;
-(NSRange)characterRangeForGlyphRange:(NSRange)arg1 actualGlyphRange:(NSRange*)arg2 ;
-(unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1 ;
-(NSRange)layoutCharactersInRange:(NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned long long)arg3 ;
-(void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 nextGlyphIndex:(unsigned long long*)arg4 ;
-(id)substituteFontForFont:(id)arg1 ;
-(BOOL)_allowsEllipsisGlyphSubstitution;
-(id)_ellipsisFontForFont:(id)arg1 ;
-(void)setLineFragmentRect:(CGRect)arg1 forGlyphRange:(NSRange)arg2 usedRect:(CGRect)arg3 baselineOffset:(double)arg4 ;
-(void)setApplicationFrameworkContext:(long long)arg1 ;
-(SCD_Struct_NS6*)_getAuxData;
-(BOOL)bidiProcessingEnabled;
-(NSRange)paragraphCharacterRange;
-(NSRange)paragraphSeparatorCharacterRange;
-(long long)_baseWritingDirection;
-(long long)typesetterBehavior;
-(id)currentTextContainer;
-(void)beginLineWithGlyphAtIndex:(unsigned long long)arg1 ;
-(void)getLineFragmentRect:(CGRect*)arg1 usedRect:(CGRect*)arg2 remainingRect:(CGRect*)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(CGRect)arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8 ;
-(double)lineSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(CGRect)arg2 ;
-(double)paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(CGRect)arg2 ;
-(double)paragraphSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(CGRect)arg2 ;
-(BOOL)finalizeLineFragmentRect:(inout CGRect*)arg1 lineFragmentUsedRect:(inout CGRect*)arg2 baselineOffset:(inout double*)arg3 forGlyphRange:(NSRange)arg4 ;
-(void)setLocation:(CGPoint)arg1 withAdvancements:(const double*)arg2 forStartOfGlyphRange:(NSRange)arg3 ;
-(void)setNotShownAttribute:(BOOL)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)endLineWithGlyphRange:(NSRange)arg1 ;
-(id)currentParagraphStyle;
-(void)beginParagraph;
-(void)endParagraph;
-(void)getLineFragmentRect:(CGRect*)arg1 usedRect:(CGRect*)arg2 forParagraphSeparatorGlyphRange:(NSRange)arg3 atProposedOrigin:(CGPoint)arg4 ;
-(float)hyphenationFactor;
-(unsigned long long)layoutParagraphAtPoint:(CGPoint*)arg1 ;
-(SCD_Struct_NS6*)_allocateAuxData;
-(/*function pointer*/void**)_lineFragmentRectForProposedRectArgs;
-(NSRange)paragraphGlyphRange;
-(NSRange)paragraphSeparatorGlyphRange;
-(id)textContainers;
-(BOOL)_forceOriginalFontBaseline;
-(unsigned long long)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned short*)arg2 properties:(long long*)arg3 characterIndexes:(unsigned long long*)arg4 bidiLevels:(char*)arg5 ;
-(id)textTabForGlyphLocation:(double)arg1 writingDirection:(long long)arg2 maxLocation:(double)arg3 ;
-(void)setTypesetterBehavior:(long long)arg1 ;
-(BOOL)_isLineBreakModeOverridden;
-(float)tightenThresholdForTruncation;
-(void)substituteGlyphsInRange:(NSRange)arg1 withGlyphs:(unsigned*)arg2 ;
-(void)insertGlyph:(unsigned)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3 ;
-(void)setAttachmentSize:(CGSize)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)setBidiLevels:(const char*)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)setHardInvalidation:(BOOL)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)_setForceOriginalFontBaseline:(BOOL)arg1 ;
-(void)setParagraphGlyphRange:(NSRange)arg1 separatorGlyphRange:(NSRange)arg2 ;
-(void)deleteGlyphsInRange:(NSRange)arg1 ;
-(unsigned long long)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned*)arg2 characterIndexes:(unsigned long long*)arg3 glyphInscriptions:(unsigned long long*)arg4 elasticBits:(BOOL*)arg5 bidiLevels:(char*)arg6 ;
-(id)attributesForExtraLineFragment;
-(void)_updateParagraphStyleCache:(id)arg1 ;
-(unsigned long long)_getRemainingNominalParagraphRange:(NSRange*)arg1 andParagraphSeparatorRange:(NSRange*)arg2 charactarIndex:(unsigned long long)arg3 layoutManager:(id)arg4 string:(id)arg5 ;
-(void)_setLineBreakModeOverridden:(BOOL)arg1 ;
-(void)_layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 maxCharacterIndex:(unsigned long long)arg4 nextGlyphIndex:(unsigned long long*)arg5 nextCharacterIndex:(unsigned long long*)arg6 ;
-(void)setBidiProcessingEnabled:(BOOL)arg1 ;
-(void)setTightenThresholdForTruncation:(float)arg1 ;
@end

