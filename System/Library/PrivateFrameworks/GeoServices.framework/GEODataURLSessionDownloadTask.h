/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEODataURLSessionTask.h>

@class NSURL;

@interface GEODataURLSessionDownloadTask : GEODataURLSessionTask {

	NSURL* _downloadedFileURL;

}
-(id)downloadedFileURL;
-(void)didFinishDownloadingToURL:(id)arg1 ;
-(id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2 ;
@end

