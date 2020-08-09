//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSAttributedString, NSString;

@interface AMPLanguageAwareString : NSObject
{
    MISSING_TYPE *baseAttributedString;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_attributedString;	// 16 = 0x10
    MISSING_TYPE *cachedTextStorage;	// 24 = 0x18
    MISSING_TYPE *knownBaseWritingDirections;	// 32 = 0x20
    MISSING_TYPE *string;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_localizedLowercase;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_localizedUppercase;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_newlinesCollapsedToSpace;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_trimmed;	// 80 = 0x50
    MISSING_TYPE *numbers;	// 88 = 0x58
    MISSING_TYPE *paragraphs;	// 96 = 0x60
    MISSING_TYPE *words;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_fullRange;	// 112 = 0x70
    MISSING_TYPE *$__lazy_storage_$_isEmpty;	// 129 = 0x81
    MISSING_TYPE *$__lazy_storage_$_utf16Count;	// 136 = 0x88
    MISSING_TYPE *$__lazy_storage_$_utf32Count;	// 152 = 0x98
    MISSING_TYPE *$__lazy_storage_$_thresholdBaseWritingDirection;	// 168 = 0xa8
}

+ (id)AMPLanguageAwareStringEmpty;	// IMP=0x00000001001958d0
+ (void)setDelegate:(id)arg1;	// IMP=0x0000000100195700
+ (id)delegate;	// IMP=0x0000000100195620
+ (void)setAlwaysGenerateAttributedString:(_Bool)arg1;	// IMP=0x00000001001954e0
+ (_Bool)alwaysGenerateAttributedString;	// IMP=0x0000000100195458
- (void).cxx_destruct;	// IMP=0x00000001001974fc
- (id)init;	// IMP=0x0000000100197624
- (id)writingDirectionsQuantities;	// IMP=0x00000001001974e0
- (long long)writingDirectionOfLine:(long long)arg1 maximumLinesShown:(long long)arg2 withWidth:(double)arg3 lineBreakMode:(long long)arg4 cacheLayoutInfo:(_Bool)arg5;	// IMP=0x0000000100197454
@property(nonatomic) long long thresholdBaseWritingDirection;
- (long long)baseWritingDirectionForCharacterAtLocation:(long long)arg1;	// IMP=0x0000000100196c5c
- (id)initWithLanguageAwareString:(id)arg1 attributes:(id)arg2;	// IMP=0x0000000100195f34
- (id)initWithString:(id)arg1 baseParagraphStyle:(id)arg2 generateAttributedString:(_Bool)arg3;	// IMP=0x0000000100195d70
- (id)initWithString:(id)arg1 attributes:(id)arg2 baseParagraphStyle:(id)arg3;	// IMP=0x0000000100195ae4
- (id)initWithAttributedString:(id)arg1 baseParagraphStyle:(id)arg2;	// IMP=0x00000001001959ac
@property(nonatomic) long long utf32Length;
@property(nonatomic) long long length;
@property(nonatomic) _Bool isEmpty;
@property(nonatomic) struct _NSRange fullRange;
@property(nonatomic, readonly) NSArray *words;
@property(nonatomic, readonly) NSArray *paragraphs;
@property(nonatomic, readonly) NSArray *numbers;
@property(nonatomic, retain) AMPLanguageAwareString *trimmed;
@property(nonatomic, retain) AMPLanguageAwareString *newlinesCollapsedToSpace;
@property(nonatomic, retain) AMPLanguageAwareString *localizedUppercase;
@property(nonatomic, retain) AMPLanguageAwareString *localizedLowercase;
@property(nonatomic, readonly) NSString *string;
@property(nonatomic, retain) NSAttributedString *attributedString;

@end

