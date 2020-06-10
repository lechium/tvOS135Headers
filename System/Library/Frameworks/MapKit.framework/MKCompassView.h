/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface MKCompassView : UIView {

	UIImageView* _imageView;
	long long _compassViewSize;
	long long _compassViewStyle;

}

@property (assign,nonatomic) double mapHeading; 
@property (nonatomic,readonly) long long compassViewSize;               //@synthesize compassViewSize=_compassViewSize - In the implementation block
@property (nonatomic,readonly) long long compassViewStyle;              //@synthesize compassViewStyle=_compassViewStyle - In the implementation block
@property (assign,nonatomic) double yaw; 
+(id)_parameterForSize:(long long)arg1 ;
+(id)_parameterForStyle:(long long)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(double)yaw;
-(void)setYaw:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_commonInit;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setCompassViewSize:(long long)arg1 style:(long long)arg2 ;
-(void)setMapHeading:(double)arg1 ;
-(long long)compassViewSize;
-(long long)compassViewStyle;
-(void)_updateStyle;
-(void)updateLocale:(id)arg1 ;
-(void)_updateLayerForCurrentSizeAndStyle;
-(void)_adaptCompassStyleToUserInterfaceStyle;
-(double)mapHeading;
-(void)movedToWindow:(id)arg1 ;
-(BOOL)isPointInNorthEastHalf:(CGPoint)arg1 ;
@end
