//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAirDropHandler.h"

@class LSAppLink;

__attribute__((visibility("hidden")))
@interface SDAirDropHandlerGenericLinks : SDAirDropHandler
{
    LSAppLink *_appLink;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000b28a4
@property(retain, nonatomic) LSAppLink *appLink; // @synthesize appLink=_appLink;
- (void)updatePossibleActions;	// IMP=0x00000001000b25a8
- (id)suitableContentsDescription;	// IMP=0x00000001000b2344
- (long long)transferTypes;	// IMP=0x00000001000b230c
- (_Bool)canHandleTransfer;	// IMP=0x00000001000b22ec

@end

