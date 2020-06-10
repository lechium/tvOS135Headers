/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface PLLibraryServicesStateNode : NSObject {

	unsigned _qos;
	long long _state;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) long long state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) unsigned qos;                                     //@synthesize qos=_qos - In the implementation block
-(id)description;
-(void)run;
-(long long)state;
-(unsigned)qos;
-(void)setQos:(unsigned)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)terminate;
-(id)initWithLibraryServicesState:(long long)arg1 qualityOfService:(unsigned)arg2 ;
@end

