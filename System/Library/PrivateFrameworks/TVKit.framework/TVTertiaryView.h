/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface TVTertiaryView : UIView {

	NSArray* _tertiaryViews;
	double _viewSpacing;

}

@property (nonatomic,retain) NSArray * tertiaryViews;                  //@synthesize tertiaryViews=_tertiaryViews - In the implementation block
@property (nonatomic,readonly) double maximumLabelBasedY; 
@property (nonatomic,readonly) double labelHeight; 
@property (assign,nonatomic) double viewSpacing;                       //@synthesize viewSpacing=_viewSpacing - In the implementation block
+(id)defaultSeperator;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlightProgress:(double)arg1 ;
-(void)setViewSpacing:(double)arg1 ;
-(void)setTertiaryViews:(NSArray *)arg1 ;
-(NSArray *)tertiaryViews;
-(double)maximumLabelBasedY;
-(double)labelHeight;
-(double)viewSpacing;
-(void)updateSubviewHighlights;
@end

