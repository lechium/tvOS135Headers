/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString, BSMachPortReceiveRight;

@interface SBSAssertion : NSObject <BSInvalidatable> {

	NSString* _assertionName;
	NSString* _reason;
	BSMachPortReceiveRight* _receiveRight;

}

@property (nonatomic,copy,readonly) NSString * assertionName;              //@synthesize assertionName=_assertionName - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSString *)reason;
-(id)initWithAssertionName:(id)arg1 reason:(id)arg2 receiveRight:(id)arg3 ;
-(id)initWithAssertionName:(id)arg1 reason:(id)arg2 port:(unsigned)arg3 ;
-(NSString *)assertionName;
@end

