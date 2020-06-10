/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMCharacteristicRequest, NSError;

@interface HMCharacteristicResponse : NSObject {

	HMCharacteristicRequest* _request;
	NSError* _error;

}

@property (nonatomic,retain) HMCharacteristicRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSError * error;                              //@synthesize error=_error - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSError *)error;
-(HMCharacteristicRequest *)request;
-(void)setRequest:(HMCharacteristicRequest *)arg1 ;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
@end
