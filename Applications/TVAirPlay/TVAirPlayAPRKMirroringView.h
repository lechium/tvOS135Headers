//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface TVAirPlayAPRKMirroringView : UIView
{
    CALayer *_mirroringLayer;	// 8 = 0x8
    CALayer *_HUDLayer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100017bdc
@property(retain, nonatomic) CALayer *HUDLayer; // @synthesize HUDLayer=_HUDLayer;
@property(retain, nonatomic) CALayer *mirroringLayer; // @synthesize mirroringLayer=_mirroringLayer;
- (_Bool)canBecomeFocused;	// IMP=0x0000000100017b8c
- (void)layoutSubviews;	// IMP=0x0000000100017adc
- (id)initWithMirroringLayer:(id)arg1 HUDLayer:(id)arg2;	// IMP=0x0000000100017968
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000178e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100017858
- (id)init;	// IMP=0x00000001000177d0

@end

