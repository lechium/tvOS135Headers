/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSTimeErrorValue : NSObject {

	unsigned long long _timestamp;
	long long _error;

}

@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long error;                           //@synthesize error=_error - In the implementation block
+(id)timeErrorSequenceWithTimestamps:(unsigned long long*)arg1 timeError:(long long*)arg2 count:(long long)arg3 ;
-(id)description;
-(long long)error;
-(unsigned long long)timestamp;
-(id)initWithTimestamp:(unsigned long long)arg1 andError:(long long)arg2 ;
@end

