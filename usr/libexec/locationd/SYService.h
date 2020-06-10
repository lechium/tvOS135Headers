//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SYService : NSObject
{
    _Bool _changesAvailable;	// 8 = 0x8
    _Bool _suspended;	// 9 = 0x9
    long long _sessionStalenessInterval;	// 16 = 0x10
}

@property(nonatomic) long long sessionStalenessInterval; // @synthesize sessionStalenessInterval=_sessionStalenessInterval;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) _Bool changesAvailable; // @synthesize changesAvailable=_changesAvailable;
- (void)resume:(id *)arg1;	// IMP=0x0000000100472708
- (void)suspend;	// IMP=0x00000001004726f8
- (void)setHasChangesAvailable;	// IMP=0x00000001004726e8
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000001004726e4
- (id)initWithService:(id)arg1 priority:(long long)arg2 asMasterStore:(_Bool)arg3 options:(id)arg4;	// IMP=0x00000001004726a8

@end

