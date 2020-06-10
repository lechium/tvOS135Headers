/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PLAssetsdClientXPCConnection, NSObject, PLAssetsdSystemLibraryURLReadOnlyClient, PLAssetsdLibraryManagementClient, PLAssetsdDemoClient;

@interface PLNonBindingAssetsdClient : NSObject {

	PLAssetsdClientXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	PLAssetsdSystemLibraryURLReadOnlyClient* _systemLibraryURLReadOnlyClient;
	PLAssetsdLibraryManagementClient* _libraryManagementClient;
	PLAssetsdDemoClient* _demoClient;

}

@property (readonly) PLAssetsdSystemLibraryURLReadOnlyClient * systemLibraryURLReadOnlyClient; 
@property (readonly) PLAssetsdLibraryManagementClient * libraryManagementClient; 
@property (readonly) PLAssetsdDemoClient * demoClient; 
-(id)init;
-(PLAssetsdSystemLibraryURLReadOnlyClient *)systemLibraryURLReadOnlyClient;
-(PLAssetsdLibraryManagementClient *)libraryManagementClient;
-(PLAssetsdDemoClient *)demoClient;
-(void)_updateLibraryStateConnectionInterrupted:(id)arg1 ;
@end

