/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval, NSData;

@interface SPBeaconingKey : NSObject <NSCopying, NSSecureCoding> {

	NSDateInterval* _dateInterval;
	NSData* _key;
	NSData* _secondaryKey;
	unsigned long long _primaryIndex;
	unsigned long long _secondaryIndex;

}

@property (nonatomic,copy) NSDateInterval * dateInterval;                    //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy) NSData * key;                                     //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSData * secondaryKey;                            //@synthesize secondaryKey=_secondaryKey - In the implementation block
@property (assign,nonatomic) unsigned long long primaryIndex;                //@synthesize primaryIndex=_primaryIndex - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryIndex;              //@synthesize secondaryIndex=_secondaryIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setKey:(NSData *)arg1 ;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(unsigned long long)primaryIndex;
-(unsigned long long)secondaryIndex;
-(void)setPrimaryIndex:(unsigned long long)arg1 ;
-(void)setSecondaryIndex:(unsigned long long)arg1 ;
-(NSData *)secondaryKey;
-(id)initWithDateInterval:(id)arg1 key:(id)arg2 secondaryKey:(id)arg3 primaryIndex:(unsigned long long)arg4 secondaryIndex:(unsigned long long)arg5 ;
-(id)initWithDateInterval:(id)arg1 key:(id)arg2 ;
-(void)setSecondaryKey:(NSData *)arg1 ;
@end

