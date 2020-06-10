/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, RBSProcessIdentity;

@interface RBLaunchdJobLabel : NSObject <NSCopying> {

	NSString* _prefix;
	RBSProcessIdentity* _identity;
	unsigned short _seed;
	NSString* _stringRepresentation;

}

@property (nonatomic,copy,readonly) NSString * prefix;                            //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessIdentity * identity;                //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) unsigned short seed;                               //@synthesize seed=_seed - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringRepresentation;              //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
+(BOOL)mayMatchStringRepresentation:(id)arg1 ;
+(id)newLabelWithIdentity:(id)arg1 ;
+(id)labelFromStringRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(RBSProcessIdentity *)identity;
-(unsigned short)seed;
-(NSString *)stringRepresentation;
-(NSString *)prefix;
-(id)_initWithPrefix:(id)arg1 identity:(id)arg2 seed:(unsigned short)arg3 ;
-(id)_initWithDaemonIdentity:(id)arg1 ;
@end
