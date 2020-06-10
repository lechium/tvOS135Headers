//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MTMPUTransportButtonEventHandler, UIControl;
@protocol MTMPUTransportButton;

@protocol MTMPUTransportButton <NSObject>
+ (UIControl<MTMPUTransportButton> *)transportButton;
@property(nonatomic) long long transportButtonImageViewContentMode;
@property(nonatomic) _Bool adjustsImageWhenHighlighted;
@property(readonly, nonatomic) MTMPUTransportButtonEventHandler *transportButtonEventHandler;
- (_Bool)wantsCustomHighlightAppearance;
- (void)prepareForReuse;
- (void)applyTransportButtonLayoutAttributes:(CDStruct_62e32a95)arg1;
@end
