/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSTextApplicationFrameworkContextClient.h>

@class CUICatalog, CUIStyleEffectConfiguration, __NSImmutableTextStorage, NSString;

@interface NSLineFragmentRenderingContext : NSObject <NSTextApplicationFrameworkContextClient> {

	void* _runs;
	long long _numRuns;
	unsigned short* _glyphs;
	CGSize* _advancements;
	double _leftSideDelta;
	double _lineWidth;
	double _leftControlWidth;
	double _rightControlWidth;
	double _elasticWidth;
	CGRect _imageBounds;
	struct {
		unsigned _isRTL : 1;
		unsigned _vAdvance : 1;
		unsigned _flipped : 1;
		unsigned _usesSimpleTextEffects : 1;
		unsigned _applicationFrameworkContext : 3;
		unsigned _reserved : 25;
	}  _flags;
	long long _resolvedDirection;
	long long _resolvedAlignment;
	CUICatalog* _catalog;
	CUIStyleEffectConfiguration* _styleEffects;
	__NSImmutableTextStorage* _textStorage;

}

@property (assign) long long resolvedTextAlignment;                                                                                   //@synthesize resolvedAlignment=_resolvedAlignment - In the implementation block
@property (assign) long long resolvedBaseWritingDirection;                                                                            //@synthesize resolvedDirection=_resolvedDirection - In the implementation block
@property (nonatomic,retain) CUICatalog * cuiCatalog;                                                                                 //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,retain) CUIStyleEffectConfiguration * cuiStyleEffects;                                                           //@synthesize styleEffects=_styleEffects - In the implementation block
@property (assign,setter=_setUsesSimpleTextEffects:,getter=_usesSimpleTextEffects,nonatomic) BOOL usesSimpleTextEffects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long applicationFrameworkContext; 
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)dealloc;
-(void)finalize;
-(long long)applicationFrameworkContext;
-(CUICatalog *)cuiCatalog;
-(BOOL)_usesSimpleTextEffects;
-(void)setApplicationFrameworkContext:(long long)arg1 ;
-(id)initWithTextStorage:(id)arg1 runs:(CFArrayRef)arg2 glyphOrigin:(double)arg3 lineFragmentWidth:(double)arg4 elasticWidth:(double)arg5 usesScreenFonts:(BOOL)arg6 isRTL:(BOOL)arg7 ;
-(void)_setUsesSimpleTextEffects:(BOOL)arg1 ;
-(void)drawAtPoint:(CGPoint)arg1 inContext:(CGContextRef)arg2 ;
-(CGSize)sizeWithBehavior:(long long)arg1 usesFontLeading:(BOOL)arg2 baselineDelta:(double*)arg3 ;
-(void)getMaximumAscender:(double*)arg1 minimumDescender:(double*)arg2 ;
-(double)lineFragmentWidth;
-(double)elasticWidth;
-(BOOL)isRTL;
-(CGRect)imageBounds;
-(long long)resolvedBaseWritingDirection;
-(void)setResolvedBaseWritingDirection:(long long)arg1 ;
-(long long)resolvedTextAlignment;
-(void)setResolvedTextAlignment:(long long)arg1 ;
-(void)setCuiCatalog:(CUICatalog *)arg1 ;
-(CUIStyleEffectConfiguration *)cuiStyleEffects;
-(void)setCuiStyleEffects:(CUIStyleEffectConfiguration *)arg1 ;
@end

