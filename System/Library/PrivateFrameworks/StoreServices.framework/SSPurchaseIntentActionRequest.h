/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSPurchaseIntentActionRequest : SSRequest <SSXPCCoding> {

	NSString* _appBundleId;
	unsigned long long _action;

}

@property (nonatomic,copy) NSString * appBundleId;                   //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) unsigned long long action;              //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)action;
-(void)setAction:(unsigned long long)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end

