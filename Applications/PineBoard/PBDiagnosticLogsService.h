//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSDiagnosticLogsServiceInterface-Protocol.h"

@class NSString, PBSystemServiceConnection;

@interface PBDiagnosticLogsService : NSObject <PBSDiagnosticLogsServiceInterface>
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001b404
@property(readonly, nonatomic) PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void)incrementScalarKey:(id)arg1;	// IMP=0x000000010001b2e8
- (void)diagnosticLogPathsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001b08c
- (void)invalidate;	// IMP=0x000000010001b078
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x000000010001af44
- (id)init;	// IMP=0x000000010001af10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

