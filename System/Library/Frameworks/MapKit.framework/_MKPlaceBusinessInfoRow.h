/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class NSMutableArray, NSArray, UILayoutGuide;

@interface _MKPlaceBusinessInfoRow : MKPlaceSectionRowView {

	BOOL _needToRecalculateWidth;
	unsigned long long _numberOfColumns;
	NSMutableArray* _labels;
	NSArray* _constraints;
	UILayoutGuide* _leftColumnGuide;
	UILayoutGuide* _rightColumnGuide;
	double _width;
	NSArray* _items;

}

@property (nonatomic,retain) NSArray * items;              //@synthesize items=_items - In the implementation block
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_contentSizeDidChange;
-(void)infoCardThemeChanged;
-(void)_updateFontAndTextColor:(id)arg1 ;
-(void)_createConstraints;
@end

