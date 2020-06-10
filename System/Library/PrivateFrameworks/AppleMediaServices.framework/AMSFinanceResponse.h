/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSFinanceDialogResponse, AMSFinanceAuthenticateResponse, AMSFinancePaymentSheetResponse, NSDictionary, AMSURLTaskInfo, ACAccount, NSArray, NSError, NSURL;

@interface AMSFinanceResponse : NSObject {

	AMSFinanceDialogResponse* _dialogResponse;
	AMSFinanceAuthenticateResponse* _authenticateResponse;
	AMSFinancePaymentSheetResponse* _paymentSheetResponse;
	long long _dialogKind;
	NSDictionary* _responseDictionary;
	AMSURLTaskInfo* _taskInfo;

}

@property (nonatomic,readonly) long long dialogKind;                                               //@synthesize dialogKind=_dialogKind - In the implementation block
@property (nonatomic,retain) NSDictionary * responseDictionary;                                    //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,retain) AMSURLTaskInfo * taskInfo;                                            //@synthesize taskInfo=_taskInfo - In the implementation block
@property (nonatomic,readonly) ACAccount * account; 
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) AMSFinanceAuthenticateResponse * authenticateResponse;              //@synthesize authenticateResponse=_authenticateResponse - In the implementation block
@property (nonatomic,readonly) AMSFinanceDialogResponse * dialogResponse;                          //@synthesize dialogResponse=_dialogResponse - In the implementation block
@property (nonatomic,readonly) AMSFinancePaymentSheetResponse * paymentSheetResponse;              //@synthesize paymentSheetResponse=_paymentSheetResponse - In the implementation block
@property (nonatomic,readonly) NSArray * pingURLs; 
@property (nonatomic,readonly) NSError * serverError; 
@property (nonatomic,readonly) BOOL supportedProtocolVersion; 
@property (nonatomic,readonly) NSURL * versionMismatchURL; 
-(NSArray *)actions;
-(ACAccount *)account;
-(NSDictionary *)responseDictionary;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(NSArray *)pingURLs;
-(long long)dialogKind;
-(id)_valueForProtocolKey:(id)arg1 ;
-(NSURL *)versionMismatchURL;
-(AMSFinanceAuthenticateResponse *)authenticateResponse;
-(NSError *)serverError;
-(AMSURLTaskInfo *)taskInfo;
-(void)setTaskInfo:(AMSURLTaskInfo *)arg1 ;
-(AMSFinanceDialogResponse *)dialogResponse;
-(id)initWithTaskInfo:(id)arg1 decodedObject:(id)arg2 ;
-(AMSFinancePaymentSheetResponse *)paymentSheetResponse;
-(BOOL)supportedProtocolVersion;
@end

