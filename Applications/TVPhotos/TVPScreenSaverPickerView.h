//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDelegate-Protocol.h"

@class NSString, NSTimer, PHAssetCollection, TVPScreenSaverDataSource, UILabel, UITableView;
@protocol TVPScreenSaverPickerViewDelegate;

@interface TVPScreenSaverPickerView : UIView <UITableViewDelegate>
{
    NSTimer *_debounceTimer;	// 8 = 0x8
    id <TVPScreenSaverPickerViewDelegate> _delegate;	// 16 = 0x10
    TVPScreenSaverDataSource *_dataSource;	// 24 = 0x18
    PHAssetCollection *_highlightedAlbum;	// 32 = 0x20
    UILabel *_viewTitle;	// 40 = 0x28
    UITableView *_tableView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100063318
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *viewTitle; // @synthesize viewTitle=_viewTitle;
@property(retain, nonatomic) PHAssetCollection *highlightedAlbum; // @synthesize highlightedAlbum=_highlightedAlbum;
@property(retain, nonatomic) TVPScreenSaverDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TVPScreenSaverPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateDelegate:(id)arg1;	// IMP=0x0000000100063198
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000001000630d0
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x00000001000630c8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100062ef4
- (id)init;	// IMP=0x000000010006220c
- (id)preferredFocusEnvironments;	// IMP=0x000000010006219c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

