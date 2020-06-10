/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetClientURLRequestHelper, AVWeakReference, NSObject, NSMutableDictionary, NSURLSession, AVAssetCustomURLBridgeForNSURLSession, NSOperationQueue;

@interface AVAssetResourceLoaderInternal : NSObject {

	AVAssetClientURLRequestHelper* URLRequestHelper;
	AVWeakReference* weakReferenceToAsset;
	NSObject*<OS_dispatch_queue> stateQueue;
	AVWeakReference* weakReferenceToDelegate;
	NSObject*<OS_dispatch_queue> delegateQueue;
	OpaqueFigCustomURLLoaderRef customURLLoader;
	OpaqueFigCustomURLHandlerRef customURLHandler;
	OpaqueFigCustomURLHandlerRef authHandler;
	OpaqueFigCustomURLHandlerRef contentKeySessionCustomURLHandler;
	OpaqueFigXPCRemoteClientRef remoteHandlerXPCRemoteClient;
	int loadingCancelled;
	NSMutableDictionary* pendingRequests;
	NSObject*<OS_dispatch_queue> contentInformationCachingQueue;
	NSMutableDictionary* contentInformationCache;
	BOOL preloadsEligibleContentKeys;
	NSURLSession* URLSession;
	AVAssetCustomURLBridgeForNSURLSession* bridgeBetweenHandlerAndSession;
	NSOperationQueue* URLSessionOperationQueue;

}
@end

