/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarStyleRequest.h>

@class UIColor, NSNumber;

@interface UIMutableStatusBarStyleRequest : UIStatusBarStyleRequest

@property (assign,nonatomic) long long style; 
@property (assign,nonatomic) long long legibilityStyle; 
@property (nonatomic,retain) UIColor * foregroundColor; 
@property (assign,nonatomic) double foregroundAlpha; 
@property (nonatomic,retain) NSNumber * overrideHeight; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)setForegroundAlpha:(double)arg1 ;
-(void)setLegibilityStyle:(long long)arg1 ;
-(void)setOverrideHeight:(NSNumber *)arg1 ;
@end

