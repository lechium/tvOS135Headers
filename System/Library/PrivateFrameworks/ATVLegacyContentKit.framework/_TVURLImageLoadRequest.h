/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISURLOperation.h>

@protocol TVImageDecrypter;
@class NSURL;

@interface _TVURLImageLoadRequest : ISURLOperation {

	NSURL* _url;
	id<TVImageDecrypter> _decrypter;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,retain,readonly) id<TVImageDecrypter> decrypter;              //@synthesize decrypter=_decrypter - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
+(BOOL)_usePrivateCookieStore;
-(NSURL *)url;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id<TVImageDecrypter>)decrypter;
-(id)initWithURL:(id)arg1 headers:(id)arg2 decrypter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

