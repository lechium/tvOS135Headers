/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NEIKEv2VendorData : NSObject <NSCopying> {

	NSData* _vendorData;

}

@property (retain) NSData * vendorData;              //@synthesize vendorData=_vendorData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)vendorData;
-(void)setVendorData:(NSData *)arg1 ;
@end

