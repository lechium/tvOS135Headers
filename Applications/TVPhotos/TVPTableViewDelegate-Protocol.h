//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, TVPTableView;

@protocol TVPTableViewDelegate <UITableViewDelegate>

@optional
- (void)tableView:(TVPTableView *)arg1 didReceiveLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(TVPTableView *)arg1 shouldHandleLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(TVPTableView *)arg1 didReceivePhysicalPlayForItemAtIndexPath:(NSIndexPath *)arg2;
@end

