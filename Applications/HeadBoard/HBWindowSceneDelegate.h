//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIWindowSceneDelegate-Protocol.h"

@class HBWindow, NSString;

@interface HBWindowSceneDelegate : UIResponder <UIWindowSceneDelegate>
{
    HBWindow *_window;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100067a94
@property(retain, nonatomic) HBWindow *window; // @synthesize window=_window;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x000000010006784c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
