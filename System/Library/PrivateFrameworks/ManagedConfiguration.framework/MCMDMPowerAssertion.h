/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPowerAssertion.h>

@class NSString, NSDate;

@interface MCMDMPowerAssertion : MCPowerAssertion {

	NSString* _reason;
	NSDate* _creationDate;

}

@property (nonatomic,readonly) NSString * reason;                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
+(id)_dateFormatter;
+(id)_currentAssertions;
+(id)assertionDescriptions;
-(id)description;
-(void)dealloc;
-(NSString *)reason;
-(NSDate *)creationDate;
-(id)initWithReason:(id)arg1 ;
@end
