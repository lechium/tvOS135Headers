/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSTransactionLogMessage : NSObject {

	NSString* _fromID;
	NSString* _loginID;
	NSString* _accountUniqueID;
	NSString* _serviceName;

}

@property (nonatomic,readonly) NSString * fromID;                       //@synthesize fromID=_fromID - In the implementation block
@property (nonatomic,readonly) NSString * loginID;                      //@synthesize loginID=_loginID - In the implementation block
@property (nonatomic,readonly) NSString * accountUniqueID;              //@synthesize accountUniqueID=_accountUniqueID - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                  //@synthesize serviceName=_serviceName - In the implementation block
+(id)transactionLogMessageFromDictionaryRepresentation:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)serviceName;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)fromID;
-(NSString *)accountUniqueID;
-(NSString *)loginID;
-(id)_initWithAccountUniqueID:(id)arg1 fromID:(id)arg2 loginID:(id)arg3 serviceName:(id)arg4 ;
@end

