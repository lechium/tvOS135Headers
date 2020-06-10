/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSURL, NSArray, TVImageProxy;

@interface TVPMediaItemContentProposal : NSObject {

	BOOL _loadingStarted;
	NSString* _title;
	double _presentationTime;
	NSNumber* _automaticAcceptanceInterval;
	NSURL* _previewImageURL;
	NSArray* _metadata;
	TVImageProxy* _imageProxy;

}

@property (nonatomic,retain) TVImageProxy * imageProxy;                           //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,nonatomic) BOOL loadingStarted;                                 //@synthesize loadingStarted=_loadingStarted - In the implementation block
@property (nonatomic,retain) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) double presentationTime;                             //@synthesize presentationTime=_presentationTime - In the implementation block
@property (nonatomic,retain) NSNumber * automaticAcceptanceInterval;              //@synthesize automaticAcceptanceInterval=_automaticAcceptanceInterval - In the implementation block
@property (nonatomic,retain) NSURL * previewImageURL;                             //@synthesize previewImageURL=_previewImageURL - In the implementation block
@property (nonatomic,retain) NSArray * metadata;                                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL needsLoading; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(void)setAutomaticAcceptanceInterval:(NSNumber *)arg1 ;
-(NSNumber *)automaticAcceptanceInterval;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(double)presentationTime;
-(NSURL *)previewImageURL;
-(BOOL)loadingStarted;
-(void)setLoadingStarted:(BOOL)arg1 ;
-(BOOL)needsLoading;
-(void)setPresentationTime:(double)arg1 ;
-(void)setPreviewImageURL:(NSURL *)arg1 ;
@end
