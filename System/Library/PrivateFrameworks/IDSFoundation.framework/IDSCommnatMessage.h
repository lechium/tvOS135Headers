/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@interface IDSCommnatMessage : NSObject {

	unsigned long long _type;
	unsigned _nonce;
	sockaddr_storage _local;
	sockaddr_storage _external;
	unsigned long long _status;
	double _startTime;

}

@property (assign,nonatomic) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned nonce;                         //@synthesize nonce=_nonce - In the implementation block
@property (assign,nonatomic) unsigned long long status;              //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double startTime;                       //@synthesize startTime=_startTime - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned)nonce;
-(void)setNonce:(unsigned)arg1 ;
-(const sockaddr*)local;
-(const sockaddr*)external;
-(BOOL)write:(char*)arg1 outputLength:(int*)arg2 ;
-(BOOL)read:(char*)arg1 inputLength:(int)arg2 ;
-(id)initWithType:(unsigned long long)arg1 localAddress:(sockaddr*)arg2 ;
@end

