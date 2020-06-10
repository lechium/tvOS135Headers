/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/BTLEConnectionTable.h>

@class NSMutableArray, AMSBTLEConnectionManager, UIActivityIndicatorView, NSTimer, UIBarButtonItem, NSString;

@interface CABTMIDICentralViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, BTLEConnectionTable> {

	NSMutableArray* peripheralList;
	AMSBTLEConnectionManager* connectionManager;
	UIActivityIndicatorView* indicator;
	BOOL didCleanup;
	BOOL inEditingMode;
	NSTimer* connectionTimer;
	UIBarButtonItem* previousLeftItem;
	UIBarButtonItem* previousRightItem;
	UIBarButtonItem* editButton;
	UIBarButtonItem* cancelButton;
	UIBarButtonItem* forgetButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cleanup;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)title;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)updatePeripheralTable;
-(void)setUIEnabled:(BOOL)arg1 ;
-(void)updateButtonsToMatchTableState;
-(unsigned long long)peripheralCount;
-(id)peripheralAtIndex:(unsigned long long)arg1 ;
-(void)centralTimerFired:(id)arg1 ;
-(void)cancelAction:(id)arg1 ;
-(void)forgetAction:(id)arg1 ;
-(void)editAction:(id)arg1 ;
@end

