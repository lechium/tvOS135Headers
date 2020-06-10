/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIView, TintedView;

@interface LineGraphView : UIView {

	BOOL _showingTintedLine;
	UIImage* _lineImage;
	UIView* _tintedLineClipView;
	TintedView* _tintedLineView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShowingSelectedLine:(BOOL)arg1 ;
-(void)setGraphImageSet:(id)arg1 ;
-(void)resizeSelectedLineClipViewWithLeftX:(double)arg1 rightX:(double)arg2 ;
-(void)setSelectedLineImage:(id)arg1 ;
@end
