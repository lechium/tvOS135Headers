//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SystemDiagnosticLogAgent.h"

@interface SystemDiagnosticLogAgentiOS : SystemDiagnosticLogAgent
{
}

- (void)processMessage:(id)arg1 replyWith:(id)arg2;	// IMP=0x000000010000260c
- (_Bool)getKeyboardPreferences:(const char *)arg1 withTimeout:(double)arg2;	// IMP=0x0000000100001f40
- (_Bool)ASPToolTrace:(const char *)arg1 withTimeout:(double)arg2;	// IMP=0x0000000100001da8
- (_Bool)ASPToolTaskForDir:(const char *)arg1 WithTimeout:(double)arg2;	// IMP=0x0000000100001be0
- (_Bool)ASPToolSnapshotForDir:(const char *)arg1 WithTimeout:(double)arg2;	// IMP=0x0000000100001a48
- (_Bool)ASPToolGenericWithTimeout:(double)arg1 andBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000193c
- (id)_AWDTaskWithTimeout:(long long)arg1;	// IMP=0x0000000100001478
- (id)_coreMediaTaskWithTimeout:(long long)arg1;	// IMP=0x0000000100001254

@end

