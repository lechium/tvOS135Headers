//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol HBUITopShelfContentViewControllerDelegate;

@protocol HBUITopShelfContentViewController <NSObject>
@property(readonly, nonatomic) unsigned long long contentStyle;
@property(nonatomic, getter=isContentOccluded) _Bool contentOccluded;
@property(nonatomic) __weak id <HBUITopShelfContentViewControllerDelegate> delegate;
@end

