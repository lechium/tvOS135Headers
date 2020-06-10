/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CUIRenditionKey : NSObject <NSCopying, NSCoding> {

	renditionkeytoken _stackKey[22];
	renditionkeytoken* _key;
	unsigned short _highwaterKeyCount;

}

@property (assign,nonatomic) long long themeElement; 
@property (assign,nonatomic) long long themePart; 
@property (assign,nonatomic) long long themeSize; 
@property (assign,nonatomic) long long themeDirection; 
@property (assign,nonatomic) long long themeValue; 
@property (assign,nonatomic) long long themePreviousValue; 
@property (assign,nonatomic) long long themeDimension1; 
@property (assign,nonatomic) long long themeDimension2; 
@property (assign,nonatomic) long long themeState; 
@property (assign,nonatomic) long long themePreviousState; 
@property (assign,nonatomic) long long themePresentationState; 
@property (assign,nonatomic) long long themeLayer; 
@property (assign,nonatomic) long long themeScale; 
@property (assign,nonatomic) long long themeIdiom; 
@property (assign,nonatomic) long long themeSubtype; 
@property (assign,nonatomic) long long themeSizeClassHorizontal; 
@property (assign,nonatomic) long long themeSizeClassVertical; 
@property (assign,nonatomic) long long themeMemoryClass; 
@property (assign,nonatomic) long long themeGraphicsClass; 
@property (assign,nonatomic) long long themeIdentifier; 
@property (assign,nonatomic) long long themeAppearance; 
@property (assign,nonatomic) long long themeLocalization; 
@property (assign,nonatomic) long long themeDisplayGamut; 
@property (assign,nonatomic) long long themeDeploymentTarget; 
@property (assign,nonatomic) long long themeGlyphSize; 
@property (assign,nonatomic) long long themeGlyphWeight; 
+(void)initialize;
+(id)renditionKey;
+(id)renditionKeyWithKeyList:(const renditionkeytoken*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const renditionkeytoken*)keyList;
-(void)setThemeDimension2:(long long)arg1 ;
-(void)setThemeAppearance:(long long)arg1 ;
-(void)setThemeGlyphSize:(long long)arg1 ;
-(void)setThemeGlyphWeight:(long long)arg1 ;
-(long long)themeGlyphSize;
-(long long)themeGlyphWeight;
-(long long)themeIdentifier;
-(long long)themeDisplayGamut;
-(long long)themeScale;
-(long long)themeIdiom;
-(long long)themeSubtype;
-(long long)themeDirection;
-(long long)themeSizeClassHorizontal;
-(long long)themeSizeClassVertical;
-(long long)themeMemoryClass;
-(long long)themeGraphicsClass;
-(void)setThemeDimension1:(long long)arg1 ;
-(id)initWithKeyList:(const renditionkeytoken*)arg1 ;
-(long long)themeDimension2;
-(void)setThemeScale:(long long)arg1 ;
-(void)setThemeLayer:(long long)arg1 ;
-(long long)themeLayer;
-(void)copyValuesFromKeyList:(const renditionkeytoken*)arg1 ;
-(void)setValuesFromKeyList:(const renditionkeytoken*)arg1 ;
-(long long)themeState;
-(long long)themeValue;
-(long long)themeSize;
-(void)setThemeSize:(long long)arg1 ;
-(void)setThemeState:(long long)arg1 ;
-(void)setThemeValue:(long long)arg1 ;
-(void)_expandKeyIfNecessaryForCount:(long long)arg1 ;
-(long long)themeElement;
-(long long)themePart;
-(long long)themeDimension1;
-(long long)themeDeploymentTarget;
-(long long)themeAppearance;
-(long long)themeLocalization;
-(id)nameOfAttributeName:(int)arg1 ;
-(void)removeValueForKeyTokenIdentifier:(long long)arg1 ;
-(id)initWithThemeElement:(long long)arg1 themePart:(long long)arg2 themeSize:(long long)arg3 themeDirection:(long long)arg4 themeValue:(long long)arg5 themeDimension1:(long long)arg6 themeDimension2:(long long)arg7 themeState:(long long)arg8 themePresentationState:(long long)arg9 themeLayer:(long long)arg10 themeScale:(long long)arg11 themeIdentifier:(long long)arg12 ;
-(void)setThemeElement:(long long)arg1 ;
-(void)setThemePart:(long long)arg1 ;
-(void)setThemeDirection:(long long)arg1 ;
-(void)setThemePreviousValue:(long long)arg1 ;
-(long long)themePreviousValue;
-(void)setThemePreviousState:(long long)arg1 ;
-(long long)themePreviousState;
-(void)setThemePresentationState:(long long)arg1 ;
-(long long)themePresentationState;
-(void)setThemeIdiom:(long long)arg1 ;
-(void)setThemeSubtype:(long long)arg1 ;
-(void)setThemeSizeClassHorizontal:(long long)arg1 ;
-(void)setThemeSizeClassVertical:(long long)arg1 ;
-(void)setThemeMemoryClass:(long long)arg1 ;
-(void)setThemeGraphicsClass:(long long)arg1 ;
-(void)setThemeIdentifier:(long long)arg1 ;
-(void)setThemeLocalization:(long long)arg1 ;
-(void)setThemeDisplayGamut:(long long)arg1 ;
-(void)setThemeDeploymentTarget:(long long)arg1 ;
-(id)descriptionBasedOnKeyFormat:(const renditionkeyfmt*)arg1 ;
@end

