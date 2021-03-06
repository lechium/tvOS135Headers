/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TimeSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSBonjourIPv4Address : NSObject <NSCopying> {

	unsigned char _linkLayerAddress[6];
	BOOL _hasLinkLayerAddress;
	unsigned _ipv4Address;

}

@property (assign,nonatomic) BOOL hasLinkLayerAddress;                    //@synthesize hasLinkLayerAddress=_hasLinkLayerAddress - In the implementation block
@property (nonatomic,readonly) unsigned ipv4Address;                      //@synthesize ipv4Address=_ipv4Address - In the implementation block
@property (nonatomic,readonly) const char* linkLayerAddress; 
+(BOOL)getLinkLayerAddress:(char*)arg1 forIPv4Address:(unsigned)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned)ipv4Address;
-(id)initWithIPv4Address:(unsigned)arg1 ;
-(BOOL)hasLinkLayerAddress;
-(void)setHasLinkLayerAddress:(BOOL)arg1 ;
-(const char*)linkLayerAddress;
-(BOOL)getLinkLayerAddressError:(id*)arg1 ;
@end

