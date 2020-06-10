/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UISegmentedControl, UITableView, NSArray, NSDictionary, PHSuggestion, NSString;

@interface PXSuggestionDebugViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UISegmentedControl* _segmentedControl;
	UITableView* _tableView;
	NSArray* _sectionTitles;
	NSDictionary* _tableContent;
	NSDictionary* _sourceDictionary;
	PHSuggestion* _suggestion;
	NSDictionary* _suggestionInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)_setupWithDictionary:(id)arg1 ;
-(void)_switchLogsAction:(id)arg1 ;
-(void)_sendByEmailAction:(id)arg1 ;
-(void)_closeAction:(id)arg1 ;
-(id)initWithSuggestion:(id)arg1 suggestionInfo:(id)arg2 ;
-(id)infoSectionsWithSuggestion:(id)arg1 suggestionInfo:(id)arg2 compact:(BOOL)arg3 ;
-(id)existingSectionsWithSuggestion:(id)arg1 suggestionInfo:(id)arg2 ;
@end
