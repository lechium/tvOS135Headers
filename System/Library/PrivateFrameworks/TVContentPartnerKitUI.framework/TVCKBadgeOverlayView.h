/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, TVCKBadgeView;

@interface TVCKBadgeOverlayView : UIView {

	NSString* _badgeValue;
	double _maximumBadgeWidth;
	TVCKBadgeView* _badgeView;

}

@property (nonatomic,retain) TVCKBadgeView * badgeView;              //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,copy) NSString * badgeValue;                    //@synthesize badgeValue=_badgeValue - In the implementation block
@property (assign,nonatomic) double maximumBadgeWidth;               //@synthesize maximumBadgeWidth=_maximumBadgeWidth - In the implementation block
-(NSString *)badgeValue;
-(void)setBadgeValue:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(TVCKBadgeView *)badgeView;
-(void)setBadgeView:(TVCKBadgeView *)arg1 ;
-(double)maximumBadgeWidth;
-(void)setMaximumBadgeWidth:(double)arg1 ;
@end

