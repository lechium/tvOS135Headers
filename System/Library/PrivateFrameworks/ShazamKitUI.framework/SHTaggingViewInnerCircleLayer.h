/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ShazamKitUI.framework/ShazamKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShazamKitUI/ShazamKitUI-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer, CAShapeLayer;

@interface SHTaggingViewInnerCircleLayer : CALayer {

	CALayer* _circleContainerLayer;
	CAShapeLayer* _circle;

}

@property (nonatomic,retain) CAShapeLayer * circle;                       //@synthesize circle=_circle - In the implementation block
@property (nonatomic,retain) CALayer * circleContainerLayer;              //@synthesize circleContainerLayer=_circleContainerLayer - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSublayers;
-(void)setup;
-(CAShapeLayer *)circle;
-(void)setCircleContainerLayer:(CALayer *)arg1 ;
-(CALayer *)circleContainerLayer;
-(void)setCircle:(CAShapeLayer *)arg1 ;
-(id)circlePathForRect:(CGRect)arg1 ;
@end
