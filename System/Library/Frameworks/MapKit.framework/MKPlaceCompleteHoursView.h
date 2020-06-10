/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKPlaceHoursViewDelegate.h>

@class GEOLinkedService, NSArray, UIView, UIImageView, _MKUILabel, NSLayoutConstraint, NSString;

@interface MKPlaceCompleteHoursView : UIView <MKPlaceHoursViewDelegate> {

	GEOLinkedService* _linkedService;
	NSArray* _sortedBusinessHours;
	UIView* _containerViewForHoursAndCategoryName;
	UIImageView* _categoryIconView;
	_MKUILabel* _localizedCategoryNameLabel;
	NSLayoutConstraint* _hoursTopLabelBaselineToCategoryName;
	NSArray* _placeHoursViews;

}

@property (nonatomic,retain) NSArray * placeHoursViews;              //@synthesize placeHoursViews=_placeHoursViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)commonInit;
-(void)_contentSizeDidChange;
-(void)_setUpConstraints;
-(void)hoursViewDidUpdate:(id)arg1 ;
-(id)initWithLinkedService:(id)arg1 showTodaysHoursOnly:(BOOL)arg2 ;
-(NSArray *)placeHoursViews;
-(void)setPlaceHoursViews:(NSArray *)arg1 ;
@end

