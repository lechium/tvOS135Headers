/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CHTransaction : NSObject <NSSecureCoding> {

	unsigned long long _transactionType;
	NSData* _record;

}

@property (nonatomic,readonly) unsigned long long transactionType;              //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,readonly) NSData * record;                                 //@synthesize record=_record - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
+(id)toString:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)transactionType;
-(NSData *)record;
-(id)archivedDataWithError:(id*)arg1 ;
-(id)initWithType:(unsigned long long)arg1 andRecord:(id)arg2 ;
-(BOOL)isEqualToTransaction:(id)arg1 ;
-(id)initWithString:(id)arg1 andRecord:(id)arg2 ;
@end

