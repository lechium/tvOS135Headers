//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDownloadDelegate-Protocol.h"

@class DownloadManager, NSString;

@interface DownloaderSessionDelegate : NSObject <NSURLSessionDownloadDelegate>
{
    DownloadManager *_downloadManager;	// 8 = 0x8
}

@property(readonly, nonatomic) DownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x0000000100010ff4
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100010e20
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;	// IMP=0x0000000100010de4
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x0000000100010d38
- (void)dealloc;	// IMP=0x0000000100010d04
- (id)initWithDownloadManager:(id)arg1;	// IMP=0x0000000100010cbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
