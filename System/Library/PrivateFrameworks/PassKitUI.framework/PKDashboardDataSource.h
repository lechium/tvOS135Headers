/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKDashboardDataSource <NSObject>
@optional
-(void)setDataSourceDelegate:(id)arg1;
-(id)navigationBarTitle;

@required
-(unsigned long long)numberOfSections;
-(id)itemAtIndexPath:(id)arg1;
-(id)titleForSection:(unsigned long long)arg1;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
-(id)footerTextForSection:(unsigned long long)arg1;

@end
