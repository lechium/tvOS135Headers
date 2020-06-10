/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray;

@interface VUIDebugMetricsEventListViewController : UITableViewController {

	NSArray* _visibleEvents;
	NSArray* _allEvents;
	NSArray* _buttonsInHeader;
	NSArray* _buttonsInHeaderSelected;

}

@property (nonatomic,retain) NSArray * visibleEvents;                        //@synthesize visibleEvents=_visibleEvents - In the implementation block
@property (nonatomic,retain) NSArray * allEvents;                            //@synthesize allEvents=_allEvents - In the implementation block
@property (nonatomic,retain) NSArray * buttonsInHeader;                      //@synthesize buttonsInHeader=_buttonsInHeader - In the implementation block
@property (nonatomic,retain) NSArray * buttonsInHeaderSelected;              //@synthesize buttonsInHeaderSelected=_buttonsInHeaderSelected - In the implementation block
-(NSArray *)allEvents;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithEvents:(id)arg1 ;
-(void)viewDidLoad;
-(void)finishValidation;
-(id)_formatKeyAndValue:(id)arg1 fromEvent:(id)arg2 ;
-(NSArray *)visibleEvents;
-(void)setButtonsInHeader:(NSArray *)arg1 ;
-(void)setButtonsInHeaderSelected:(NSArray *)arg1 ;
-(void)_buttonClicked:(id)arg1 ;
-(NSArray *)buttonsInHeader;
-(NSArray *)buttonsInHeaderSelected;
-(void)setVisibleEvents:(NSArray *)arg1 ;
-(void)toggleValidationMode;
-(void)setAllEvents:(NSArray *)arg1 ;
@end

