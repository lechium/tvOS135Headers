/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXFooterViewModel.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXCMMFooterViewModelActionDelegate;
@class PXMomentShareStatusPresentation, NSString;

@interface PXCMMFooterViewModel : PXFooterViewModel <PXChangeObserver> {

	PXMomentShareStatusPresentation* _momentShareStatusPresentation;
	id<PXCMMFooterViewModelActionDelegate> _actionDelegate;

}

@property (assign,nonatomic,__weak) id<PXCMMFooterViewModelActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setActionDelegate:(id<PXCMMFooterViewModelActionDelegate>)arg1 ;
-(id<PXCMMFooterViewModelActionDelegate>)actionDelegate;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithMomentShareStatusPresentation:(id)arg1 ;
-(void)_updateAllProperties;
@end

