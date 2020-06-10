/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _LSDOpenProtocol
@required
-(void)openURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)openApplicationWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)openUserActivityWithUniqueIdentifier:(id)arg1 activityData:(id)arg2 activityType:(id)arg3 bundleIdentifier:(id)arg4 options:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)performOpenOperationWithURL:(id)arg1 applicationIdentifier:(id)arg2 documentIdentifier:(id)arg3 isContentManaged:(BOOL)arg4 sourceAuditToken:(const SCD_Struct_LS11*)arg5 userInfo:(id)arg6 options:(id)arg7 delegate:(id)arg8 completionHandler:(/*^block*/id)arg9;
-(void)failedToOpenApplication:(id)arg1 withURL:(id)arg2;
-(void)canOpenURL:(id)arg1 publicSchemes:(BOOL)arg2 privateSchemes:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)resolveAppLinksForURL:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)openAppLink:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getURLOverrideForURL:(id)arg1 newsOnly:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getiCloudHostNamesWithCompletionHandler:(/*^block*/id)arg1;

@end

