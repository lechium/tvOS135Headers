/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>

@class NSDictionary, UISegmentedControl, UITableView, NSArray, NSString;

@interface PXDebugDictionaryViewController : UIViewController <UITableViewDataSource> {

	NSDictionary* _debugDictionary;
	UISegmentedControl* _segmentedControl;
	UITableView* _tableView;
	NSArray* _sectionTitles;
	NSDictionary* _tableContent;

}

@property (nonatomic,retain) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * sectionTitles;                            //@synthesize sectionTitles=_sectionTitles - In the implementation block
@property (nonatomic,retain) NSDictionary * tableContent;                        //@synthesize tableContent=_tableContent - In the implementation block
@property (nonatomic,readonly) NSDictionary * debugDictionary;                   //@synthesize debugDictionary=_debugDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTableView:(UITableView *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(UISegmentedControl *)segmentedControl;
-(void)viewDidLoad;
-(NSDictionary *)debugDictionary;
-(UITableView *)tableView;
-(NSArray *)sectionTitles;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)_switchLogsAction:(id)arg1 ;
-(void)_closeAction:(id)arg1 ;
-(id)initWithDebugDictionary:(id)arg1 ;
-(id)segmentedTitles;
-(void)_updateWithSegmentedTitle:(id)arg1 ;
-(id)_flattenDictionary:(id)arg1 ;
-(id)_sanitizedTextForTitle:(id)arg1 value:(id)arg2 ;
-(void)setSectionTitles:(NSArray *)arg1 ;
-(NSDictionary *)tableContent;
-(void)setTableContent:(NSDictionary *)arg1 ;
@end

