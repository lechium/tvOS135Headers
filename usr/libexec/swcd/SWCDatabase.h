//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSMutableOrderedSet, NSNumber, NSURL, _SWCGeneration;
@protocol OS_dispatch_source;

@interface SWCDatabase : NSObject
{
    NSMutableOrderedSet *_entries;	// 8 = 0x8
    NSMutableDictionary *_settings;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_saveTimer;	// 24 = 0x18
    unsigned int _shared:1;	// 32 = 0x20
    _SWCGeneration *_settingsGeneration;	// 40 = 0x28
    NSNumber *_launchServicesDatabaseGeneration;	// 48 = 0x30
    NSData *_enterpriseState;	// 56 = 0x38
}

+ (id)queue;	// IMP=0x000000010001e250
+ (id)loadContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001e030
+ (id)new;	// IMP=0x000000010001e024
+ (id)sharedDatabase;	// IMP=0x000000010001df9c
+ (id)_archivedDataFromStorage:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002053c
+ (id)_storageFromArchivedData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100020244
+ (id)_log;	// IMP=0x0000000100020204
- (void).cxx_destruct;	// IMP=0x000000010001d7d8
@property(copy) NSData *enterpriseState; // @synthesize enterpriseState=_enterpriseState;
@property(copy) NSNumber *launchServicesDatabaseGeneration; // @synthesize launchServicesDatabaseGeneration=_launchServicesDatabaseGeneration;
@property(readonly) _SWCGeneration *settingsGeneration; // @synthesize settingsGeneration=_settingsGeneration;
- (void)scheduleNextSave;	// IMP=0x000000010001d798
- (_Bool)saveReturningError:(id *)arg1;	// IMP=0x000000010001d474
- (void)cleanOldSettings;	// IMP=0x000000010001d200
- (void)enumerateSettingsDictionariesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001d1f0
- (void)removeSettingsForKeys:(id)arg1 serviceSpecifier:(id)arg2;	// IMP=0x000000010001d0e8
- (void)removeSettingsForKeys:(id)arg1 serviceType:(id)arg2;	// IMP=0x000000010001cd64
- (void)setSettingsDictionary:(id)arg1 forServiceSpecifier:(id)arg2;	// IMP=0x000000010001cc64
- (id)settingsDictionaryForServiceSpecifier:(id)arg1;	// IMP=0x000000010001cc3c
- (void)updateEntriesForDomain:(id)arg1 canonicalEntries:(id)arg2;	// IMP=0x000000010001ca04
- (void)removeAllEntries;	// IMP=0x000000010001c858
- (_Bool)removeEntries:(id)arg1;	// IMP=0x000000010001c7a8
- (_Bool)addEntries:(id)arg1;	// IMP=0x000000010001c6f8
- (id)entryMatchingServiceSpecifier:(id)arg1;	// IMP=0x000000010001c5dc
- (id)entryMatchingService:(id)arg1 domain:(id)arg2 appID:(id)arg3;	// IMP=0x000000010001c454
- (void)enumerateEntriesMatchingServiceSpecifierWithExactDomain:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c324
- (void)enumerateEntriesMatchingService:(id)arg1 exactDomain:(id)arg2 appID:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000010001c1dc
- (void)enumerateEntriesMatchingServiceSpecifier:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c0ac
- (void)enumerateEntriesMatchingService:(id)arg1 domain:(id)arg2 appID:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000010001bdb4
- (void)enumerateEntriesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001bc38
- (id)entry:(id)arg1;	// IMP=0x000000010001bb7c
@property(readonly) NSURL *storageURL;
- (id)init;	// IMP=0x000000010001bb14
- (void)_reorderAppLinks:(id)arg1 domain:(id)arg2;	// IMP=0x000000010001fd54
- (void)_scheduleSave;	// IMP=0x000000010001fbb0
- (id)_storageForArchiving;	// IMP=0x000000010001fa28
- (void)_removeSettingsForKeysNoSave:(id)arg1 serviceSpecifier:(id)arg2;	// IMP=0x000000010001f8ac
- (id)_initShared;	// IMP=0x000000010001f518
- (_Bool)_deleteStorageItemReturningError:(id *)arg1;	// IMP=0x000000010001f090
- (_Bool)_updateStorageItemWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001efd0
- (id)_dataFromStorageReturningError:(id *)arg1;	// IMP=0x000000010001ef3c
- (id)_dataURLReturningError:(id *)arg1;	// IMP=0x000000010001ee9c

@end
