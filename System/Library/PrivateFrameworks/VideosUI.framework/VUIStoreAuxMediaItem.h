/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPBaseMediaItem.h>
#import <libobjc.A.dylib/VUIStoreFPSKeyLoaderDelegate.h>
#import <libobjc.A.dylib/TVPContentKeyLoading.h>
#import <libobjc.A.dylib/TVPMediaItemReporting.h>
#import <libobjc.A.dylib/TVPMediaItemReportingDelegate.h>

@class NSURL, NSDictionary, NSString, NSNumber, VUIMutableBookmark, TVPPlayer, VUIStoreFPSKeyLoader, NSError, NSObject;

@interface VUIStoreAuxMediaItem : TVPBaseMediaItem <VUIStoreFPSKeyLoaderDelegate, TVPContentKeyLoading, TVPMediaItemReporting, TVPMediaItemReportingDelegate> {

	BOOL _isAudioOnly;
	BOOL _disableResumeMenu;
	BOOL _disableScrubbing;
	BOOL _isiTunesPurchasedOrRentedContent;
	BOOL _ignoreExistingOfflineKeyData;
	BOOL _isHLS;
	NSURL* _fpsCertificateURL;
	NSURL* _fpsKeyServerURL;
	NSDictionary* _fpsAdditionalServerParams;
	NSString* _bookmarkID;
	NSNumber* _bookmarkOverrideTime;
	NSURL* _url;
	VUIMutableBookmark* _bookmark;
	TVPPlayer* _scrubPlayer;
	VUIStoreFPSKeyLoader* _storeFPSKeyLoader;
	NSError* _fpsKeyError;
	NSObject* _parentReportingToken;
	long long _playbackType;

}

@property (nonatomic,copy) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) VUIMutableBookmark * bookmark;                         //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,retain) TVPPlayer * scrubPlayer;                               //@synthesize scrubPlayer=_scrubPlayer - In the implementation block
@property (nonatomic,retain) VUIStoreFPSKeyLoader * storeFPSKeyLoader;              //@synthesize storeFPSKeyLoader=_storeFPSKeyLoader - In the implementation block
@property (nonatomic,retain) NSError * fpsKeyError;                                 //@synthesize fpsKeyError=_fpsKeyError - In the implementation block
@property (nonatomic,retain) NSObject * parentReportingToken;                       //@synthesize parentReportingToken=_parentReportingToken - In the implementation block
@property (assign,nonatomic) long long playbackType;                                //@synthesize playbackType=_playbackType - In the implementation block
@property (assign,nonatomic) BOOL isHLS;                                            //@synthesize isHLS=_isHLS - In the implementation block
@property (nonatomic,copy) NSURL * fpsCertificateURL;                               //@synthesize fpsCertificateURL=_fpsCertificateURL - In the implementation block
@property (nonatomic,copy) NSURL * fpsKeyServerURL;                                 //@synthesize fpsKeyServerURL=_fpsKeyServerURL - In the implementation block
@property (nonatomic,copy) NSDictionary * fpsAdditionalServerParams;                //@synthesize fpsAdditionalServerParams=_fpsAdditionalServerParams - In the implementation block
@property (assign,nonatomic) BOOL isAudioOnly;                                      //@synthesize isAudioOnly=_isAudioOnly - In the implementation block
@property (nonatomic,copy) NSString * bookmarkID;                                   //@synthesize bookmarkID=_bookmarkID - In the implementation block
@property (nonatomic,copy) NSNumber * bookmarkOverrideTime;                         //@synthesize bookmarkOverrideTime=_bookmarkOverrideTime - In the implementation block
@property (assign,nonatomic) BOOL disableResumeMenu;                                //@synthesize disableResumeMenu=_disableResumeMenu - In the implementation block
@property (assign,nonatomic) BOOL disableScrubbing;                                 //@synthesize disableScrubbing=_disableScrubbing - In the implementation block
@property (assign,nonatomic) BOOL isiTunesPurchasedOrRentedContent;                 //@synthesize isiTunesPurchasedOrRentedContent=_isiTunesPurchasedOrRentedContent - In the implementation block
@property (assign,nonatomic) BOOL ignoreExistingOfflineKeyData;                     //@synthesize ignoreExistingOfflineKeyData=_ignoreExistingOfflineKeyData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)playbackType;
-(BOOL)isHLS;
-(void)setPlaybackType:(long long)arg1 ;
-(VUIMutableBookmark *)bookmark;
-(void)setBookmark:(VUIMutableBookmark *)arg1 ;
-(NSString *)bookmarkID;
-(void)setIsAudioOnly:(BOOL)arg1 ;
-(BOOL)isAudioOnly;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(id)reportingDelegate;
-(void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(BOOL)arg4 ;
-(id)mediaItemURL;
-(BOOL)hasTrait:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(void)prepareForLoadingWithCompletion:(/*^block*/id)arg1 ;
-(void)cleanUpMediaItem;
-(id)replacementErrorForPlaybackError:(id)arg1 ;
-(void)setBookmarkID:(NSString *)arg1 ;
-(void)setDisableResumeMenu:(BOOL)arg1 ;
-(void)setFpsCertificateURL:(NSURL *)arg1 ;
-(void)setFpsKeyServerURL:(NSURL *)arg1 ;
-(void)setBookmarkOverrideTime:(NSNumber *)arg1 ;
-(BOOL)disableResumeMenu;
-(void)setScrubPlayer:(TVPPlayer *)arg1 ;
-(void)_scrubPlayerItemDidLoad:(id)arg1 ;
-(NSURL *)fpsCertificateURL;
-(NSURL *)fpsKeyServerURL;
-(TVPPlayer *)scrubPlayer;
-(NSNumber *)bookmarkOverrideTime;
-(void)mediaItem:(id)arg1 didChangeFromPlaybackState:(id)arg2 toPlaybackState:(id)arg3 updatedRate:(double)arg4 player:(id)arg5 ;
-(void)mediaItem:(id)arg1 errorDidOccur:(id)arg2 player:(id)arg3 ;
-(void)loadFairPlayStreamingKeyRequests:(id)arg1 ;
-(void)loadFairPlayStreamingKeyRequests:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)storeFPSKeyLoader:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3 ;
-(void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3 ;
-(BOOL)disableScrubbing;
-(void)setDisableScrubbing:(BOOL)arg1 ;
-(NSDictionary *)fpsAdditionalServerParams;
-(void)setFpsAdditionalServerParams:(NSDictionary *)arg1 ;
-(void)setIsiTunesPurchasedOrRentedContent:(BOOL)arg1 ;
-(void)setFpsKeyError:(NSError *)arg1 ;
-(NSError *)fpsKeyError;
-(VUIStoreFPSKeyLoader *)storeFPSKeyLoader;
-(void)setStoreFPSKeyLoader:(VUIStoreFPSKeyLoader *)arg1 ;
-(BOOL)isiTunesPurchasedOrRentedContent;
-(id)_replacementErrorForITunesPlaybackError:(id)arg1 ;
-(id)_replacementErrorForPlaybackError:(id)arg1 ;
-(void)setParentReportingToken:(NSObject *)arg1 ;
-(void)_keepKeyLoaderAlive:(id)arg1 ;
-(BOOL)ignoreExistingOfflineKeyData;
-(void)setIgnoreExistingOfflineKeyData:(BOOL)arg1 ;
-(NSObject *)parentReportingToken;
-(void)setIsHLS:(BOOL)arg1 ;
@end
