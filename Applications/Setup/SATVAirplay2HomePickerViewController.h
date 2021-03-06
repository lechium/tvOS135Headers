//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVTableViewController.h"

@class NSArray;
@protocol SATVAirplay2HomePickerViewControllerDelegate;

@interface SATVAirplay2HomePickerViewController : SATVTableViewController
{
    id <SATVAirplay2HomePickerViewControllerDelegate> _delegate;	// 8 = 0x8
    NSArray *_homes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002b0f4
@property(readonly, nonatomic, getter=_homes) NSArray *homes; // @synthesize homes=_homes;
@property(nonatomic) __weak id <SATVAirplay2HomePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010002afe0
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010002af60
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010002ae00
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010002adb4
- (void)viewDidLoad;	// IMP=0x000000010002ad00
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010002ab80

@end

