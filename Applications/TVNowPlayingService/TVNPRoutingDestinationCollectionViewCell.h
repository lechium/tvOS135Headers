//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVNPBaseRoutingDestinationCollectionViewCell.h"

@class TVNPRoutingDestination;

@interface TVNPRoutingDestinationCollectionViewCell : TVNPBaseRoutingDestinationCollectionViewCell
{
    TVNPRoutingDestination *_destination;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001e338
@property(retain, nonatomic) TVNPRoutingDestination *destination; // @synthesize destination=_destination;
- (void)_updateNowPlayingInfo;	// IMP=0x000000010001e080
- (void)_updateMusicBarState;	// IMP=0x000000010001e02c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010001df00
- (void)dealloc;	// IMP=0x000000010001dca4

@end

