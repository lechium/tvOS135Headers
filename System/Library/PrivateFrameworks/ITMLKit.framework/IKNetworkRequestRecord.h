/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IKNetworkRequestRecord <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) long long resourceType; 
@property (nonatomic,readonly) long long initiatorType; 
@property (nonatomic,readonly) long long state; 
@required
-(NSString *)identifier;
-(long long)state;
-(long long)resourceType;
-(void)didReceiveData:(id)arg1;
-(void)didFailWithError:(id)arg1;
-(long long)initiatorType;
-(void)willSendRequest:(id)arg1 redirectResponse:(id)arg2;
-(void)didCompleteLoadingFromCache:(long long)arg1 mimeType:(id)arg2 withResponseBody:(id)arg3;
-(void)didCompleteLoadingFromCache:(long long)arg1 withResponseBodyBlock:(/*^block*/id)arg2;
-(void)willSendRequest:(id)arg1;
-(void)didReceiveResponse:(id)arg1 timingData:(id)arg2;
-(void)didCompleteLoadingFromMemoryWithRequest:(id)arg1 response:(id)arg2 withResponseBodyBlock:(/*^block*/id)arg3;
-(void)didCompleteLoadingWithResponseBody:(id)arg1;

@end

