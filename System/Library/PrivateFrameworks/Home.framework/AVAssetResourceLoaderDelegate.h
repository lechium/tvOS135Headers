/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAssetResourceLoaderDelegate <NSObject>
@optional
-(void)resourceLoader:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;
-(void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;

@end

