/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BSUIFontProvider : NSObject {

	BOOL _isDefault;

}
+(id)preferredFontProvider;
+(id)defaultFontProvider;
-(id)initForProvidingDefaultFonts:(BOOL)arg1 ;
-(id)preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2 ;
-(id)preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2 contentSizeCategory:(id)arg3 ;
@end

