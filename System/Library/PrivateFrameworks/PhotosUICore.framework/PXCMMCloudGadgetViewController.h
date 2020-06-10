/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXCMMCloudViewViewDelegate.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXCMMCloudGadgetViewControllerDelegate;
@class PXGadgetSpec, NSString, PXCMMCloudView;

@interface PXCMMCloudGadgetViewController : UIViewController <PXCMMCloudViewViewDelegate, PXGadget> {

	BOOL _isCPLOn;
	BOOL _hasContentToDisplay;
	long long _priority;
	id<PXCMMCloudGadgetViewControllerDelegate> _delegate;
	PXGadgetSpec* _gadgetSpec;
	NSString* _gadgetTitle;
	PXCMMCloudView* _cloudView;

}

@property (nonatomic,retain) PXCMMCloudView * cloudView;                                              //@synthesize cloudView=_cloudView - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMCloudGadgetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * gadgetTitle;                                                    //@synthesize gadgetTitle=_gadgetTitle - In the implementation block
@property (assign,nonatomic) BOOL disableDismissAction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                               //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (nonatomic,readonly) BOOL hasContentToDisplay;                                              //@synthesize hasContentToDisplay=_hasContentToDisplay - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
+(id)_userDefaults;
+(void)setDidDismissCloudGadget:(BOOL)arg1 ;
+(BOOL)didDismissCloudGadget;
-(id<PXCMMCloudGadgetViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PXCMMCloudGadgetViewControllerDelegate>)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSString *)localizedTitle;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id)initWithSourceType:(unsigned long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(id)contentViewController;
-(unsigned long long)gadgetType;
-(unsigned long long)gadgetCapabilities;
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(BOOL)hasContentToDisplay;
-(NSString *)gadgetTitle;
-(void)setGadgetTitle:(NSString *)arg1 ;
-(void)completeMyMomentCloudPhotoViewLearnMoreTapped:(id)arg1 ;
-(void)completeMyMomentCloudPhotoViewDismissTapped:(id)arg1 ;
-(void)setDisableDismissAction:(BOOL)arg1 ;
-(BOOL)disableDismissAction;
-(void)_updateCPLStatus;
-(void)_updateViewInsets;
-(PXCMMCloudView *)cloudView;
-(void)setCloudView:(PXCMMCloudView *)arg1 ;
@end

