//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HBUITopShelfParadeViewController;
@protocol HBUITopShelfParadeAction, HBUITopShelfParadeItem;

@protocol HBUITopShelfParadeViewControllerDelegate <NSObject>
- (void)paradeViewController:(HBUITopShelfParadeViewController *)arg1 willScrollToFirstItem:(_Bool)arg2;
- (void)paradeViewController:(HBUITopShelfParadeViewController *)arg1 didShowItem:(id <HBUITopShelfParadeItem>)arg2;
- (void)paradeViewController:(HBUITopShelfParadeViewController *)arg1 didSelectAction:(id <HBUITopShelfParadeAction>)arg2 forItem:(id <HBUITopShelfParadeItem>)arg3;
@end

