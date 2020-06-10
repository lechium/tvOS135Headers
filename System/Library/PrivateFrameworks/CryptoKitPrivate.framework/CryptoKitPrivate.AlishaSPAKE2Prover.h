/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CryptoKitPrivate.framework/CryptoKitPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CryptoKitPrivate.AlishaSPAKE2Prover : NSObject {

	 spakeCtxData;
	 aad;
	 X;
	 z0_self;
	 z1_self;

}
-(id)init;
-(id)initWithPassword:(id)arg1 salt:(id)arg2 authenticatedData:(id)arg3 keyDerivationCost:(unsigned long long)arg4 ;
-(id)getX;
-(id)processResponseWithY:(id)arg1 M1:(id)arg2 ;
@end

