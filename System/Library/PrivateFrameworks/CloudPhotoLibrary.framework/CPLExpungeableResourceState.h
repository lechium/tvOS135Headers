/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CPLExpungeableResourceState : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _resourceType;
	unsigned long long _expungedState;
	NSDate* _expungedDate;

}

@property (assign,nonatomic) unsigned long long resourceType;               //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) unsigned long long expungedState;              //@synthesize expungedState=_expungedState - In the implementation block
@property (nonatomic,copy) NSDate * expungedDate;                           //@synthesize expungedDate=_expungedDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)normalizedExpungeableResourceStatesFromExpungeableResourceStates:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)resourceType;
-(void)setResourceType:(unsigned long long)arg1 ;
-(unsigned long long)expungedState;
-(void)setExpungedState:(unsigned long long)arg1 ;
-(NSDate *)expungedDate;
-(void)setExpungedDate:(NSDate *)arg1 ;
@end
