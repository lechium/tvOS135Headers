/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Proximity/Proximity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PRChipInfo : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _prodMode;
	unsigned char _secureMode;
	unsigned char _securityDomain;
	unsigned short _chipID;
	unsigned short _boardID;
	unsigned _bootMode;
	unsigned long long _ECID;

}

@property (nonatomic,readonly) unsigned long long ECID;                   //@synthesize ECID=_ECID - In the implementation block
@property (nonatomic,readonly) unsigned short chipID;                     //@synthesize chipID=_chipID - In the implementation block
@property (nonatomic,readonly) unsigned short boardID;                    //@synthesize boardID=_boardID - In the implementation block
@property (nonatomic,readonly) unsigned bootMode;                         //@synthesize bootMode=_bootMode - In the implementation block
@property (nonatomic,readonly) unsigned char prodMode;                    //@synthesize prodMode=_prodMode - In the implementation block
@property (nonatomic,readonly) unsigned char secureMode;                  //@synthesize secureMode=_secureMode - In the implementation block
@property (nonatomic,readonly) unsigned char securityDomain;              //@synthesize securityDomain=_securityDomain - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)chipID;
-(unsigned short)boardID;
-(unsigned char)securityDomain;
-(id)initWithECID:(unsigned long long)arg1 chipID:(unsigned short)arg2 boardID:(unsigned short)arg3 bootMode:(unsigned)arg4 prodMode:(unsigned char)arg5 secureMode:(unsigned char)arg6 securityDomain:(unsigned char)arg7 ;
-(unsigned long long)ECID;
-(unsigned)bootMode;
-(unsigned char)prodMode;
-(unsigned char)secureMode;
@end
