//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SRStarkView, UIView;

@protocol SRStarkViewDelegate <NSObject>
- (void)starkViewWantsDismissalWithDismissalReason:(unsigned long long)arg1;
- (void)starkViewDidRemoveSnippetView:(UIView *)arg1;
- (void)handleSelectButtonTap:(SRStarkView *)arg1;
@end

