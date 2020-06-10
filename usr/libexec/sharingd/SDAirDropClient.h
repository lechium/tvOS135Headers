//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "SDAirDropFileZipperDelegate-Protocol.h"
#import "SDBonjourResolverDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableData, NSMutableDictionary, NSMutableSet, NSNumber, NSProgress, NSString, NSURL, NSURLResponse, NSURLSession, NSURLSessionUploadTask, SDAirDropFileZipper, SDAirDropPeerMetric, SDBonjourResolver, SDStatusMonitor, SDXPCHelperConnection;
@protocol OS_dispatch_queue, OS_os_transaction, SDAirDropClientDelegate;

__attribute__((visibility("hidden")))
@interface SDAirDropClient : NSObject <SDAirDropFileZipperDelegate, SDBonjourResolverDelegate, NSURLSessionDataDelegate>
{
    NSURLResponse *_askResponse;	// 8 = 0x8
    NSURLSessionUploadTask *_askTask;	// 16 = 0x10
    _Bool _cancelled;	// 24 = 0x18
    NSString *_clientBundleID;	// 32 = 0x20
    NSString *_compressionType;	// 40 = 0x28
    NSString *_connectionKey;	// 48 = 0x30
    _Bool _conversionNotified;	// 56 = 0x38
    _Bool _conversionObserver;	// 57 = 0x39
    NSProgress *_conversionProgress;	// 64 = 0x40
    _Bool _discover;	// 72 = 0x48
    NSURLResponse *_discoverResponse;	// 80 = 0x50
    NSURLSessionUploadTask *_discoverTask;	// 88 = 0x58
    int _failCount;	// 96 = 0x60
    struct CGImage *_fileIcon;	// 104 = 0x68
    NSMutableArray *_fileURLs;	// 112 = 0x70
    NSMutableDictionary *_fileURLToConversionNeeded;	// 120 = 0x78
    NSMutableSet *_generatedFiles;	// 128 = 0x80
    struct __SecIdentity *_identity;	// 136 = 0x88
    NSArray *_items;	// 144 = 0x90
    long long _lastEvent;	// 152 = 0x98
    NSMutableArray *_mediaFormatConversionDestinations;	// 160 = 0xa0
    SDAirDropPeerMetric *_metric;	// 168 = 0xa8
    SDStatusMonitor *_monitor;	// 176 = 0xb0
    NSMutableArray *_otherStuff;	// 184 = 0xb8
    _Bool _p2pRetained;	// 192 = 0xc0
    struct __SFNode *_person;	// 200 = 0xc8
    _Bool _personAdded;	// 208 = 0xd0
    unsigned int _powerAssertionID;	// 212 = 0xd4
    NSProgress *_progress;	// 216 = 0xd8
    NSMutableDictionary *_properties;	// 224 = 0xe0
    _Bool _providedStream;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_queue;	// 240 = 0xf0
    _Bool _queueSuspended;	// 248 = 0xf8
    NSMutableData *_receiverData;	// 256 = 0x100
    SDBonjourResolver *_resolver;	// 264 = 0x108
    NSNumber *_sendingLivePhotoJPEGs;	// 272 = 0x110
    struct __SecTrust *_serverTrust;	// 280 = 0x118
    NSURL *_serverURL;	// 288 = 0x120
    NSURLSession *_session;	// 296 = 0x128
    _Bool _shouldPublishProgress;	// 304 = 0x130
    struct CGImage *_smallFileIcon;	// 312 = 0x138
    double _startTime;	// 320 = 0x140
    NSURL *_tmpDirectoryToCleanUp;	// 328 = 0x148
    NSObject<OS_os_transaction> *_transaction;	// 336 = 0x150
    _Bool _transactionStarted;	// 344 = 0x158
    NSProgress *_transferProgress;	// 352 = 0x160
    _Bool _uploadFinished;	// 360 = 0x168
    NSURLResponse *_uploadResponse;	// 368 = 0x170
    NSURLSessionUploadTask *_uploadTask;	// 376 = 0x178
    NSMutableArray *_weblocURLs;	// 384 = 0x180
    SDXPCHelperConnection *_xpcHelperConnection;	// 392 = 0x188
    SDAirDropFileZipper *_zipper;	// 400 = 0x190
    _Bool _zipperFinished;	// 408 = 0x198
    int _clientPid;	// 412 = 0x19c
    id <SDAirDropClientDelegate> _delegate;	// 416 = 0x1a0
    CDStruct_4c969caf _auditToken;	// 424 = 0x1a8
}

