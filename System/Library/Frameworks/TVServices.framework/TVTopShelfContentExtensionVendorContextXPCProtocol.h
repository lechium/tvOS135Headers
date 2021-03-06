/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVTopShelfContentExtensionVendorContextXPCProtocol <NSObject>
@required
-(void)shutdown;
-(void)didSelectActionWithURL:(id)arg1 actionUserInfo:(id)arg2 forItemWithIdentifier:(id)arg3 itemUserInfo:(id)arg4;
-(void)didShowItemWithIdentifier:(id)arg1 userInfo:(id)arg2;
-(void)loadTopShelfContentAndDelegateFlags:(BOOL)arg1 replyHandler:(/*^block*/id)arg2;
-(void)performCustomActionWithURL:(id)arg1 actionUserInfo:(id)arg2 forItemWithIdentifier:(id)arg3 itemUserInfo:(id)arg4 replyHandler:(/*^block*/id)arg5;

@end

