/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UITableView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <TVSystemUI/_TVSUITextAlertButtonViewInterface.h>

@class NSString, UITableViewCell;

@interface _TVSUITextAlertButtonSettingsDisclosureTableView : UITableView <UITableViewDataSource, UITableViewDelegate, _TVSUITextAlertButtonViewInterface> {

	UITableViewCell* _cell;
	/*^block*/id _selectHandler;

}

@property (nonatomic,copy) id selectHandler;                                                 //@synthesize selectHandler=_selectHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=ab_setTitle:,nonatomic,retain) NSString * ab_title; 
@property (setter=ab_setDetailText:,nonatomic,retain) NSString * ab_detailText; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)ab_setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(NSString *)ab_title;
-(void)ab_setTitle:(id)arg1 ;
-(NSString *)ab_detailText;
-(void)ab_setDetailText:(id)arg1 ;
-(void)ab_setDetailText:(id)arg1 animated:(BOOL)arg2 ;
-(double)ab_minimumWidth;
-(id)selectHandler;
-(void)setSelectHandler:(id)arg1 ;
@end

