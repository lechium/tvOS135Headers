/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DEDAnalytics : NSObject
+(id)log;
+(void)finisherDidCompleteWithDuration:(unsigned long long)arg1 uploadedByteCount:(unsigned long long)arg2 usingFinishingMove:(long long)arg3 withState:(long long)arg4 ;
+(void)didCompleteBugSessionWithState:(long long)arg1 ;
+(void)finisherDidStartWithFileCount:(unsigned long long)arg1 expectedByteUploadCount:(unsigned long long)arg2 finishingMove:(long long)arg3 ;
+(void)didCreateBugSessionForApp:(id)arg1 ;
+(void)didStartDaemon;
+(void)extensionDidScheduleExtensionWithIdentifier:(id)arg1 delay:(unsigned long long)arg2 ;
+(void)didStartExtensionWithIdentifier:(id)arg1 ;
+(void)extensionWithIdentifier:(id)arg1 didCompleteWithFileCount:(unsigned long long)arg2 bytesCollected:(unsigned long long)arg3 duration:(unsigned long long)arg4 errorCode:(long long)arg5 ;
+(void)didCheckInDeferredExtensionsWithCount:(unsigned long long)arg1 ;
@end
