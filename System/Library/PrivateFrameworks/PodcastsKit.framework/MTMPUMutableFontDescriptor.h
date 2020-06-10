/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/PodcastsKit-Structs.h>
#import <PodcastsKit/MTMPUFontDescriptor.h>

@interface MTMPUMutableFontDescriptor : MTMPUFontDescriptor

@property (assign,nonatomic) long long textStyle; 
@property (assign,nonatomic) double systemFontSize; 
@property (assign,nonatomic) long long weight; 
@property (assign,nonatomic) long long leadingAdjustment; 
@property (assign,nonatomic) double defaultPointSizeAdjustment; 
@property (assign,nonatomic) BOOL usesItalic; 
@property (assign,nonatomic) BOOL usesCondensedMetrics; 
@property (assign,nonatomic) BOOL wantsMonospaceNumbers; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWeight:(long long)arg1 ;
-(void)setTextStyle:(long long)arg1 ;
-(void)setLeadingAdjustment:(long long)arg1 ;
-(void)setSystemFontSize:(double)arg1 ;
-(void)setDefaultPointSizeAdjustment:(double)arg1 ;
-(void)_resetToDefaultValues;
-(id)_copyAllowingGlobalCacheLookup:(BOOL)arg1 ;
-(void)setUsesItalic:(BOOL)arg1 ;
-(void)setUsesCondensedMetrics:(BOOL)arg1 ;
-(void)setWantsMonospaceNumbers:(BOOL)arg1 ;
@end

