/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSMediaTask, AMSBag, NSString;

@interface WFMediaSessionManager : NSObject {

	AMSMediaTask* _task;
	AMSBag* _bag;
	NSString* _clientIdentifier;
	NSString* _clientVersion;

}

@property (nonatomic,readonly) AMSMediaTask * task;                           //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) AMSBag * bag;                                  //@synthesize bag=_bag - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientVersion;                 //@synthesize clientVersion=_clientVersion - In the implementation block
-(id)init;
-(AMSMediaTask *)task;
-(NSString *)clientIdentifier;
-(AMSBag *)bag;
-(NSString *)clientVersion;
-(id)initWithClientIdentifier:(id)arg1 clientVersion:(id)arg2 ;
-(void)lookupMediaType:(long long)arg1 withIdentifiers:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

