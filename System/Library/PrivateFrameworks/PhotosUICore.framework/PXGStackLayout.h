/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>
#import <libobjc.A.dylib/PXGDataSourceDrivenLayout.h>

@class NSString;

@interface PXGStackLayout : PXGLayout <PXGDataSourceDrivenLayout> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _isUpdatingSublayouts;
	CGPoint* _sublayoutOriginsBeforeUpdate;
	long long _axis;
	double _interlayoutSpacing;
	UIEdgeInsets _padding;
	UIEdgeInsets _faultInOutsets;
	UIEdgeInsets _faultOutOutsets;

}

@property (assign,nonatomic) UIEdgeInsets faultInOutsets;               //@synthesize faultInOutsets=_faultInOutsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets faultOutOutsets;              //@synthesize faultOutOutsets=_faultOutOutsets - In the implementation block
@property (assign,nonatomic) long long axis;                            //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) double interlayoutSpacing;                 //@synthesize interlayoutSpacing=_interlayoutSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                      //@synthesize padding=_padding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)update;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(long long)axis;
-(void)setAxis:(long long)arg1 ;
-(void)visibleRectDidChange;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)viewEnvironmentDidChange;
-(void)sublayoutNeedsUpdate:(id)arg1 ;
-(void)sublayoutDidChangeContentSize:(id)arg1 ;
-(void)sublayoutDidChangeLastBaseline:(id)arg1 ;
-(void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(double)interlayoutSpacing;
-(void)setInterlayoutSpacing:(double)arg1 ;
-(void)insertSublayoutProvider:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_updateSublayouts;
-(void)_invalidateEstimatedSublayoutContentSizes;
-(void)_updateInterlayoutSpacing;
-(void)setFaultInOutsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)faultInOutsets;
-(UIEdgeInsets)faultOutOutsets;
-(void)setFaultOutOutsets:(UIEdgeInsets)arg1 ;
@end

