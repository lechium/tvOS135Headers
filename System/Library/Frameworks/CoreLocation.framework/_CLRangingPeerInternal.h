/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _CLRangingPeerInternal : NSObject <NSCopying> {

	unsigned long long _macAddress;
	NSData* _secureRangingKeyID;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithMacAddressAsUInt:(unsigned long long)arg1 secureRangingKeyID:(id)arg2 ;
@end
