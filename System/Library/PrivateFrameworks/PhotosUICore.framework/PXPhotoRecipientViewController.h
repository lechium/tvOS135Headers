/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXSearchRecipientControllerDelegate.h>
#import <libobjc.A.dylib/PXComposeRecipientViewDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@protocol PXPhotoRecipientViewControllerDelegate;
@class NSLayoutConstraint, UIBarButtonItem, NSString, CNContactPickerViewController, PXSearchRecipientController, PXRecipientSearchDataSourceManager, PXComposeRecipientView, NSArray;

@interface PXPhotoRecipientViewController : UIViewController <PXSearchRecipientControllerDelegate, PXComposeRecipientViewDelegate, UIPopoverPresentationControllerDelegate, CNContactPickerDelegate> {

	NSLayoutConstraint* _recipientViewHeightConstraint;
	UIBarButtonItem* _addButton;
	id<PXPhotoRecipientViewControllerDelegate> _delegate;
	NSString* _fieldLabel;
	long long _maxRecipients;
	NSString* _initialLocalizedNameToQuery;
	CNContactPickerViewController* _contactPickerViewController;
	PXSearchRecipientController* _searchRecipientController;
	PXRecipientSearchDataSourceManager* _searchDataSourceManager;
	PXComposeRecipientView* _composeRecipientView;
	NSArray* _layoutConstraints;

}

@property (nonatomic,retain) NSString * initialLocalizedNameToQuery;                                      //@synthesize initialLocalizedNameToQuery=_initialLocalizedNameToQuery - In the implementation block
@property (nonatomic,retain) CNContactPickerViewController * contactPickerViewController;                 //@synthesize contactPickerViewController=_contactPickerViewController - In the implementation block
@property (nonatomic,retain) PXSearchRecipientController * searchRecipientController;                     //@synthesize searchRecipientController=_searchRecipientController - In the implementation block
@property (nonatomic,readonly) PXRecipientSearchDataSourceManager * searchDataSourceManager;              //@synthesize searchDataSourceManager=_searchDataSourceManager - In the implementation block
@property (nonatomic,retain) PXComposeRecipientView * composeRecipientView;                               //@synthesize composeRecipientView=_composeRecipientView - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                                 //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotoRecipientViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * fieldLabel;                                                         //@synthesize fieldLabel=_fieldLabel - In the implementation block
@property (assign,nonatomic) long long maxRecipients;                                                     //@synthesize maxRecipients=_maxRecipients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id<PXPhotoRecipientViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PXPhotoRecipientViewControllerDelegate>)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)_commonInitialization;
-(NSString *)fieldLabel;
-(void)setFieldLabel:(NSString *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)updateViewConstraints;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(PXRecipientSearchDataSourceManager *)searchDataSourceManager;
-(long long)maxRecipients;
-(void)setMaxRecipients:(long long)arg1 ;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)searchRecipientController:(id)arg1 didSelectRecipient:(id)arg2 ;
-(id)initWithInitialLocalizedNameToQuery:(id)arg1 ;
-(void)_presentContactPickerViewController:(id)arg1 ;
-(void)_dismissContactPickerViewController;
-(void)_handleCancelButton:(id)arg1 ;
-(void)_handleDoneButton:(id)arg1 ;
-(void)_updateAddButton;
-(void)_contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(NSString *)initialLocalizedNameToQuery;
-(void)setInitialLocalizedNameToQuery:(NSString *)arg1 ;
-(CNContactPickerViewController *)contactPickerViewController;
-(void)setContactPickerViewController:(CNContactPickerViewController *)arg1 ;
-(PXSearchRecipientController *)searchRecipientController;
-(void)setSearchRecipientController:(PXSearchRecipientController *)arg1 ;
-(PXComposeRecipientView *)composeRecipientView;
-(void)setComposeRecipientView:(PXComposeRecipientView *)arg1 ;
@end

