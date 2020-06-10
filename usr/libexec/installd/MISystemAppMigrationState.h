//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface MISystemAppMigrationState : NSObject
{
    _Bool _systemAppMigrationComplete;	// 8 = 0x8
    NSMutableArray *_blockArray;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_systemAppMigrationStateQueue;	// 24 = 0x18
}

+ (id)defaultManager;	// IMP=0x00000001000235e8
- (void).cxx_destruct;	// IMP=0x0000000100023c04
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *systemAppMigrationStateQueue; // @synthesize systemAppMigrationStateQueue=_systemAppMigrationStateQueue;
@property(retain, nonatomic) NSMutableArray *blockArray; // @synthesize blockArray=_blockArray;
- (void)waitForSystemAppMigrationToComplete:(CDUnknownBlockType)arg1;	// IMP=0x00000001000239b0
@property(nonatomic) _Bool systemAppMigrationComplete; // @synthesize systemAppMigrationComplete=_systemAppMigrationComplete;
- (id)init;	// IMP=0x00000001000234ac

@end
