//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SecDbBackupManager : NSObject
{
}

+ (id)manager;	// IMP=0x00000001000a1c1c
- (id)wrapItemKey:(id)arg1 forKeyclass:(int)arg2 error:(id *)arg3;	// IMP=0x00000001000a1d3c
- (void)verifyBackupIntegrity:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a1c24

@end

