/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSPersonNameComponentsStyleFormatter.h>

@class _NSPersonNameComponentsStyleFormatterShortVariantGeneral, _NSPersonNameComponentsStyleFormatter;

@interface _NSPersonNameComponentsStyleFormatterShort : _NSPersonNameComponentsStyleFormatter {

	long long _shortNameFormat;
	_NSPersonNameComponentsStyleFormatterShortVariantGeneral* _variantFormatter;
	_NSPersonNameComponentsStyleFormatter* _subFormatter;
	BOOL _forceShortNameEnabled;

}

@property (assign) long long shortNameFormat; 
@property (readonly) _NSPersonNameComponentsStyleFormatterShortVariantGeneral * variantFormatter; 
@property (retain) _NSPersonNameComponentsStyleFormatter * subFormatter; 
@property (assign) BOOL forceShortNameEnabled; 
-(void)dealloc;
-(id)keysOfInterest;
-(long long)shortNameFormat;
-(BOOL)isEnabled;
-(id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3 ;
-(id)fallbackStyleFormatter;
-(id)orderedKeysOfInterest;
-(id)abbreviatedKeys;
-(id)initWithMasterFormatter:(id)arg1 ;
-(_NSPersonNameComponentsStyleFormatterShortVariantGeneral *)variantFormatter;
-(_NSPersonNameComponentsStyleFormatter *)subFormatter;
-(void)setSubFormatter:(_NSPersonNameComponentsStyleFormatter *)arg1 ;
-(BOOL)forceShortNameEnabled;
-(void)setForceShortNameEnabled:(BOOL)arg1 ;
-(void)setShortNameFormat:(long long)arg1 ;
@end

