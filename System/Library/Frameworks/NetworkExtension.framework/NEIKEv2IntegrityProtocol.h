/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEIKEv2IntegrityProtocol : NSObject <NSCopying> {

	unsigned long long _type;

}

@property (readonly) unsigned keyLength; 
@property (readonly) unsigned digestLength; 
@property (assign) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(unsigned)digestLength;
-(unsigned)keyLength;
@end

