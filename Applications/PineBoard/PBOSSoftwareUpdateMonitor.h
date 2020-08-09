//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface PBOSSoftwareUpdateMonitor : NSObject
{
    _Bool _isInternalBuild;	// 8 = 0x8
    _Bool _isRestore;	// 9 = 0x9
    _Bool _triggeredManually;	// 10 = 0xa
    NSURL *_baseURL;	// 16 = 0x10
    NSString *_fromOSBuild;	// 24 = 0x18
    NSString *_fromHDMI;	// 32 = 0x20
    NSString *_toOSBuild;	// 40 = 0x28
    NSString *_uuid;	// 48 = 0x30
}

+ (id)_instance;	// IMP=0x0000000100111ff4
+ (unsigned long long)migrateWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100111f88
+ (id)lastRestoreFilePath;	// IMP=0x000000010011165c
+ (void)noteStage:(id)arg1;	// IMP=0x00000001001115c8
+ (void)prepareForUpdateToOSBuild:(id)arg1 forRestore:(_Bool)arg2 triggeredManually:(_Bool)arg3;	// IMP=0x000000010011150c
- (void).cxx_destruct;	// IMP=0x00000001001143b4
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property _Bool triggeredManually; // @synthesize triggeredManually=_triggeredManually;
@property _Bool isRestore; // @synthesize isRestore=_isRestore;
@property _Bool isInternalBuild; // @synthesize isInternalBuild=_isInternalBuild;
@property(copy, nonatomic) NSString *toOSBuild; // @synthesize toOSBuild=_toOSBuild;
@property(copy, nonatomic) NSString *fromHDMI; // @synthesize fromHDMI=_fromHDMI;
@property(copy, nonatomic) NSString *fromOSBuild; // @synthesize fromOSBuild=_fromOSBuild;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (_Bool)_isFinalStage:(id)arg1;	// IMP=0x0000000100113fbc
- (_Bool)_isFailedStage:(id)arg1;	// IMP=0x0000000100113de8
- (_Bool)_isCancelStage:(id)arg1;	// IMP=0x0000000100113d04
- (void)_processAppRestart;	// IMP=0x000000010011386c
- (void)_processUpdateAttemptCompleted;	// IMP=0x0000000100113648
- (void)_issueRequestForStage:(id)arg1 withData:(id)arg2 retryDelay:(long long)arg3;	// IMP=0x0000000100112d68
- (void)_noteStage:(id)arg1;	// IMP=0x0000000100112564
- (void)_processNewUpdateAttemptToOSBuild:(id)arg1 forRestore:(_Bool)arg2 triggeredManually:(_Bool)arg3;	// IMP=0x00000001001120d4
- (id)init;	// IMP=0x000000010011178c

@end
