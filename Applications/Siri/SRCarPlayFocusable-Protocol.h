//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol UIFocusItem;

@protocol SRCarPlayFocusable <NSObject>
@property(retain, nonatomic) id <UIFocusItem> userFocusedItem;
- (_Bool)viewContainsFocusItem:(id <UIFocusItem>)arg1;
- (id <UIFocusItem>)updatedFocusItemForCurrentFocusItem:(id <UIFocusItem>)arg1;
@end

