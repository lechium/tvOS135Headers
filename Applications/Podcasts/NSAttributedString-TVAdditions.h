//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (TVAdditions)
+ (id)empty;	// IMP=0x0000000100190a88
+ (id)safeAttributedStringWithHTML:(id)arg1 attributes:(id)arg2;	// IMP=0x00000001001dda48
+ (id)attributedStringWithTemplateString:(id)arg1 baseAttributes:(id)arg2 snippetAttributes:(id)arg3 snippets:(id)arg4;	// IMP=0x00000001001dd5a4
- (struct CGRect)boundingRectWithWidth:(double)arg1 lines:(unsigned long long)arg2;	// IMP=0x0000000100077650
- (long long)strongBaseWritingDirectionOfParagraphAtOrBeforeIndex:(long long)arg1;	// IMP=0x0000000100190f64
@property(nonatomic, readonly) struct _NSRange fullRange;
- (long long)baseWritingDirectionForCharacterAtIndex:(long long)arg1 unknownStyle:(_Bool *)arg2;	// IMP=0x0000000100190800
- (id)MTMPU_tallestFontFromAttributes;	// IMP=0x00000001001c86c4
- (_Bool)MTMPU_hasUniformFont;	// IMP=0x00000001001c862c
- (id)MTMPU_attributedStringByUpdatingTextStyleFontsToPreferredTextStyleFonts;	// IMP=0x00000001001c8410
- (id)attributedStringWithDefaultLineSpacing;	// IMP=0x00000001001dd7d4
- (id)attributedStringByTrimmingWhitespaceNewlinesAndObjectReplacementCharacters;	// IMP=0x00000001001dd4ec
- (id)attributedStringByTrimmingCharactersInCharacterSet:(id)arg1;	// IMP=0x00000001001dd3dc
@end
