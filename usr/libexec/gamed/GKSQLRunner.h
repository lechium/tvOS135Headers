//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKDatabaseConnection;

@interface GKSQLRunner : NSObject
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)runnerWithConnection:(id)arg1;	// IMP=0x000000010011ea0c
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (int)runSQL:(id)arg1;	// IMP=0x000000010011eb34
- (int)runSQLFromFileAtPath:(id)arg1;	// IMP=0x000000010011eaec
- (void)dealloc;	// IMP=0x000000010011eaa4
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010011ea44

@end

