/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@protocol WFKnownNetworksViewControllerDelegate;
@class NSMutableArray;

@interface WFKnownNetworksViewController : UITableViewController {

	id<WFKnownNetworksViewControllerDelegate> _knownNetworksDelegate;
	NSMutableArray* _knownNetworksArray;

}

@property (nonatomic,retain) NSMutableArray * knownNetworksArray;                                                 //@synthesize knownNetworksArray=_knownNetworksArray - In the implementation block
@property (assign,nonatomic,__weak) id<WFKnownNetworksViewControllerDelegate> knownNetworksDelegate;              //@synthesize knownNetworksDelegate=_knownNetworksDelegate - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id<WFKnownNetworksViewControllerDelegate>)knownNetworksDelegate;
-(void)setKnownNetworksArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)knownNetworksArray;
-(void)setKnownNetworksDelegate:(id<WFKnownNetworksViewControllerDelegate>)arg1 ;
@end

