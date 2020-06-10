/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVAssetInspectorLoader, AVAssetClientURLRequestHelper, AVAssetCustomURLBridgeForNSURLProtocol, AVAssetCustomURLAuthentication, NSURL, NSArray, AVAssetResourceLoader, AVDispatchOnce, AVAssetCache, NSObject, NSDictionary, AVWeakReference;

@interface AVURLAssetInternal : NSObject {

	AVAssetInspectorLoader* loader;
	AVAssetClientURLRequestHelper* URLRequestHelper;
	AVAssetCustomURLBridgeForNSURLProtocol* customURLBridgeForNSURLProtocol;
	AVAssetCustomURLAuthentication* customURLAuthenticationUsingKeychain;
	NSURL* URL;
	NSArray* tracks;
	AVAssetResourceLoader* resourceLoader;
	AVDispatchOnce* makeOneResourceLoaderOnly;
	AVAssetCache* assetCache;
	AVDispatchOnce* makeOneAssetDownloadCacheOnly;
	NSObject*<OS_dispatch_queue> tracksAccessQueue;
	NSDictionary* initializationOptions;
	BOOL hasInstanceIdentifierMapping;
	AVWeakReference* sessionReference;

}
@end
