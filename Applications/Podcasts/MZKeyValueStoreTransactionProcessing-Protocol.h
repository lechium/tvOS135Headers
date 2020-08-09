//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MZKeyValueStoreTransaction, NSArray, NSData, NSString;

@protocol MZKeyValueStoreTransactionProcessing <NSObject>
- (void)transaction:(MZKeyValueStoreTransaction *)arg1 didProcessResponseWithDomainVersion:(NSString *)arg2;
- (void)transaction:(MZKeyValueStoreTransaction *)arg1 willProcessResponseWithDomainVersion:(NSString *)arg2;
- (void)transaction:(MZKeyValueStoreTransaction *)arg1 mergeData:(NSData *)arg2 forKey:(NSString *)arg3 domainVersion:(NSString *)arg4 version:(NSString *)arg5 mismatch:(_Bool)arg6 finishedBlock:(void (^)(_Bool))arg7;
- (NSData *)dataForSetTransaction:(MZKeyValueStoreTransaction *)arg1 key:(NSString *)arg2 version:(id *)arg3;
- (NSString *)versionForGetTransaction:(MZKeyValueStoreTransaction *)arg1 key:(NSString *)arg2;

@optional
- (NSString *)sinceDomainVersionForTransaction:(MZKeyValueStoreTransaction *)arg1;
- (NSArray *)keysForTransaction:(MZKeyValueStoreTransaction *)arg1;
@end

