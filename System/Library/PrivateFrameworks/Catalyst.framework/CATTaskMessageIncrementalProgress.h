/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskMessage.h>

@interface CATTaskMessageIncrementalProgress : CATTaskMessage {

	long long _completedUnitCount;
	long long _totalUnitCount;

}

@property (assign,nonatomic) long long completedUnitCount;              //@synthesize completedUnitCount=_completedUnitCount - In the implementation block
@property (assign,nonatomic) long long totalUnitCount;                  //@synthesize totalUnitCount=_totalUnitCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(long long)totalUnitCount;
-(long long)completedUnitCount;
-(id)initWithTaskUUID:(id)arg1 completedUnitCount:(long long)arg2 totalUnitCount:(long long)arg3 ;
@end

