/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, NSShadow, NSNumber;

@interface VUITextLayout : NSObject <NSCopying> {

	BOOL _shouldUpdateTextColor;
	BOOL _shouldAllowParagraphHyphenation;
	BOOL _alwaysFocusable;
	unsigned _fontTraits;
	int _blendMode;
	long long _textStyle;
	NSString* _maximumContentSizeCategory;
	NSString* _fontFamily;
	long long _fontWeight;
	double _fontSize;
	long long _fontFeature;
	UIColor* _color;
	UIColor* _darkColor;
	UIColor* _highlightOrSelectedColor;
	UIColor* _darkHighlightOrSelectedColor;
	UIColor* _seeMoreTextColor;
	UIColor* _darkSeeMoreTextColor;
	NSString* _compositingFilter;
	NSString* _darkCompositingFilter;
	long long _textTransform;
	long long _alignment;
	unsigned long long _numberOfLines;
	unsigned long long _numberOfLinesAXSmall;
	unsigned long long _numberOfLinesAXLarge;
	double _minimumScaleFactor;
	NSShadow* _shadow;
	NSNumber* _letterSpacing;
	long long _lineBreakMode;
	UIEdgeInsets _margin;

}

@property (assign,nonatomic) long long textStyle;                                  //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) NSString * maximumContentSizeCategory;                //@synthesize maximumContentSizeCategory=_maximumContentSizeCategory - In the implementation block
@property (nonatomic,retain) NSString * fontFamily;                                //@synthesize fontFamily=_fontFamily - In the implementation block
@property (assign,nonatomic) long long fontWeight;                                 //@synthesize fontWeight=_fontWeight - In the implementation block
@property (assign,nonatomic) double fontSize;                                      //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) unsigned fontTraits;                                  //@synthesize fontTraits=_fontTraits - In the implementation block
@property (assign,nonatomic) long long fontFeature;                                //@synthesize fontFeature=_fontFeature - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margin;                                  //@synthesize margin=_margin - In the implementation block
@property (nonatomic,retain) UIColor * color;                                      //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIColor * darkColor;                                  //@synthesize darkColor=_darkColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightOrSelectedColor;                   //@synthesize highlightOrSelectedColor=_highlightOrSelectedColor - In the implementation block
@property (nonatomic,retain) UIColor * darkHighlightOrSelectedColor;               //@synthesize darkHighlightOrSelectedColor=_darkHighlightOrSelectedColor - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateTextColor;                           //@synthesize shouldUpdateTextColor=_shouldUpdateTextColor - In the implementation block
@property (nonatomic,retain) UIColor * seeMoreTextColor;                           //@synthesize seeMoreTextColor=_seeMoreTextColor - In the implementation block
@property (nonatomic,retain) UIColor * darkSeeMoreTextColor;                       //@synthesize darkSeeMoreTextColor=_darkSeeMoreTextColor - In the implementation block
@property (nonatomic,retain) NSString * compositingFilter;                         //@synthesize compositingFilter=_compositingFilter - In the implementation block
@property (nonatomic,retain) NSString * darkCompositingFilter;                     //@synthesize darkCompositingFilter=_darkCompositingFilter - In the implementation block
@property (assign,nonatomic) long long textTransform;                              //@synthesize textTransform=_textTransform - In the implementation block
@property (assign,nonatomic) long long alignment;                                  //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLines;                     //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLinesAXSmall;              //@synthesize numberOfLinesAXSmall=_numberOfLinesAXSmall - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLinesAXLarge;              //@synthesize numberOfLinesAXLarge=_numberOfLinesAXLarge - In the implementation block
@property (assign,nonatomic) double minimumScaleFactor;                            //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
@property (nonatomic,retain) NSShadow * shadow;                                    //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,retain) NSNumber * letterSpacing;                             //@synthesize letterSpacing=_letterSpacing - In the implementation block
@property (assign,nonatomic) long long lineBreakMode;                              //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowParagraphHyphenation;                 //@synthesize shouldAllowParagraphHyphenation=_shouldAllowParagraphHyphenation - In the implementation block
@property (assign,nonatomic) int blendMode;                                        //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) BOOL alwaysFocusable;                                 //@synthesize alwaysFocusable=_alwaysFocusable - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)compositingFilter;
-(void)setCompositingFilter:(NSString *)arg1 ;
-(NSShadow *)shadow;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(NSString *)fontFamily;
-(void)setFontFamily:(NSString *)arg1 ;
-(long long)fontWeight;
-(void)setFontWeight:(long long)arg1 ;
-(NSNumber *)letterSpacing;
-(void)setLetterSpacing:(NSNumber *)arg1 ;
-(UIEdgeInsets)margin;
-(void)setMargin:(UIEdgeInsets)arg1 ;
-(long long)textTransform;
-(void)setTextTransform:(long long)arg1 ;
-(double)minimumScaleFactor;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(void)setTextStyle:(long long)arg1 ;
-(long long)textStyle;
-(unsigned long long)numberOfLines;
-(void)setShadow:(NSShadow *)arg1 ;
-(void)setAlwaysFocusable:(BOOL)arg1 ;
-(void)setMaximumContentSizeCategory:(NSString *)arg1 ;
-(void)setColorWithOpacityType:(long long)arg1 ;
-(void)setNumberOfLinesAXSmall:(unsigned long long)arg1 ;
-(void)setNumberOfLinesAXLarge:(unsigned long long)arg1 ;
-(void)setDarkCompositingFilter:(NSString *)arg1 ;
-(void)setDarkColor:(UIColor *)arg1 ;
-(void)setSeeMoreTextColor:(UIColor *)arg1 ;
-(UIColor *)darkColor;
-(void)setDarkSeeMoreTextColor:(UIColor *)arg1 ;
-(void)setFontTraits:(unsigned)arg1 ;
-(void)setFontFeature:(long long)arg1 ;
-(void)setHighlightOrSelectedColor:(UIColor *)arg1 ;
-(void)setDarkHighlightOrSelectedColor:(UIColor *)arg1 ;
-(void)setShouldAllowParagraphHyphenation:(BOOL)arg1 ;
-(void)setShouldUpdateTextColor:(BOOL)arg1 ;
-(id)_defaultParagraphStyle;
-(id)attributedStringWithString:(id)arg1 view:(id)arg2 ;
-(id)attributedStringWithAttributedString:(id)arg1 view:(id)arg2 updateTextColor:(BOOL)arg3 ;
-(unsigned long long)numberOfLinesAXSmall;
-(unsigned long long)numberOfLinesAXLarge;
-(id)defaultAttributesForLabel:(id)arg1 ;
-(id)attributedStringWithString:(id)arg1 ;
-(unsigned long long)numberOfLinesForTraitCollection:(id)arg1 ;
-(NSString *)maximumContentSizeCategory;
-(unsigned)fontTraits;
-(long long)fontFeature;
-(UIColor *)highlightOrSelectedColor;
-(UIColor *)darkHighlightOrSelectedColor;
-(BOOL)shouldUpdateTextColor;
-(UIColor *)seeMoreTextColor;
-(UIColor *)darkSeeMoreTextColor;
-(NSString *)darkCompositingFilter;
-(BOOL)shouldAllowParagraphHyphenation;
-(BOOL)alwaysFocusable;
@end

