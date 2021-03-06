/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>

@interface SSVDownloadQueueRequest : SSRequest {

	long long _queueType;

}

@property (nonatomic,readonly) long long queueType;              //@synthesize queueType=_queueType - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithQueueType:(long long)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(long long)queueType;
@end

