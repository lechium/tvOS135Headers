/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFFetchLimits : NSObject {

	unsigned long long _fetchMinBytes;
	unsigned long long _fetchMaxBytes;
	unsigned long long _minBytesLeft;

}

@property (assign,nonatomic) unsigned long long fetchMinBytes;              //@synthesize fetchMinBytes=_fetchMinBytes - In the implementation block
@property (assign,nonatomic) unsigned long long fetchMaxBytes;              //@synthesize fetchMaxBytes=_fetchMaxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long minBytesLeft;               //@synthesize minBytesLeft=_minBytesLeft - In the implementation block
-(id)description;
-(id)init;
-(unsigned long long)fetchMaxBytes;
-(void)setFetchMaxBytes:(unsigned long long)arg1 ;
-(unsigned long long)fetchMinBytes;
-(void)setFetchMinBytes:(unsigned long long)arg1 ;
-(unsigned long long)minBytesLeft;
-(void)setMinBytesLeft:(unsigned long long)arg1 ;
@end

