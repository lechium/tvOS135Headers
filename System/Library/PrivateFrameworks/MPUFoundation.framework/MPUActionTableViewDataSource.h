/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPUActionTableViewDataSource <UITableViewDataSource>
@required
+(id)actionCellConfigurationClasses;
+(id)actionCellConfigurationClassesForLocation:(unsigned long long)arg1;
-(void)reloadActionRowsAnimated:(BOOL)arg1;
-(Class)cellConfigurationForIndexPath:(id)arg1;
-(long long)numberOfTopActionRowsInTableView:(id)arg1;
-(long long)numberOfBottomActionRowsInTableView:(id)arg1;
-(BOOL)shouldShowActionCellConfiguration:(Class)arg1;
-(long long)numberOfActionRowsInTableView:(id)arg1;

@end

