/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;
@class ACAccount, NSData;

@interface AMSAnisetteProvisionTask : AMSTask {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSData* _data;
	long long _type;

}

@property (nonatomic,readonly) ACAccount * account;                 //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
-(long long)type;
-(NSData *)data;
-(ACAccount *)account;
-(id<AMSBagProtocol>)bag;
-(id)initWithData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4 ;
-(id)performProvisioning;
-(id)_startProvisioningWithOutputSessionID:(unsigned*)arg1 error:(id*)arg2 ;
-(id)_createFinishProvisioningRequestWithClientData:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processFinishProvisioningResult:(id)arg1 sessionID:(unsigned)arg2 error:(id*)arg3 ;
@end

