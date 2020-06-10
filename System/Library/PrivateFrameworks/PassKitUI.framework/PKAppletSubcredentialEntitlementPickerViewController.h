/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <libobjc.A.dylib/PKSubcredentialMessageComposeViewControllerDelegate.h>

@class PKPaymentPass, PKSharedCredentialsGroupController, PKAppletSubcredentialSharingRequest, NSArray, PKSubcredentialMessageComposeViewController, NSString;

@interface PKAppletSubcredentialEntitlementPickerViewController : PKPaymentSetupTableViewController <PKSubcredentialMessageComposeViewControllerDelegate> {

	PKPaymentPass* _pass;
	PKSharedCredentialsGroupController* _groupController;
	PKAppletSubcredentialSharingRequest* _sharingRequest;
	NSArray* _supportedEntitlements;
	long long _selectedEntitlementIndex;
	BOOL _isSharing;
	PKSubcredentialMessageComposeViewController* _messageComposeViewController;

}

@property (nonatomic,retain) PKSubcredentialMessageComposeViewController * messageComposeViewController;              //@synthesize messageComposeViewController=_messageComposeViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)handleSharedButton;
-(void)messageComposeViewControllerDidFinishWithResult:(BOOL)arg1 ;
-(id)initWithSharedCredentialsGroupController:(id)arg1 sharingRequest:(id)arg2 ;
-(PKSubcredentialMessageComposeViewController *)messageComposeViewController;
-(void)setMessageComposeViewController:(PKSubcredentialMessageComposeViewController *)arg1 ;
@end
