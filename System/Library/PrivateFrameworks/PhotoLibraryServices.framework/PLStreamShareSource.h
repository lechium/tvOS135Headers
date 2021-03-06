/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSURL, PFVideoComplement;

@interface PLStreamShareSource : NSObject {

	NSData* _mediaData;
	NSString* _fileExtension;
	NSURL* _mediaURL;
	PFVideoComplement* _videoComplement;
	long long _mediaType;

}

@property (nonatomic,retain) NSData * mediaData;                               //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,retain) NSString * fileExtension;                         //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                                 //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,retain) PFVideoComplement * videoComplement;              //@synthesize videoComplement=_videoComplement - In the implementation block
@property (assign,nonatomic) long long mediaType;                              //@synthesize mediaType=_mediaType - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(long long)mediaType;
-(void)setMediaType:(long long)arg1 ;
-(NSString *)fileExtension;
-(void)setFileExtension:(NSString *)arg1 ;
-(NSURL *)mediaURL;
-(void)setMediaURL:(NSURL *)arg1 ;
-(id)photoLibrary;
-(PFVideoComplement *)videoComplement;
-(void)setMediaData:(NSData *)arg1 ;
-(NSData *)mediaData;
-(id)serializedDictionary;
-(void)_cleanupIfNeededMediaAtURL:(id)arg1 ;
-(void)cleanupResources;
-(void)setVideoComplement:(PFVideoComplement *)arg1 ;
@end

