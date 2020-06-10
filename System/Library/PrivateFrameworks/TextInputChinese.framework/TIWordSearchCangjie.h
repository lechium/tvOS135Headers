/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputChinese/TIWordSearchShapeBased.h>

@interface TIWordSearchCangjie : TIWordSearchShapeBased {

	BOOL _suchengEnabled;
	BOOL _supportsEnglish;

}

@property (assign) BOOL suchengEnabled;               //@synthesize suchengEnabled=_suchengEnabled - In the implementation block
@property (assign) BOOL supportsEnglish;              //@synthesize supportsEnglish=_supportsEnglish - In the implementation block
-(int)mecabraInputMethodType;
-(id)initTIWordSearchWithInputMode:(id)arg1 ;
-(id)uncachedCandidatesForOperation:(id)arg1 ;
-(BOOL)validateCode:(id)arg1 withOption:(unsigned long long)arg2 ;
-(BOOL)suchengEnabled;
-(void)setSuchengEnabled:(BOOL)arg1 ;
-(BOOL)supportsEnglish;
-(void)setSupportsEnglish:(BOOL)arg1 ;
@end

