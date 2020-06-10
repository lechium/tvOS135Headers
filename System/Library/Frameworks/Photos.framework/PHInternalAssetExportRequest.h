/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetExportRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, PHResourceDownloadRequest, NSProgress;

@interface PHInternalAssetExportRequest : PHAssetExportRequest {

	NSObject*<OS_dispatch_queue> _serialQueue;
	PHResourceDownloadRequest* _downloadRequest;
	NSProgress* _downloadRequestProgressParent;

}
+(id)exportRequestForAsset:(id)arg1 error:(id*)arg2 ;
+(id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id*)arg3 ;
+(id)_variantsForAsset:(id)arg1 error:(id*)arg2 ;
-(void)preflightExportWithOptions:(id)arg1 assetAvailability:(long long*)arg2 isProcessingRequired:(BOOL*)arg3 fileURLs:(id*)arg4 info:(id*)arg5 ;
-(void)exportWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_initWithAsset:(id)arg1 variants:(id)arg2 downloadRequest:(id)arg3 downloadRequestProgressParent:(id)arg4 ;
@end
