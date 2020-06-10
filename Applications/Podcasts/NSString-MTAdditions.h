//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

#import "IMJSONSerializableValueProviding-Protocol.h"

@interface NSString (MTAdditions) <IMJSONSerializableValueProviding>
+ (_Bool)mt_isJapanese;	// IMP=0x000000010017156c
+ (_Bool)mt_isEnglish;	// IMP=0x00000001001714b4
+ (id)stringWithDuration:(double)arg1 unitsStyle:(long long)arg2 includeTimeRemainingPhrase:(_Bool)arg3;	// IMP=0x0000000100171150
+ (id)prettyShortStringWithDuration:(double)arg1 includeTimeRemainingPhrase:(_Bool)arg2 abbreviated:(_Bool)arg3;	// IMP=0x0000000100171130
+ (id)prettyShortStringWithDuration:(double)arg1 includeTimeRemainingPhrase:(_Bool)arg2;	// IMP=0x0000000100171120
+ (id)prettyShortStringWithDuration:(double)arg1 abbreviated:(_Bool)arg2;	// IMP=0x000000010017110c
+ (id)prettyShortStringWithDuration:(double)arg1;	// IMP=0x00000001001710fc
+ (id)prettyStringWithDuration:(double)arg1;	// IMP=0x0000000100170920
+ (id)localizedStringWithNumber:(id)arg1;	// IMP=0x0000000100170918
+ (id)stringWithBytesize:(unsigned long long)arg1 countStyle:(long long)arg2;	// IMP=0x00000001001cc3bc
+ (id)stringWithBytesize:(unsigned long long)arg1;	// IMP=0x00000001001cc3ac
+ (double)durationWithHMSString:(id)arg1;	// IMP=0x00000001001cc200
+ (id)stringWithDuration:(double)arg1;	// IMP=0x00000001001cbe80
+ (id)UUID;	// IMP=0x00000001001cb78c
+ (id)durationFormatter;	// IMP=0x00000001001cb690
- (id)stringBySmartlyStrippingHTML;	// IMP=0x0000000100171a3c
- (id)stringByRemovingNewlineCharacters;	// IMP=0x0000000100171648
- (_Bool)isNotEmpty;	// IMP=0x0000000100171624
- (id)words;	// IMP=0x000000010017083c
- (_Bool)containsStringInsensitive:(id)arg1;	// IMP=0x0000000100170810
- (id)cleanedTitleStringWithPrefix:(id)arg1;	// IMP=0x00000001001703d8
- (id)im_jsonSerializableValue;	// IMP=0x00000001001a6158
- (_Bool)hasHTML;	// IMP=0x00000001001ccfe0
- (_Bool)imIsVerticalWritingMode;	// IMP=0x00000001001ccfcc
- (_Bool)imIsHorizontalWritingMode;	// IMP=0x00000001001ccfb8
- (_Bool)imIsDefaultWritingMode;	// IMP=0x00000001001ccf70
- (unsigned long long)unsignedLongLongValue;	// IMP=0x00000001001ccf48
- (id)stringByRemovingEnclosingQuotations;	// IMP=0x00000001001ccd94
- (id)im_uppercaseStringWithLocale:(id)arg1;	// IMP=0x00000001001cccf8
- (id)stringByEnclosingInQuotes;	// IMP=0x00000001001ccc24
- (id)stringByTruncatingToLength:(unsigned long long)arg1 options:(unsigned long long)arg2 truncationString:(id)arg3;	// IMP=0x00000001001cca14
- (unsigned long long)tokenCountWithEnumerationOptions:(unsigned long long)arg1 maxTokenCount:(unsigned long long)arg2 outLimitLength:(unsigned long long *)arg3;	// IMP=0x00000001001cc8c8
- (id)stringByRemovingInsignificantPrefix;	// IMP=0x00000001001cc88c
- (struct _NSRange)rangeOfSignificantSubstring;	// IMP=0x00000001001cc644
- (id)dictionaryByDecomposingQueryStringWithURLDecode:(_Bool)arg1;	// IMP=0x00000001001cc3d0
- (id)iTunesSortString;	// IMP=0x00000001001cbe64
- (_Bool)isNotWhitespace;	// IMP=0x00000001001cbe44
- (_Bool)isWhitespace;	// IMP=0x00000001001cbdb8
- (_Bool)containsSubstring:(id)arg1;	// IMP=0x00000001001cbd8c
- (id)stringByStrippingHTML;	// IMP=0x00000001001cbbd0
- (id)stringByRemovingPercentEscapes;	// IMP=0x00000001001cbb90
- (id)stringWithPercentEscape;	// IMP=0x00000001001cbb4c
- (id)stringByConvertingNewlineCharacterSetToSpace;	// IMP=0x00000001001cba04
- (id)stringByConvertingControlCharactersToSpace;	// IMP=0x00000001001cb8bc
- (id)stringByRemovingURLFragment;	// IMP=0x00000001001cb84c
- (id)URLFragmentString;	// IMP=0x00000001001cb7ec
- (id)stringValue;	// IMP=0x00000001001cb7e8
- (id)im_stringByMemoryEfficientTrimmingCharactersInSet:(id)arg1;	// IMP=0x00000001001cb538

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
