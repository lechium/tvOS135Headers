//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSystemOverlayUIProvider-Protocol.h"

@interface PBBlockSystemOverlayUIProvider : NSObject <PBSystemOverlayUIProvider>
{
    CDUnknownBlockType _providerBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000f1dc8
@property(readonly, copy, nonatomic) CDUnknownBlockType providerBlock; // @synthesize providerBlock=_providerBlock;
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f1c58
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f1b60

@end

