/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface TVRMSDAAPEncoder : NSObject {

	NSMutableData* _data;

}

@property (nonatomic,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
-(id)init;
-(NSData *)data;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forCode:(unsigned)arg3 ;
-(void)encodeInt32:(int)arg1 forCode:(unsigned)arg2 ;
-(void)encodeInt64:(long long)arg1 forCode:(unsigned)arg2 ;
-(void)encodeString:(id)arg1 forCode:(unsigned)arg2 ;
-(void)encodeData:(id)arg1 forCode:(unsigned)arg2 ;
@end
