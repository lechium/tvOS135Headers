/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <libobjc.A.dylib/_NUIBoxArrangementContainer.h>

@protocol NUIArrangementContainer, NUIBoxArrangementDataSource;
@class NSString;

@interface NUIBoxArrangement : NSObject <_NUIBoxArrangementContainer> {

	NUIBoxArrangement* _arrangement;
	id<NUIArrangementContainer> _container;
	id<NUIBoxArrangementDataSource> _dataSource;
	struct {
		unsigned containerDirection : 1;
	}  _flags;
	double _scale;
	CGRect _bounds;

}

@property (nonatomic,__weak,readonly) id<NUIArrangementContainer> container; 
@property (nonatomic,__weak,readonly) id<NUIBoxArrangementDataSource> dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<NUIArrangementContainer>)container;
-(id<NUIBoxArrangementDataSource>)dataSource;
-(void)reloadData;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(CGSize)contentLayoutSizeFittingSize:(CGSize)arg1 forArrangedSubview:(id)arg2 ;
-(CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(CGRect)arg2 ;
-(BOOL)isBaselineRelativeArrangement;
-(void)_cacheDisplayScaleIfNeeded;
-(void)populateBoxArrangementCells:(vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell> >*)arg1 ;
-(id)initWithContainer:(id)arg1 dataSource:(id)arg2 ;
-(CGSize)layoutSizeFittingSize:(CGSize)arg1 ;
-(void)positionItemsInBounds:(CGRect)arg1 block:(/*^block*/id)arg2 ;
@end

