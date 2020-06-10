//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SecPinningDb : NSObject
{
    struct os_unfair_lock_s _regexCacheLock;	// 8 = 0x8
    struct __OpaqueSecDb *_db;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSURL *_dbPath;	// 32 = 0x20
    NSMutableDictionary *_regexCache;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100027064
@property(retain) NSMutableDictionary *regexCache; // @synthesize regexCache=_regexCache;
@property struct os_unfair_lock_s regexCacheLock; // @synthesize regexCacheLock=_regexCacheLock;
@property(retain) NSURL *dbPath; // @synthesize dbPath=_dbPath;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property struct __OpaqueSecDb *db; // @synthesize db=_db;
- (id)queryForPolicyName:(id)arg1;	// IMP=0x0000000100026b34
- (id)queryForDomain:(id)arg1;	// IMP=0x0000000100026444
- (_Bool)isPinningDisabled:(id)arg1;	// IMP=0x0000000100026210
- (_Bool)queryCacheForSuffix:(id)arg1 firstLabel:(id)arg2 results:(id *)arg3;	// IMP=0x0000000100025e3c
- (void)addSuffixToCache:(id)arg1 entry:(id)arg2;	// IMP=0x0000000100025ce4
- (void)clearCache;	// IMP=0x0000000100025c74
- (void)dealloc;	// IMP=0x0000000100025c24
- (id)init;	// IMP=0x0000000100025b5c
- (void)initializedDb;	// IMP=0x0000000100025b04
- (id)pinningDbPath;	// IMP=0x00000001000259cc
- (struct __OpaqueSecDb *)createAtPath;	// IMP=0x00000001000258e8
- (_Bool)updateDb:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2 pinningList:(id)arg3 updateSchema:(_Bool)arg4 updateContent:(_Bool)arg5;	// IMP=0x00000001000257a4
- (id)copySystemPinningList;	// IMP=0x0000000100025618
- (_Bool)installDbFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002512c
- (_Bool)createOrAlterRulesTable:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000100025010
- (_Bool)createOrAlterAdminTable:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000100024f28
- (_Bool)removeAllRulesFromDb:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000100024dcc
- (_Bool)populateDbFromBundle:(id)arg1 dbConnection:(struct __OpaqueSecDbConnection *)arg2 error:(struct __CFError **)arg3;	// IMP=0x0000000100024c38
- (_Bool)insertRuleWithName:(id)arg1 domainSuffix:(id)arg2 labelRegex:(id)arg3 policies:(id)arg4 dbConnection:(struct __OpaqueSecDbConnection *)arg5 error:(struct __CFError **)arg6;	// IMP=0x00000001000249d4
- (_Bool)shouldUpdateContent:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100024820
- (_Bool)setContentVersion:(id)arg1 dbConnection:(struct __OpaqueSecDbConnection *)arg2 error:(struct __CFError **)arg3;	// IMP=0x0000000100024688
- (id)getContentVersion:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000100024584
- (_Bool)setSchemaVersion:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000100024464
- (id)getSchemaVersion:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000100024360

@end
