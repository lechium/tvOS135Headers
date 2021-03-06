/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OFNSOperation.h>

@class OKDocument, NSURL;

@interface OKDocumentImportOperation : OFNSOperation {

	OKDocument* _document;
	NSURL* _resourceURL;
	NSURL* _importedResourceURL;
	BOOL _opaque;
	NSURL* _temporaryDownloadedMediaFileURL;
	NSURL* _temporaryTranscodedMediaFileURL;
	NSURL* _temporaryThumbnailMediaFileURL;

}

@property (nonatomic,retain) NSURL * temporaryDownloadedMediaFileURL;              //@synthesize temporaryDownloadedMediaFileURL=_temporaryDownloadedMediaFileURL - In the implementation block
@property (nonatomic,retain) NSURL * temporaryTranscodedMediaFileURL;              //@synthesize temporaryTranscodedMediaFileURL=_temporaryTranscodedMediaFileURL - In the implementation block
@property (nonatomic,retain) NSURL * temporaryThumbnailMediaFileURL;               //@synthesize temporaryThumbnailMediaFileURL=_temporaryThumbnailMediaFileURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * importedResourceURL;                   //@synthesize importedResourceURL=_importedResourceURL - In the implementation block
-(id)init;
-(void)dealloc;
-(void)cancelOperation;
-(unsigned long long)launchOperation;
-(void)finishOperation;
-(void)cleanupOperation;
-(id)initWithDocument:(id)arg1 resourceURL:(id)arg2 importedResourceURL:(id)arg3 opaque:(BOOL)arg4 ;
-(void)setTemporaryThumbnailMediaFileURL:(NSURL *)arg1 ;
-(void)setTemporaryTranscodedMediaFileURL:(NSURL *)arg1 ;
-(void)setTemporaryDownloadedMediaFileURL:(NSURL *)arg1 ;
-(NSURL *)importedResourceURL;
-(NSURL *)temporaryDownloadedMediaFileURL;
-(NSURL *)temporaryTranscodedMediaFileURL;
-(NSURL *)temporaryThumbnailMediaFileURL;
@end

