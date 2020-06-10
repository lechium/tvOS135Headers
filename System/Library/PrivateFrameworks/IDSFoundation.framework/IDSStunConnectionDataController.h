/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IDSStunConnectionDataController : NSObject {

	NSMutableDictionary* _tokenToConnectionData;
	NSMutableDictionary* _tokenToDeliveryStatus;

}
+(id)sharedInstance;
-(id)dataFromCandidates:(id)arg1 token:(id)arg2 ;
-(unsigned long long)deliveryStatus:(id)arg1 ;
-(void)setDeliveryStatus:(id)arg1 status:(unsigned long long)arg2 ;
-(id)candidatesFromData:(id)arg1 token:(id)arg2 ;
-(void)removeData:(id)arg1 ;
@end

