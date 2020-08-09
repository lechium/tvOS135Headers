//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MZUPPMetrics : NSObject
{
    _Bool _success;	// 8 = 0x8
    NSString *_errorDomain;	// 16 = 0x10
    long long _errorCode;	// 24 = 0x18
    unsigned long long _latestUPPSubtask;	// 32 = 0x20
    long long _numMetadataItemsFromDataSource;	// 40 = 0x28
    long long _numMetadataItemsFromKVSStorage;	// 48 = 0x30
    long long _numMetadataItemsToCommitToDataSource;	// 56 = 0x38
    long long _numMetadataItemsToCommitToKVSStorage;	// 64 = 0x40
    double _bagLookupStartTime;	// 72 = 0x48
    double _bagLookupEndTime;	// 80 = 0x50
    double _syncTaskStartTime;	// 88 = 0x58
    double _syncTaskEndTime;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100071420
@property(nonatomic) double syncTaskEndTime; // @synthesize syncTaskEndTime=_syncTaskEndTime;
@property(nonatomic) double syncTaskStartTime; // @synthesize syncTaskStartTime=_syncTaskStartTime;
@property(nonatomic) double bagLookupEndTime; // @synthesize bagLookupEndTime=_bagLookupEndTime;
@property(nonatomic) double bagLookupStartTime; // @synthesize bagLookupStartTime=_bagLookupStartTime;
@property(nonatomic) long long numMetadataItemsToCommitToKVSStorage; // @synthesize numMetadataItemsToCommitToKVSStorage=_numMetadataItemsToCommitToKVSStorage;
@property(nonatomic) long long numMetadataItemsToCommitToDataSource; // @synthesize numMetadataItemsToCommitToDataSource=_numMetadataItemsToCommitToDataSource;
@property(nonatomic) long long numMetadataItemsFromKVSStorage; // @synthesize numMetadataItemsFromKVSStorage=_numMetadataItemsFromKVSStorage;
@property(nonatomic) long long numMetadataItemsFromDataSource; // @synthesize numMetadataItemsFromDataSource=_numMetadataItemsFromDataSource;
@property(nonatomic) unsigned long long latestUPPSubtask; // @synthesize latestUPPSubtask=_latestUPPSubtask;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (id)metricsDictionary;	// IMP=0x0000000100070e8c

@end

