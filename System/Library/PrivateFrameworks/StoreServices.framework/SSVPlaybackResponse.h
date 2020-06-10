/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSHTTPURLResponse, NSURL, NSArray;

@interface SSVPlaybackResponse : NSObject <NSCopying> {

	NSDictionary* _responseDictionary;
	NSHTTPURLResponse* _urlResponse;
	NSURL* _fallbackStreamingKeyServerURL;
	NSURL* _fallbackStreamingKeyCertificateURL;

}

@property (nonatomic,copy) NSURL * fallbackStreamingKeyServerURL;                   //@synthesize fallbackStreamingKeyServerURL=_fallbackStreamingKeyServerURL - In the implementation block
@property (nonatomic,copy) NSURL * fallbackStreamingKeyCertificateURL;              //@synthesize fallbackStreamingKeyCertificateURL=_fallbackStreamingKeyCertificateURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * URLResponse;                     //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(void)_enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(NSURL *)fallbackStreamingKeyCertificateURL;
-(void)setFallbackStreamingKeyCertificateURL:(NSURL *)arg1 ;
-(NSURL *)fallbackStreamingKeyServerURL;
-(void)setFallbackStreamingKeyServerURL:(NSURL *)arg1 ;
-(id)initWithDictionary:(id)arg1 URLResponse:(id)arg2 ;
-(id)itemForItemIdentifier:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(NSHTTPURLResponse *)URLResponse;
@end

