//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

@interface MTEpisodeUnavailableUtil : MTSingleton
{
}

+ (id)longReasonTextForNoInternet;	// IMP=0x00000001000b1d74
+ (id)longStringForUnavailableReason:(unsigned long long)arg1 podcastTitle:(id)arg2;	// IMP=0x00000001000b1a58
+ (id)stringForUnavailableReason:(unsigned long long)arg1;	// IMP=0x00000001000b1964
+ (unsigned long long)unavailableReasonForEpisode:(id)arg1;	// IMP=0x00000001000b1884
- (void)_presentRestrictedDialogWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b24d0
- (void)_presentErrorDialogWithTitle:(id)arg1 message:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b236c
- (_Bool)showDialogForReason:(unsigned long long)arg1 podcastTitle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b1f44

@end

