/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSString, NSArray, UINavigationController, UITableViewController, UIViewController;

@interface UIReferenceLibraryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate> {

	NSString* _term;
	NSArray* _definitionValues;
	UINavigationController* _baseNavController;
	UITableViewController* _multiDefViewController;
	UIViewController* _longDefViewController;
	long long _oldPopoverStyle;
	BOOL _enableRotation;
	BOOL _previousIgnoreOrientation;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,copy) id dismissCompletionHandler;              //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_backgroundColor;
+(id)_foregroundColor;
+(id)_colorAttributes;
+(id)_diddlyDoViewLineColor;
+(id)_defaultButtonImage;
+(id)_pressedButtonImage;
+(id)_localizedDictionaryTitleAttributes;
+(id)_dictionaryDefinitionAttributes;
+(BOOL)_shouldShowDefineForTerm:(id)arg1 ;
+(BOOL)_shouldShowDefineForTermOfLength:(long long)arg1 ;
+(BOOL)dictionaryHasDefinitionForTerm:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)_backgroundColor;
-(id)_foregroundColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewWillLayoutSubviews;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)shouldAutorotate;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(void)_setPopoverController:(id)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(id)_colorAttributes;
-(void)_dismissModalReferenceView:(id)arg1 ;
-(void)setEnableRotation:(BOOL)arg1 ;
-(void)pushDownloadManager:(id)arg1 ;
-(void)_searchWeb:(id)arg1 ;
-(void)_installDoneButtonOnViewControllerIfNeeded:(id)arg1 ;
-(void)_installRequiredElementsOnViewController:(id)arg1 ;
-(id)_diddlyDoViewLineColor;
-(id)_defaultButtonImage;
-(id)_pressedButtonImage;
-(id)_localizedDictionaryTitleAttributes;
-(id)_dictionaryDefinitionAttributes;
-(long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1 ;
-(void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2 ;
-(id)initWithTerm:(id)arg1 ;
-(BOOL)enableRotation;
@end