- (void).cxx_destruct;	// IMP=0x00000001000758e0
@property __weak id <SDAirDropClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldPublishProgress; // @synthesize shouldPublishProgress=_shouldPublishProgress;
@property(copy) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property int clientPid; // @synthesize clientPid=_clientPid;
@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (void)donateTransferInteractionToDuet;	// IMP=0x0000000100075854
- (void)convertMediaItemsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100075848
- (void)generatePreviewForFileURL:(id)arg1;	// IMP=0x0000000100075844
- (void)invalidate;	// IMP=0x00000001000753f8
@property(readonly) NSString *personID;
- (_Bool)send;	// IMP=0x0000000100074fb0
- (void)resolve;	// IMP=0x0000000100074e94
- (void)activate;	// IMP=0x000000010007496c
- (void)startSending;	// IMP=0x000000010007439c
- (id)tmpDirectory;	// IMP=0x0000000100074204
- (void)cancelSendingClassroom;	// IMP=0x000000010007414c
- (void)startSendingClassroom;	// IMP=0x0000000100073f50
- (void)startPublishingProgress;	// IMP=0x0000000100073d18
- (void)removeFileIconsFromProperties;	// IMP=0x0000000100073c44
- (void)appendFileURL:(id)arg1 withBase:(id)arg2 toItems:(id)arg3;	// IMP=0x000000010007383c
- (void)validateAirDropItemsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100073240
- (_Bool)replaceFileURLsWithRealPaths;	// IMP=0x00000001000730a8
- (_Bool)splitOutFileURLs;	// IMP=0x0000000100072d14
- (id)realPathURL:(struct __CFURL *)arg1;	// IMP=0x0000000100072b6c
- (id)webURLFromInternetLocationFile:(id)arg1;	// IMP=0x0000000100072aa0
- (id)internetLocationFile:(struct __CFURL *)arg1;	// IMP=0x0000000100072924
- (id)temporaryWeblocURL:(struct __CFURL *)arg1;	// IMP=0x0000000100072740
- (void)startZipping;	// IMP=0x0000000100072664
- (void)sendRequest:(id)arg1;	// IMP=0x0000000100071ff8
- (id)discoverBodyDataInFormat:(long long)arg1;	// IMP=0x0000000100071f7c
- (id)askBodyDataInFormat:(long long)arg1;	// IMP=0x0000000100071c08
- (void)addHashesAndValidationRecordToRequest:(id)arg1;	// IMP=0x0000000100071aa4
- (void)bonjourResolverDidChange:(id)arg1;	// IMP=0x000000010007165c
- (void)fileZipper:(id)arg1 event:(long long)arg2 withProperty:(void *)arg3;	// IMP=0x00000001000714cc
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x0000000100071398
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100070ee8
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x0000000100070a9c
@property(readonly) struct __SecTrust *secTrustRef;
- (void)logInterfaceUsedForSending:(id)arg1;	// IMP=0x0000000100070a38
- (void)releasePeerToPeerIfPossible:(id)arg1;	// IMP=0x00000001000709b8
- (_Bool)connectionOverP2P:(struct __CFData *)arg1;	// IMP=0x0000000100070788
- (struct __SecKey *)copyReceiverPublicKey;	// IMP=0x0000000100070688
- (void)evaluateReceiverTrust:(struct __SecTrust *)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000704f0
- (void)didFail:(id)arg1;	// IMP=0x0000000100070250
- (_Bool)shouldCancelTransferForError:(id)arg1;	// IMP=0x0000000100070154
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000010007008c
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x000000010007000c
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x000000010006ff68
- (void)didFinishLoading;	// IMP=0x000000010006fce8
- (void)retryRequestForError:(id)arg1;	// IMP=0x000000010006fb1c
- (void)finishOperation;	// IMP=0x000000010006f6dc
- (void)notifyClientOfBytesCopied:(id)arg1 timeRemaining:(id)arg2;	// IMP=0x000000010006f580
- (_Bool)parseDiscoverResponse:(struct __CFError **)arg1;	// IMP=0x000000010006f3ac
- (_Bool)parseAskResponse:(struct __CFError **)arg1;	// IMP=0x000000010006f210
- (void)storeStringValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000010006f164
- (void)storeDataValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000010006f0b8
- (void)storePropertyValue:(void *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000010006efa0
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010006ef50
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010006e964
- (void)setSpotlightMetadata:(id)arg1;	// IMP=0x000000010006e960
- (id)whereFromInfo;	// IMP=0x000000010006e89c
- (void)didFinishSendingAskBodyData;	// IMP=0x000000010006e854
- (void)didStartSendingAskBodyData;	// IMP=0x000000010006e7c0
- (void)postNotificationForTransferStatus:(long long)arg1 progress:(double)arg2;	// IMP=0x000000010006e7bc
- (void)notifyClientForEvent:(long long)arg1 withProperty:(void *)arg2;	// IMP=0x000000010006e00c
- (void)releaseIdleSleepAssertion;	// IMP=0x000000010006defc
- (void)addBlockerInfo:(struct __CFDictionary *)arg1 toProperties:(struct __CFDictionary *)arg2;	// IMP=0x000000010006dd00
- (double)getTransferRate;	// IMP=0x000000010006dc78
- (void)createSession;	// IMP=0x000000010006d874
- (_Bool)requireAWDL;	// IMP=0x000000010006d828
- (void)removeObservers;	// IMP=0x000000010006d7d8
- (void)addObservers;	// IMP=0x000000010006d700
- (void)currentPeerChanged:(id)arg1;	// IMP=0x000000010006d674
- (void)legacyModeChanged:(id)arg1;	// IMP=0x000000010006d624
- (void)wirelessPowerChanged:(id)arg1;	// IMP=0x000000010006d5b4
- (void)systemWillSleep:(id)arg1;	// IMP=0x000000010006d564
- (void)dealloc;	// IMP=0x000000010006d478
- (id)initWithPerson:(struct __SFNode *)arg1 items:(id)arg2 forDiscovery:(_Bool)arg3;	// IMP=0x000000010006d084

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
