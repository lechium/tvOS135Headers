//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSIndicatorLight;

@interface PRESystemIndicator : NSObject
{
    SSIndicatorLight *_sil;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100005ab4
- (void).cxx_destruct;	// IMP=0x0000000100005fe4
@property(retain, nonatomic) SSIndicatorLight *sil; // @synthesize sil=_sil;
- (void)off;	// IMP=0x0000000100005ec0
- (void)on;	// IMP=0x0000000100005df4
- (void)flashMorseCodePattern:(id)arg1;	// IMP=0x0000000100005c4c
- (id)init;	// IMP=0x0000000100005b84

@end

