//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTDictionaryDiff.h"

@class NSUserDefaults;

@interface MTDefaultsChangeNotifier : MTDictionaryDiff
{
    _Bool _running;	// 8 = 0x8
    NSUserDefaults *_defaults;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010005af6c
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
- (void)_defaultsChanged;	// IMP=0x000000010005ae88
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010005ae6c
- (void)stop;	// IMP=0x000000010005adec
- (void)start;	// IMP=0x000000010005ac74
- (void)dealloc;	// IMP=0x000000010005ab08
- (id)initWithProperties:(id)arg1 defaults:(id)arg2;	// IMP=0x000000010005aa70

@end

