//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSURLStorageTaskManager.h"

@interface NSURLReadStorageTaskManager : NSURLStorageTaskManager
{
    struct sqlite3 *_dbReadConnection;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x00000001000082f0
- (id)initWithPersistentPath:(id)arg1 maxSize:(long long)arg2 sandboxExtension:(id)arg3 auditToken:(CDStruct_4c969caf)arg4;	// IMP=0x0000000100008124

@end

