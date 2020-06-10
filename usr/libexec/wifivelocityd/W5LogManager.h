//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableArray, NSMutableDictionary, NSMutableString, NSString, W5DiagnosticsManager, W5LogItemRequestInternal, W5StatusManager;
@protocol OS_dispatch_queue;

@interface W5LogManager : NSObject
{
    W5StatusManager *_status;	// 8 = 0x8
    W5DiagnosticsManager *_diagnostics;	// 16 = 0x10
    NSString *_model;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSMutableArray *_pendingRequests;	// 40 = 0x28
    W5LogItemRequestInternal *_activeRequest;	// 48 = 0x30
    NSDateFormatter *_dateFormatter;	// 56 = 0x38
    NSMutableDictionary *_taskUUIDMap;	// 64 = 0x40
    NSMutableDictionary *_urlUUIDMap;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_debugLogQueue;	// 80 = 0x50
    NSMutableString *_debugLog;	// 88 = 0x58
    NSMutableDictionary *_missingLogItemMap;	// 96 = 0x60
    struct __IOReportSubscriptionCF *_ioReportSubscription;	// 104 = 0x68
    unsigned long long _ioReportBaseMachAbsoluteTime;	// 112 = 0x70
    unsigned long long _ioReportDeltaMachAbsoluteTime;	// 120 = 0x78
    struct __CFDictionary *_ioReportChannels;	// 128 = 0x80
    struct __CFDictionary *_ioReportBase;	// 136 = 0x88
    struct __CFDictionary *_ioReportDelta;	// 144 = 0x90
    NSMutableDictionary *_leewayUUIDMap;	// 152 = 0x98
    NSMutableDictionary *_timestampUUIDMap;	// 160 = 0xa0
    NSMutableDictionary *_cachedSysdiagnoseURLMap;	// 168 = 0xa8
    CDUnknownBlockType _collectedItemCallback;	// 176 = 0xb0
    CDUnknownBlockType _collectLogItemCallback;	// 184 = 0xb8
    CDUnknownBlockType _pingCallback;	// 192 = 0xc0
}

