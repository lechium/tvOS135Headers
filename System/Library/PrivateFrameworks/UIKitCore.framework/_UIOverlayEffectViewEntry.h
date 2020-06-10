/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class NSString, UIColor, UIImage;

@interface _UIOverlayEffectViewEntry : _UIVisualEffectViewEntry {

	NSString* _filterType;
	UIColor* _color;
	UIImage* _image;
	double _alpha;

}

@property (nonatomic,copy) NSString * filterType;              //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,copy) UIColor * color;                    //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImage * image;                  //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) double alpha;                     //@synthesize alpha=_alpha - In the implementation block
+(id)newEntryWithFilterType:(id)arg1 image:(id)arg2 alpha:(double)arg3 ;
+(id)newEntryWithFilterType:(id)arg1 color:(id)arg2 alpha:(double)arg3 ;
-(id)description;
-(double)alpha;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(UIImage *)image;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(void)addEffectToView:(id)arg1 ;
@end

