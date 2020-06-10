/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIStyleEffectConfiguration.h>

@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {

	NSString* _backgroundType;
	BOOL _effectShowsValue;
	int _shouldRespectOutputBlending;

}

@property (nonatomic,copy) NSString * backgroundType;              //@synthesize backgroundType=_backgroundType - In the implementation block
@property (assign,nonatomic) BOOL effectShowsValue;                //@synthesize effectShowsValue=_effectShowsValue - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(BOOL)shouldIgnoreForegroundColor;
-(NSString *)backgroundType;
-(BOOL)shouldRespectOutputBlending;
-(BOOL)effectShowsValue;
-(void)setShouldRespectOutputBlending:(BOOL)arg1 ;
-(void)setSelectionType:(long long)arg1 ;
-(void)setBackgroundType:(NSString *)arg1 ;
-(void)setEffectShowsValue:(BOOL)arg1 ;
@end