+ (id)__temporaryDirectory;	// IMP=0x0000000100086034
+ (void)__parsePingOutput:(id)arg1 result:(id)arg2;	// IMP=0x0000000100084f70
+ (id)__logAWDLInfoWithAWDLInterface:(id)arg1 awdlStatus:(id)arg2;	// IMP=0x0000000100082744
+ (id)__logBluetoothStatus:(id)arg1;	// IMP=0x000000010008201c
+ (id)__logWiFiStatus:(id)arg1;	// IMP=0x00000001000811b8
+ (id)__logNetworkStatus:(id)arg1;	// IMP=0x0000000100080cec
+ (id)__logTxPower:(struct apple80211_per_chain_power_data_get)arg1;	// IMP=0x0000000100080c20
+ (id)__logBTCProfile:(struct apple80211_btc_profile_osx)arg1;	// IMP=0x0000000100080898
+ (id)__logScanResults:(id)arg1;	// IMP=0x000000010007fedc
+ (id)__descriptionForNetwork:(id)arg1;	// IMP=0x000000010007fbb4
@property(copy, nonatomic) CDUnknownBlockType pingCallback; // @synthesize pingCallback=_pingCallback;
@property(copy, nonatomic) CDUnknownBlockType collectLogItemCallback; // @synthesize collectLogItemCallback=_collectLogItemCallback;
@property(copy, nonatomic) CDUnknownBlockType collectedItemCallback; // @synthesize collectedItemCallback=_collectedItemCallback;
- (void)__dumpCoreCaptureLogsWithReason:(id)arg1 component:(id)arg2;	// IMP=0x0000000100085ed0
- (_Bool)__wlCLIWithArguments:(id)arg1 outputFilePath:(id)arg2 outputData:(id)arg3;	// IMP=0x0000000100085e20
- (void)__wlCLIWithArguments:(id)arg1 outputFileHandle:(id)arg2 addCommand:(_Bool)arg3 addTimestamps:(_Bool)arg4;	// IMP=0x0000000100085cac
- (void)__wlCLIWithArguments:(id)arg1 outputFileHandle:(id)arg2;	// IMP=0x0000000100085c98
- (void)__runToolWithOutputFileHandle:(id)arg1 readFromStandardError:(_Bool)arg2 launchPath:(id)arg3 arguments:(id)arg4 addCommand:(_Bool)arg5 addTimestamps:(_Bool)arg6;	// IMP=0x00000001000852a4
- (void)__runToolWithOutputFileHandle:(id)arg1 launchPath:(id)arg2 arguments:(id)arg3;	// IMP=0x0000000100085284
- (id)__pingUsingIMFoundationWithAddress:(id)arg1 timeout:(long long)arg2;	// IMP=0x0000000100084a94
- (id)__pingUsingCFNetworkWithAddress:(id)arg1 count:(long long)arg2 timeout:(long long)arg3 trafficClass:(id)arg4 networkServiceType:(id)arg5;	// IMP=0x00000001000844a4
- (id)__ping6WithAddress:(id)arg1 count:(long long)arg2 wait:(double)arg3 trafficClass:(id)arg4 interfaceName:(id)arg5 dataLength:(unsigned long long)arg6;	// IMP=0x0000000100083ff4
- (id)__pingWithAddress:(id)arg1 count:(long long)arg2 timeout:(double)arg3 wait:(double)arg4 interval:(double)arg5 trafficClass:(id)arg6 interfaceName:(id)arg7 dataLength:(unsigned long long)arg8;	// IMP=0x0000000100083a78
- (id)__logDiagnosticsTestResults:(id)arg1;	// IMP=0x0000000100080654
- (id)__logDiagnosticsPingResults:(id)arg1;	// IMP=0x000000010008020c
- (id)__runDiagnosticsTests:(id)arg1 configuration:(id)arg2 timeout:(long long)arg3 error:(id *)arg4;	// IMP=0x000000010007f628
- (id)__collectIndividual:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007e4b8
- (id)__collectLogItem:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007d7f0
- (id)__collectDatapathStats:(id)arg1;	// IMP=0x000000010007d124
- (id)__collect3barsCache:(id)arg1;	// IMP=0x000000010007cebc
- (id)__collectWiFiPerfLogs:(id)arg1;	// IMP=0x000000010007cc48
- (id)__collectWiFiDeviceConfig:(id)arg1;	// IMP=0x000000010007b7b4
- (id)__collectWiFiMemoryUsage:(id)arg1;	// IMP=0x000000010007b27c
- (id)__collectPreviouslyCollected:(id)arg1;	// IMP=0x000000010007ae60
- (id)__collectWiFiStatsCLI:(id)arg1;	// IMP=0x000000010007ab80
- (id)__collectWiFiStatsPost:(id)arg1;	// IMP=0x000000010007a7f4
- (id)__collectWiFiStatsPre:(id)arg1;	// IMP=0x000000010007a730
- (void)__setupWiFiStats;	// IMP=0x000000010007a238
- (void)__teardownWiFiStats;	// IMP=0x000000010007a1d8
- (void)__startWiFiStats;	// IMP=0x000000010007a188
- (void)__endWiFiStats;	// IMP=0x000000010007a108
- (id)__collect_mobilewifitool:(id)arg1;	// IMP=0x0000000100079e70
- (id)__collect_security:(id)arg1;	// IMP=0x0000000100079b7c
- (id)__collectMultiple:(id)arg1;	// IMP=0x0000000100078e1c
- (id)__collectAdditionalLog:(id)arg1 url:(id)arg2;	// IMP=0x0000000100078c50
- (id)__collectEventHistory:(id)arg1;	// IMP=0x0000000100077ddc
- (id)__collectCrashesAndSpins24:(id)arg1;	// IMP=0x00000001000778ac
- (id)__collectBluetoothLogs:(id)arg1;	// IMP=0x00000001000775d0
- (id)__collectSharingLogs:(id)arg1;	// IMP=0x00000001000773e0
- (id)__collectWirelessProxLogs:(id)arg1;	// IMP=0x0000000100077248
- (id)__collectAirPlayLogs:(id)arg1;	// IMP=0x0000000100076f74
- (id)__collectSystemLogs24:(id)arg1;	// IMP=0x0000000100076eb4
- (id)__collectWiFiVelocityLog:(id)arg1;	// IMP=0x0000000100076b7c
- (id)__collectSystemLogs:(id)arg1;	// IMP=0x0000000100076760
- (id)__collectIPConfigurationLogs:(id)arg1;	// IMP=0x000000010007648c
- (id)__collectEAP8021XLogs:(id)arg1;	// IMP=0x000000010007612c
- (id)__collectWiFiLogsDump:(id)arg1;	// IMP=0x0000000100076088
- (id)__collectWiFiLogs:(id)arg1;	// IMP=0x0000000100075c6c
- (id)__collectWiFiLogs24:(id)arg1;	// IMP=0x0000000100075920
- (id)__collectFilteredWiFiManagerLogArchiveWithOutputURL:(id)arg1 compress:(_Bool)arg2 age:(unsigned long long)arg3;	// IMP=0x0000000100075740
- (void)__dumpWiFiLogs;	// IMP=0x00000001000756cc
- (id)__possibleTempWiFiLogPaths;	// IMP=0x000000010007567c
- (id)__collectNetworkPreferences:(id)arg1;	// IMP=0x00000001000754e4
- (id)__collectWiFiPreferences:(id)arg1;	// IMP=0x00000001000751c8
- (id)__collectCoreCapture24:(id)arg1;	// IMP=0x0000000100074dc0
- (id)__collectCoreCapture:(id)arg1;	// IMP=0x0000000100074918
- (id)__collectCoreCaptureDump:(id)arg1;	// IMP=0x0000000100074804
- (void)__filterCoreCaptureContent:(id)arg1;	// IMP=0x0000000100074530
- (id)__possibleCoreCapturePathsWithComponent:(id)arg1;	// IMP=0x000000010007440c
- (id)__mostRecentInDirectories:(id)arg1 matchingPrefix:(id)arg2 matchingSuffix:(id)arg3 excludingPrefix:(id)arg4 excludingSuffix:(id)arg5 maxAge:(double)arg6;	// IMP=0x0000000100073fb4
- (id)__mostRecentInDirectories:(id)arg1 include:(id)arg2 exclude:(id)arg3 maxAge:(double)arg4;	// IMP=0x0000000100073b5c
- (id)__collectFileAtURL:(id)arg1 outputDirectory:(id)arg2 maxAge:(double)arg3 maxSize:(unsigned long long)arg4 compress:(_Bool)arg5 remainingSize:(unsigned long long *)arg6;	// IMP=0x0000000100073884
- (id)__collectFilesInDirectories:(id)arg1 include:(id)arg2 exclude:(id)arg3 maxAge:(double)arg4 maxCount:(unsigned long long)arg5 maxSize:(unsigned long long)arg6 outputDirectory:(id)arg7 compress:(_Bool)arg8 remainingSize:(unsigned long long *)arg9 contentFilter:(CDUnknownBlockType)arg10;	// IMP=0x00000001000733ac
- (unsigned long long)__calculateSizeAtPath:(id)arg1;	// IMP=0x000000010007307c
- (id)__collect_pmset:(id)arg1;	// IMP=0x0000000100072ea4
- (id)__collectTCPDump_POST:(id)arg1;	// IMP=0x0000000100072c1c
- (id)__collectTCPDump_PRE:(id)arg1;	// IMP=0x0000000100072654
- (id)__collect_ndp:(id)arg1;	// IMP=0x0000000100072320
- (id)__collect_sysdiagnose:(id)arg1;	// IMP=0x0000000100071df4
- (id)__collect_hosts:(id)arg1;	// IMP=0x0000000100071c60
- (id)__collect_darwinup:(id)arg1;	// IMP=0x0000000100071a7c
- (id)__collect_spindump:(id)arg1;	// IMP=0x0000000100071818
- (id)__collect_wl_cca_get_stats:(id)arg1;	// IMP=0x000000010007165c
- (id)__collect_wl_curpower:(id)arg1;	// IMP=0x00000001000714a0
- (id)__collect_configd:(id)arg1;	// IMP=0x00000001000712cc
- (id)__collectSystemConfiguration:(id)arg1;	// IMP=0x0000000100071138
- (id)__collect_netstat:(id)arg1;	// IMP=0x0000000100070d50
- (id)__collect_top:(id)arg1;	// IMP=0x0000000100070b60
- (id)__collect_ioreg:(id)arg1;	// IMP=0x0000000100070970
- (id)__collect_kextstat:(id)arg1;	// IMP=0x00000001000707e8
- (id)__collect_traceroute:(id)arg1;	// IMP=0x000000010007058c
- (id)__collect_ipconfig:(id)arg1;	// IMP=0x00000001000703a0
- (id)__collect_ifconfig:(id)arg1;	// IMP=0x0000000100070128
- (id)__collect_CFNetworkPing:(id)arg1;	// IMP=0x000000010006f36c
- (id)__collect_ping:(id)arg1;	// IMP=0x000000010006dec0
- (id)__collect_IMFoundationPing:(id)arg1;	// IMP=0x000000010006d718
- (id)__collectLogItemCallout:(id)arg1 baseURL:(id *)arg2 error:(id *)arg3;	// IMP=0x000000010006d43c
- (id)__collectNearby:(id)arg1;	// IMP=0x000000010006d0b8
- (id)__collectSystemProfiler:(id)arg1;	// IMP=0x000000010006cef4
- (id)__collect_arp:(id)arg1;	// IMP=0x000000010006ccb0
- (id)__collect_swvers:(id)arg1;	// IMP=0x000000010006cb28
- (id)__collectBluetoothStatus:(id)arg1;	// IMP=0x000000010006c868
- (id)__collectWiFiStatus:(id)arg1;	// IMP=0x000000010006c5a8
- (id)__collectNetworkStatus:(id)arg1;	// IMP=0x000000010006c2e8
- (id)__collectAWDLStatus:(id)arg1;	// IMP=0x000000010006bf58
- (id)__collectBonjourRecords:(id)arg1;	// IMP=0x000000010006ba98
- (id)__resolveBonjourInstance:(id)arg1 serviceType:(id)arg2 duration:(unsigned long long)arg3;	// IMP=0x000000010006b974
- (id)__browseBonjourInstancesWithServiceType:(id)arg1 duration:(unsigned long long)arg2;	// IMP=0x000000010006b6cc
- (id)__collectLeakyAPStats:(id)arg1;	// IMP=0x000000010006b470
- (id)__collectPerSSIDDiagnosticsHistory:(id)arg1;	// IMP=0x000000010006b064
- (id)__collectDiagnostics:(id)arg1;	// IMP=0x000000010006ace4
- (id)__collectWiFiScanResults:(id)arg1;	// IMP=0x000000010006aa8c
- (void)__runRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000693f8
- (id)__expandLogItems:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000100069020
- (id)__basicWiFiLogsWithFilteredContent:(_Bool)arg1;	// IMP=0x000000010006843c
- (id)__model;	// IMP=0x0000000100068348
- (id)__logItemsForBTSysdiagnoseWithFilteredContent:(_Bool)arg1;	// IMP=0x0000000100067c10
- (id)__logItemsForSysdiagnoseWithNoTimeoutAndFilteredContent:(_Bool)arg1;	// IMP=0x0000000100066814
- (id)__logItemsForSysdiagnoseWithFilteredContent:(_Bool)arg1;	// IMP=0x0000000100064cc8
- (id)__fastConnectivityDiagnosticsLogItemWithTimeout:(double)arg1;	// IMP=0x0000000100064ba0
- (id)__connectivityDiagnosticsLogItemWithTimeout:(double)arg1;	// IMP=0x0000000100063d9c
- (id)__environmentDiagnosticsLogItemWithTimeout:(double)arg1;	// IMP=0x0000000100063ab4
- (id)__configurationDiagnosticsLogItemWithTimeout:(double)arg1;	// IMP=0x0000000100063504
- (id)__concurrentConnectivityDiagnosticsTest;	// IMP=0x0000000100062774
- (id)__logItemsForInternalWiFiSettings;	// IMP=0x0000000100062768
- (id)__logItemsForTapToRadar;	// IMP=0x000000010006275c
- (id)__logItemsForFeedbackAssistant;	// IMP=0x0000000100062750
- (id)__logItemsForWiFiDiagnosticsExtension;	// IMP=0x00000001000613d8
- (id)__logItemsForWiFiDiagnosticsApp;	// IMP=0x0000000100061288
- (id)__logItemsForDatapathStallEventWithFilteredContent:(_Bool)arg1;	// IMP=0x00000001000606fc
- (id)__logItemsForBackgroundEventWithReason:(id)arg1 filteredContent:(_Bool)arg2;	// IMP=0x0000000100060118
- (id)__logItemsForABCWithReason:(id)arg1 filteredContent:(_Bool)arg2;	// IMP=0x000000010006010c
- (id)__logItemsForDumpLogsEventWithReason:(id)arg1 filteredContent:(_Bool)arg2;	// IMP=0x000000010005f94c
- (void)__nextRequest;	// IMP=0x000000010005ef58
- (void)__purgeFilesInDirectory:(id)arg1 matching:(id)arg2 maxAge:(unsigned long long)arg3 maxCount:(unsigned long long)arg4;	// IMP=0x000000010005eb04
- (id)__pendingRequestWithUUID:(id)arg1;	// IMP=0x000000010005e9c4
- (void)teardownAndNotify:(CDUnknownBlockType)arg1;	// IMP=0x000000010005e800
- (void)cancelRequestWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010005e5d0
- (void)addRequest:(id)arg1;	// IMP=0x000000010005d824
- (void)__replyWithCachedSysdiagnoseContentForRequest:(id)arg1 temporaryURL:(id)arg2;	// IMP=0x000000010005d480
- (void)dealloc;	// IMP=0x000000010005d0e4
- (id)initWithStatusManager:(id)arg1 diagnosticsManager:(id)arg2;	// IMP=0x000000010005cf3c

@end

