/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKitCore/_UIKeyboardAutoRespondingScrollViewController.h>
#import <UIKit/UITableViewFocusDelegateLegacy.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UIAutoRespondingScrollViewControllerKeyboardSupport, UITableViewDataSource, _UIFilteredDataSource, UITableView, UIRefreshControl, NSString;

@interface UITableViewController : UIViewController <_UIKeyboardAutoRespondingScrollViewController, UITableViewFocusDelegateLegacy, UITableViewDelegate, UITableViewDataSource> {

	long long _tableViewStyle;
	UIAutoRespondingScrollViewControllerKeyboardSupport* _keyboardSupport;
	UITableViewDataSource* _staticDataSource;
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned insetsApplied : 1;
		unsigned adjustingInsets : 1;
	}  _tableViewControllerFlags;
	_UIFilteredDataSource* _filteredDataSource;
	long long _filteredDataType;

}

@property (setter=_setStaticDataSource:,getter=_staticDataSource,nonatomic,retain) UITableViewDataSource * staticDataSource; 
@property (nonatomic,retain) UITableView * tableView; 
@property (assign,nonatomic) BOOL clearsSelectionOnViewWillAppear; 
@property (nonatomic,retain) UIRefreshControl * refreshControl; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_scrollView,nonatomic,retain,readonly) UIScrollView*<_UIKeyboardAutoRespondingScrollView> scrollView; 
-(void)_cnui_updateAccountsRefreshControl;
-(void)_cnui_beginRefreshingWithDuration:(double)arg1 ;
-(void)refreshAccountsNow:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)_scrollView;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(UITableView *)tableView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setClearsSelectionOnViewWillAppear:(BOOL)arg1 ;
-(BOOL)clearsSelectionOnViewWillAppear;
-(UIRefreshControl *)refreshControl;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(BOOL)_viewControllerWasSelected;
-(id)_existingTableView;
-(void)_applyDefaultDataSourceToTable:(id)arg1 ;
-(void)_refreshFilteredDataSourceFilterTypeForScreen:(id)arg1 ;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(long long)_resolvedDataSourceFilterTypeForScreen:(id)arg1 ;
-(void)_limitedUIDidChange;
-(long long)_filteredDataType;
-(void)_setFilteredDataType:(long long)arg1 ;
-(id)_staticDataSource;
-(void)_setStaticDataSource:(id)arg1 ;
@end

