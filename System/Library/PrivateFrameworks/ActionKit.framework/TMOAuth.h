/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TMOAuth : NSObject {

	NSString* _baseString;
	NSString* _headerString;

}

@property (nonatomic,readonly) NSString * baseString;                //@synthesize baseString=_baseString - In the implementation block
@property (nonatomic,readonly) NSString * headerString;              //@synthesize headerString=_headerString - In the implementation block
+(id)headerForURL:(id)arg1 method:(id)arg2 postParameters:(id)arg3 nonce:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 token:(id)arg7 tokenSecret:(id)arg8 ;
-(NSString *)baseString;
-(NSString *)headerString;
-(id)initWithURL:(id)arg1 method:(id)arg2 postParameters:(id)arg3 nonce:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 token:(id)arg7 tokenSecret:(id)arg8 ;
@end

