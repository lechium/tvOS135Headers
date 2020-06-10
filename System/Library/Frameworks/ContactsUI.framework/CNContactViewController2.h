/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/CNContactPropertyModelDelegate.h>
#import <libobjc.A.dylib/CNContactPropertyRemoteModelDelegate.h>

@class CNContactViewHostViewController, UITableView, CNContactPropertyModel, NSArray, NSString;

@interface CNContactViewController2 : UIViewController <UITableViewDataSource, UITableViewDelegate, CNContactPropertyModelDelegate, CNContactPropertyRemoteModelDelegate> {

	BOOL _ignoreViewWillBePresented;
	CNContactViewHostViewController* _remoteHostViewController;
	UITableView* _tableView;
	CNContactPropertyModel* _model;

}

@property (nonatomic,retain) CNContactViewHostViewController * remoteHostViewController;              //@synthesize remoteHostViewController=_remoteHostViewController - In the implementation block
@property (retain) UITableView * tableView;                                                           //@synthesize tableView=_tableView - In the implementation block
@property (retain) CNContactPropertyModel * model;                                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) id displayedObject; 
@property (nonatomic,retain) NSArray * displayedProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CNContactPropertyModel *)model;
-(void)setModel:(CNContactPropertyModel *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)loadView;
-(void)pendingTransactions;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UITableView *)tableView;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)_prepareViewController;
-(BOOL)_isDelayingPresentation;
-(void)_endDelayingPresentation;
-(void)_setupViewController;
-(void)setDisplayedProperties:(NSArray *)arg1 ;
-(BOOL)outOfProcess;
-(NSArray *)displayedProperties;
-(id)displayedObject;
-(CNContactViewHostViewController *)remoteHostViewController;
-(void)setRemoteHostViewController:(CNContactViewHostViewController *)arg1 ;
-(void)pendingRemoteTransactions:(id)arg1 ;
-(void)setDisplayedObject:(id)arg1 ;
-(void)updatedTransactions:(id)arg1 ;
@end
