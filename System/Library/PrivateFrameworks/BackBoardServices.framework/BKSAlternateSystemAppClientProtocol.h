/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKSAlternateSystemAppClientProtocol <NSObject>
@required
-(void)didBlockSystemAppForAlternateSystemApp;
-(void)didUnblockSystemAppForAlternateSystemApp;
-(void)alternateSystemAppWithBundleID:(id)arg1 failedToOpenWithResult:(id)arg2;
-(void)alternateSystemAppWithBundleID:(id)arg1 didExitWithContext:(id)arg2;
-(void)alternateSystemAppWithBundleIDDidOpen:(id)arg1;
-(void)alternateSystemAppWithBundleIDDidTerminate:(id)arg1;

@end
