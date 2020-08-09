//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface HBTopShelfSectionLabelLayoutAttributes : UICollectionViewLayoutAttributes
{
    _Bool _aboveFocusedItem;	// 8 = 0x8
    _Bool _animatingFocusUpdate;	// 9 = 0x9
    unsigned long long _focusAnimationOptions;	// 16 = 0x10
    double _focusingAnimationDuration;	// 24 = 0x18
    double _unfocusingAnimationDuration;	// 32 = 0x20
}

@property(nonatomic) double unfocusingAnimationDuration; // @synthesize unfocusingAnimationDuration=_unfocusingAnimationDuration;
@property(nonatomic) double focusingAnimationDuration; // @synthesize focusingAnimationDuration=_focusingAnimationDuration;
@property(nonatomic) unsigned long long focusAnimationOptions; // @synthesize focusAnimationOptions=_focusAnimationOptions;
@property(nonatomic, getter=isAnimatingFocusUpdate) _Bool animatingFocusUpdate; // @synthesize animatingFocusUpdate=_animatingFocusUpdate;
@property(nonatomic, getter=isAboveFocusedItem) _Bool aboveFocusedItem; // @synthesize aboveFocusedItem=_aboveFocusedItem;
- (id)description;	// IMP=0x0000000100032e5c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100032cb0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100032bbc

@end

