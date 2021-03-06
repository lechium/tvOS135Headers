//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKDatabaseConnectionFactory : NSObject
{
    NSString *_databasePath;	// 8 = 0x8
}

+ (id)factoryWithDatabaseName:(id)arg1 environment:(long long)arg2;	// IMP=0x000000010012f7f4
+ (id)pathForDatabaseName:(id)arg1 environment:(long long)arg2;	// IMP=0x000000010012f78c
+ (id)directoryForEnvironment:(long long)arg1;	// IMP=0x000000010012f6dc
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (id)connectionForWriterWithName:(id)arg1;	// IMP=0x000000010012f934
- (id)connectionForReaderWithName:(id)arg1;	// IMP=0x000000010012f92c
- (void)dealloc;	// IMP=0x000000010012f8e4
- (id)initWithPath:(id)arg1;	// IMP=0x000000010012f884

@end

