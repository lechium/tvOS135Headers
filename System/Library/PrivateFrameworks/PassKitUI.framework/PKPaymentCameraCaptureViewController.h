/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecognition/CRCameraReader.h>
#import <libobjc.A.dylib/CRCameraReaderDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupHideSetupLaterButtonProtocol.h>

@protocol PKPaymentCameraCaptureViewControllerDelegate, PKPaymentSetupViewControllerDelegate;
@class NSArray, PKPaymentCardManualEntryViewController, PKPaymentSetupBrowseProductsViewController, UIView, PKCameraCaptureInstructionView, NSString;

@interface PKPaymentCameraCaptureViewController : CRCameraReader <CRCameraReaderDelegate, PKPaymentSetupHideSetupLaterButtonProtocol> {

	NSArray* _outputObjects;
	PKPaymentCardManualEntryViewController* _manualEntryController;
	PKPaymentSetupBrowseProductsViewController* _browseCardsController;
	id<PKPaymentCameraCaptureViewControllerDelegate> _cameraCaptureDelegate;
	long long _context;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	UIView* _cameraView;
	UIView* _cameraInstructionContainerView;
	PKCameraCaptureInstructionView* _cameraInstructionView;
	unsigned long long _cameraCaptureStartTime;
	BOOL _hideSetupLaterButton;

}

@property (assign,nonatomic) BOOL hideSetupLaterButton;              //@synthesize hideSetupLaterButton=_hideSetupLaterButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 ;
-(BOOL)hideSetupLaterButton;
-(void)setHideSetupLaterButton:(BOOL)arg1 ;
-(void)_setupLater:(id)arg1 ;
-(id)initWithCameraCaptureDelegate:(id)arg1 ;
-(void)_manualEntryButtonPressed:(id)arg1 ;
-(void)_pushManualEntryViewController;
@end

