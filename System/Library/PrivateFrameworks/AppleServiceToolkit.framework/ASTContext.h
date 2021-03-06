/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleServiceToolkit/AppleServiceToolkit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ASTIdentity, ASTControlCommand;

@interface ASTContext : NSObject <NSCopying, NSSecureCoding> {

	BOOL _testSuiteRunning;
	ASTIdentity* _identity;
	long long _clientStatus;
	long long _command;
	ASTControlCommand* _controlCommand;

}

@property (assign,nonatomic) long long clientStatus;                            //@synthesize clientStatus=_clientStatus - In the implementation block
@property (assign,nonatomic) long long command;                                 //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) BOOL testSuiteRunning;                             //@synthesize testSuiteRunning=_testSuiteRunning - In the implementation block
@property (nonatomic,readonly) ASTControlCommand * controlCommand;              //@synthesize controlCommand=_controlCommand - In the implementation block
@property (nonatomic,copy,readonly) ASTIdentity * identity;                     //@synthesize identity=_identity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ASTIdentity *)identity;
-(id)initWithIdentity:(id)arg1 ;
-(void)setCommand:(long long)arg1 ;
-(long long)command;
-(ASTControlCommand *)controlCommand;
-(void)setClientStatus:(long long)arg1 ;
-(long long)clientStatus;
-(BOOL)testSuiteRunning;
-(void)setTestSuiteRunning:(BOOL)arg1 ;
@end

