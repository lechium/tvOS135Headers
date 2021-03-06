/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>

@class NSString;

@interface SSRemoteWebViewRequest : SSRequest {

	NSString* _referrer;
	NSString* _URLString;

}

@property (nonatomic,retain) NSString * referrer;               //@synthesize referrer=_referrer - In the implementation block
@property (nonatomic,retain) NSString * URLString;              //@synthesize URLString=_URLString - In the implementation block
-(NSString *)URLString;
-(void)setURLString:(NSString *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)referrer;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setReferrer:(NSString *)arg1 ;
@end

