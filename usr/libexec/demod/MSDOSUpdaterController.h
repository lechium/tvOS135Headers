//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSOSUpdateManagerClientDelegate-Protocol.h"

@class NSString, PBSOSUpdateDownload, PBSOSUpdateManagerClient;

@interface MSDOSUpdaterController : NSObject <PBSOSUpdateManagerClientDelegate>
{
    _Bool _installUpdateKicked;	// 8 = 0x8
    _Bool _started;	// 9 = 0x9
    _Bool _purged;	// 10 = 0xa
    PBSOSUpdateManagerClient *_manager;	// 16 = 0x10
    PBSOSUpdateDownload *_lastDownload;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010002de70
- (void).cxx_destruct;	// IMP=0x0000000100030000
@property _Bool purged; // @synthesize purged=_purged;
@property _Bool started; // @synthesize started=_started;
@property _Bool installUpdateKicked; // @synthesize installUpdateKicked=_installUpdateKicked;
@property(retain, nonatomic) PBSOSUpdateDownload *lastDownload; // @synthesize lastDownload=_lastDownload;
@property(retain, nonatomic) PBSOSUpdateManagerClient *manager; // @synthesize manager=_manager;
- (void)downloadFailed:(id)arg1;	// IMP=0x000000010002fee8
- (void)downloadProgressChanged:(id)arg1 withPercent:(float)arg2;	// IMP=0x000000010002fc08
- (void)client:(id)arg1 installDidFinish:(id)arg2;	// IMP=0x000000010002fb54
- (void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3;	// IMP=0x000000010002fa60
- (void)client:(id)arg1 installDidStart:(id)arg2;	// IMP=0x000000010002f9b8
- (void)client:(id)arg1 downloadDidFinish:(id)arg2;	// IMP=0x000000010002f60c
- (void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3;	// IMP=0x000000010002f534
- (void)client:(id)arg1 downloadProgressDidChange:(id)arg2;	// IMP=0x000000010002f3b4
- (void)client:(id)arg1 downloadDidStart:(id)arg2;	// IMP=0x000000010002f324
- (void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2;	// IMP=0x000000010002f2b0
- (void)client:(id)arg1 automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg2 withError:(id)arg3;	// IMP=0x000000010002f20c
- (void)client:(id)arg1 scanDidCompleteWithNewUpdateAvailable:(id)arg2 error:(id)arg3;	// IMP=0x000000010002f120
- (void)client:(id)arg1 scanRequestDidFinishForOptions:(id)arg2 update:(id)arg3 error:(id)arg4;	// IMP=0x000000010002ee84
- (void)client:(id)arg1 scanRequestDidStartForOptions:(id)arg2;	// IMP=0x000000010002ee20
- (void)bail:(const char *)arg1 error:(id)arg2;	// IMP=0x000000010002eb8c
- (_Bool)cleanup;	// IMP=0x000000010002e614
- (void)startOSUpdate;	// IMP=0x000000010002df50
- (id)init;	// IMP=0x000000010002dedc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
