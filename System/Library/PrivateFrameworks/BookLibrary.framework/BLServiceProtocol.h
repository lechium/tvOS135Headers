/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLServiceProtocol
@required
-(void)fetchDownloadListWithReply:(/*^block*/id)arg1;
-(void)fetchDownloadFromDownloadID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)pauseDownloadWithID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)resumeDownloadWithID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)cancelDownloadWithID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)cancelAllActiveDownloadsWithReply:(/*^block*/id)arg1;
-(void)purchaseWithRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(void)downloadWithPermlink:(id)arg1 title:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestDownloadWithParameters:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestDownloadWithMetadata:(id)arg1 isRestore:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)requestDownloadsWithMetadata:(id)arg1 areRestore:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)setValueSimulateCrashAtInstallStart:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)setValueSimulateCrashAtInstallDuringDecrypt:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)setValueSimulateCrashAtInstallDuringUnzip:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)setValueSimulateCrashAtInstallDuringFinish:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)getCrashSimulationOverrideValuesWithReply:(/*^block*/id)arg1;
-(void)resetAllCrashSimulationOverridesWithReply:(/*^block*/id)arg1;
-(void)setValueSimulateDeviceOutOfSpace:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)getValueSimulateDeviceOutOfSpaceWithReply:(/*^block*/id)arg1;

@end

