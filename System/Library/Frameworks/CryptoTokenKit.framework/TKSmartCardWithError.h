/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKSmartCard.h>

@class TKSmartCard, NSError;

@interface TKSmartCardWithError : TKSmartCard {

	TKSmartCard* _parentCard;
	NSError* _error;

}
-(void)transmitRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)beginSessionWithReply:(/*^block*/id)arg1 ;
-(id)initWithCard:(id)arg1 error:(id)arg2 ;
@end

