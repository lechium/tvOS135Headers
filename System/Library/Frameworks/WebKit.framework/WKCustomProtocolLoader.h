/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSURLConnection, NSString;

@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate> {

	WeakPtr<WebKit::LegacyCustomProtocolManagerProxy>* _customProtocolManagerProxy;
	unsigned long long _customProtocolID;
	unsigned long long _storagePolicy;
	NSURLConnection* _urlConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancel;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)initWithLegacyCustomProtocolManagerProxy:(LegacyCustomProtocolManagerProxy*)arg1 customProtocolID:(unsigned long long)arg2 request:(id)arg3 ;
@end

