//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATOperation.h>

@class DMDConfigurationDatabase, NSObject;
@protocol OS_os_transaction;

@interface DMDEngineDatabaseOperation : CATOperation
{
    DMDConfigurationDatabase *_database;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003fdd0
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) DMDConfigurationDatabase *database; // @synthesize database=_database;
- (void)performDatabaseModificationOperationWithManagedObjectContext:(id)arg1;	// IMP=0x000000010003fc74
- (void)main;	// IMP=0x000000010003f9dc
- (_Bool)isAsynchronous;	// IMP=0x000000010003f9d4
- (id)init;	// IMP=0x000000010003f93c
- (void)dealloc;	// IMP=0x000000010003f864

@end

