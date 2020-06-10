/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOAutomobileOptions, GEOTransitOptions;


@protocol _MKInfoCardController <NSObject>
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions; 
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollViewDelegate; 
@property (assign,nonatomic) double contentAlpha; 
@required
+(double)headerHeightInMinimalMode;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(void)setAutomobileOptions:(id)arg1;
-(void)setTransitOptions:(id)arg1;
-(double)contentAlpha;
-(void)setContentAlpha:(double)arg1;
-(void)hideTitle:(BOOL)arg1;
-(void)updateMaskAlpha:(double)arg1 onHeight:(double)arg2 withOffset:(double)arg3;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id)arg1;

@end

