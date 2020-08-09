//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol NSSecureCoding, PBSystemOverlayContentPresenting;

@protocol PBSystemOverlayContentDelegate <NSObject>
- (void)contentPresentingDidDismissContent:(id <PBSystemOverlayContentPresenting>)arg1;
- (void)contentPresenting:(id <PBSystemOverlayContentPresenting>)arg1 willDismissContentWithResult:(id <NSSecureCoding>)arg2 error:(NSError *)arg3;
@end

