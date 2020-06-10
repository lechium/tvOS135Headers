/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _TVRCRapportDeviceRecord : NSObject {

	NSString* _ids;
	unsigned long long _transports;

}

@property (nonatomic,copy) NSString * ids;                               //@synthesize ids=_ids - In the implementation block
@property (assign,nonatomic) unsigned long long transports;              //@synthesize transports=_transports - In the implementation block
-(id)description;
-(NSString *)ids;
-(unsigned long long)transports;
-(void)setTransports:(unsigned long long)arg1 ;
-(void)setIds:(NSString *)arg1 ;
-(id)initWithIDS:(id)arg1 ;
-(BOOL)hasAvailableTransports;
@end
