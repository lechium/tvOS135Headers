/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLProtocolClient <NSObject>
@required
-(void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
-(void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;
-(void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
-(void)URLProtocol:(id)arg1 didLoadData:(id)arg2;
-(void)URLProtocolDidFinishLoading:(id)arg1;
-(void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;
-(void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;

@end

