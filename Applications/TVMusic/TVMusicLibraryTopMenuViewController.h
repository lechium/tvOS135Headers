//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVMusicTableViewController.h"

@class MPModelLibraryResponse, NSArray, NSDictionary, NSIndexPath, UIFocusGuide, UIView;

@interface TVMusicLibraryTopMenuViewController : TVMusicTableViewController
{
    NSDictionary *_mapMenuItemToName;	// 8 = 0x8
    UIFocusGuide *_menuFocusGuide;	// 16 = 0x10
    _Bool _tableViewHasBeenFocused;	// 24 = 0x18
    _Bool _needsReload;	// 25 = 0x19
    NSArray *_menuItems;	// 32 = 0x20
    unsigned long long _currentMenuContext;	// 40 = 0x28
    MPModelLibraryResponse *_genresResponse;	// 48 = 0x30
    UIView *_genresHeaderView;	// 56 = 0x38
    NSIndexPath *_lastSelectedIndexPath;	// 64 = 0x40
    unsigned long long _viewControllerUIContext;	// 72 = 0x48
}

+ (id)currentTopMenu;	// IMP=0x00000001000b8738
- (void).cxx_destruct;	// IMP=0x00000001000badd8
@property(nonatomic) unsigned long long viewControllerUIContext; // @synthesize viewControllerUIContext=_viewControllerUIContext;
@property(retain, nonatomic) NSIndexPath *lastSelectedIndexPath; // @synthesize lastSelectedIndexPath=_lastSelectedIndexPath;
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(retain, nonatomic) UIView *genresHeaderView; // @synthesize genresHeaderView=_genresHeaderView;
@property(retain, nonatomic) MPModelLibraryResponse *genresResponse; // @synthesize genresResponse=_genresResponse;
@property(readonly, nonatomic) unsigned long long currentMenuContext; // @synthesize currentMenuContext=_currentMenuContext;
@property(readonly, copy, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
- (void)_modelResponseDidInvalidate:(id)arg1;	// IMP=0x00000001000bad0c
- (id)_previewViewControllerForIndexPath:(id)arg1;	// IMP=0x00000001000bab50
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000001000bab04
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000001000baaa4
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000baa98
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000001000baa60
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000ba7dc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000ba704
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000ba688
- (id)_genreForIndexPath:(id)arg1;	// IMP=0x00000001000ba30c
- (void)_getGenres;	// IMP=0x00000001000ba150
- (void)_setColorsForCell:(id)arg1 indexPath:(id)arg2 isFocused:(_Bool)arg3 withAnimationCoordinator:(id)arg4;	// IMP=0x00000001000b9fb8
- (id)_textColor;	// IMP=0x00000001000b9f3c
- (unsigned long long)_menuItemForRowIndex:(long long)arg1;	// IMP=0x00000001000b9ec0
- (id)_noResultsViewWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x00000001000b9aa4
- (id)_viewControllerForBrowseSectionRowAtIndex:(long long)arg1;	// IMP=0x00000001000b9864
- (id)_nameForMenuItem:(unsigned long long)arg1;	// IMP=0x00000001000b957c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000b94cc
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001000b939c
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000001000b8db8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000b8d04
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000b8ca0
- (void)viewDidLoad;	// IMP=0x00000001000b8744
- (void)dealloc;	// IMP=0x00000001000b86c0
- (id)initWithMenuItems:(id)arg1;	// IMP=0x00000001000b8548

@end
