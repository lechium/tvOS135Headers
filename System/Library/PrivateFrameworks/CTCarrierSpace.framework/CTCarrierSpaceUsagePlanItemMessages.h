/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCarrierSpaceUsagePlanItemMessages : NSObject <NSSecureCoding> {

	NSString* _capacity;
	NSString* _used;

}

@property (nonatomic,retain) NSString * capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,retain) NSString * used;                  //@synthesize used=_used - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)capacity;
-(void)setCapacity:(NSString *)arg1 ;
-(NSString *)used;
-(void)setUsed:(NSString *)arg1 ;
@end

