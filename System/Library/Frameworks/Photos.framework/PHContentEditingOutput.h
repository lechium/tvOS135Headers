/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PHAdjustmentData, NSURL, NSNumber, NSData;

@interface PHContentEditingOutput : NSObject <NSSecureCoding> {

	PHAdjustmentData* _adjustmentData;
	long long _baseVersion;
	BOOL _isSubstandardRender;
	BOOL _loopingLivePhoto;
	BOOL _isAsyncAdjustment;
	BOOL _isSwappingFullSizeRenderWithAlternateRender;
	NSURL* _renderedContentURL;
	NSNumber* _originalResourceChoice;
	long long _fullSizeRenderWidth;
	long long _fullSizeRenderHeight;
	NSData* _penultimateRenderedJPEGData;
	NSURL* _penultimateRenderedVideoContentURL;
	NSURL* _renderedVideoPosterURL;
	NSURL* _renderedVideoComplementContentURL;
	NSURL* _penultimateRenderedVideoComplementContentURL;
	NSURL* _editorBundleURL;
	long long _mediaType;
	NSURL* _renderedPreviewContentURL;
	NSNumber* _playbackVariation;
	NSNumber* _videoDuration;
	NSNumber* _reframeVariation;

}

@property (assign) long long baseVersion; 
@property (nonatomic,retain) NSNumber * originalResourceChoice;                             //@synthesize originalResourceChoice=_originalResourceChoice - In the implementation block
@property (assign,nonatomic) BOOL isSubstandardRender;                                      //@synthesize isSubstandardRender=_isSubstandardRender - In the implementation block
@property (assign,nonatomic) long long fullSizeRenderWidth;                                 //@synthesize fullSizeRenderWidth=_fullSizeRenderWidth - In the implementation block
@property (assign,nonatomic) long long fullSizeRenderHeight;                                //@synthesize fullSizeRenderHeight=_fullSizeRenderHeight - In the implementation block
@property (copy) NSURL * renderedContentURL;                                                //@synthesize renderedContentURL=_renderedContentURL - In the implementation block
@property (retain) NSData * penultimateRenderedJPEGData;                                    //@synthesize penultimateRenderedJPEGData=_penultimateRenderedJPEGData - In the implementation block
@property (copy) NSURL * penultimateRenderedVideoContentURL;                                //@synthesize penultimateRenderedVideoContentURL=_penultimateRenderedVideoContentURL - In the implementation block
@property (copy) NSURL * renderedVideoPosterURL;                                            //@synthesize renderedVideoPosterURL=_renderedVideoPosterURL - In the implementation block
@property (copy) NSURL * renderedVideoComplementContentURL;                                 //@synthesize renderedVideoComplementContentURL=_renderedVideoComplementContentURL - In the implementation block
@property (copy) NSURL * penultimateRenderedVideoComplementContentURL;                      //@synthesize penultimateRenderedVideoComplementContentURL=_penultimateRenderedVideoComplementContentURL - In the implementation block
@property (retain) NSURL * editorBundleURL;                                                 //@synthesize editorBundleURL=_editorBundleURL - In the implementation block
@property (readonly) long long mediaType;                                                   //@synthesize mediaType=_mediaType - In the implementation block
@property (getter=isLoopingLivePhoto,readonly) BOOL loopingLivePhoto;                       //@synthesize loopingLivePhoto=_loopingLivePhoto - In the implementation block
@property (nonatomic,retain) NSURL * renderedPreviewContentURL;                             //@synthesize renderedPreviewContentURL=_renderedPreviewContentURL - In the implementation block
@property (assign,nonatomic) BOOL isAsyncAdjustment;                                        //@synthesize isAsyncAdjustment=_isAsyncAdjustment - In the implementation block
@property (nonatomic,retain) NSNumber * playbackVariation;                                  //@synthesize playbackVariation=_playbackVariation - In the implementation block
@property (nonatomic,retain) NSNumber * videoDuration;                                      //@synthesize videoDuration=_videoDuration - In the implementation block
@property (assign,nonatomic) BOOL isSwappingFullSizeRenderWithAlternateRender;              //@synthesize isSwappingFullSizeRenderWithAlternateRender=_isSwappingFullSizeRenderWithAlternateRender - In the implementation block
@property (nonatomic,retain) NSNumber * reframeVariation;                                   //@synthesize reframeVariation=_reframeVariation - In the implementation block
@property (retain) PHAdjustmentData * adjustmentData; 
+(BOOL)supportsSecureCoding;
+(id)renderURLWithExtensionForMediaType:(long long)arg1 ;
+(unsigned long long)maximumAdjustmentDataLength;
+(id)outputForFlippingFullSizeRenderWithContentEditingInput:(id)arg1 error:(id*)arg2 ;
-(id)debugDescription;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)baseVersion;
-(void)setBaseVersion:(long long)arg1 ;
-(long long)mediaType;
-(PHAdjustmentData *)adjustmentData;
-(NSNumber *)playbackVariation;
-(NSNumber *)reframeVariation;
-(void)setAdjustmentData:(PHAdjustmentData *)arg1 ;
-(NSNumber *)originalResourceChoice;
-(void)setPlaybackVariation:(NSNumber *)arg1 ;
-(void)setOriginalResourceChoice:(NSNumber *)arg1 ;
-(void)setReframeVariation:(NSNumber *)arg1 ;
-(NSNumber *)videoDuration;
-(void)setVideoDuration:(NSNumber *)arg1 ;
-(id)initWithContentEditingInput:(id)arg1 ;
-(id)initWithContentEditingInput:(id)arg1 withOptions:(id)arg2 ;
-(id)initWithPlaceholderForCreatedAsset:(id)arg1 ;
-(id)initWithAdjustmentBaseVersion:(long long)arg1 mediaType:(long long)arg2 ;
-(id)renderURLWithExtensionForMediaType:(long long)arg1 ;
-(void)clearRenderedContentURL;
-(void)setRenderedJPEGData:(id)arg1 ;
-(id)assetAdjustmentsWithEditorBundleID:(id)arg1 ;
-(BOOL)isOnlyChangingOriginalChoice;
-(void)_setupRequiredRenderedContentURLsWithEditingInput:(id)arg1 options:(id)arg2 ;
-(NSURL *)renderedContentURL;
-(void)setRenderedContentURL:(NSURL *)arg1 ;
-(BOOL)isSubstandardRender;
-(void)setIsSubstandardRender:(BOOL)arg1 ;
-(long long)fullSizeRenderWidth;
-(void)setFullSizeRenderWidth:(long long)arg1 ;
-(long long)fullSizeRenderHeight;
-(void)setFullSizeRenderHeight:(long long)arg1 ;
-(NSData *)penultimateRenderedJPEGData;
-(void)setPenultimateRenderedJPEGData:(NSData *)arg1 ;
-(NSURL *)penultimateRenderedVideoContentURL;
-(void)setPenultimateRenderedVideoContentURL:(NSURL *)arg1 ;
-(NSURL *)renderedVideoPosterURL;
-(void)setRenderedVideoPosterURL:(NSURL *)arg1 ;
-(NSURL *)renderedVideoComplementContentURL;
-(void)setRenderedVideoComplementContentURL:(NSURL *)arg1 ;
-(NSURL *)penultimateRenderedVideoComplementContentURL;
-(void)setPenultimateRenderedVideoComplementContentURL:(NSURL *)arg1 ;
-(NSURL *)editorBundleURL;
-(void)setEditorBundleURL:(NSURL *)arg1 ;
-(BOOL)isLoopingLivePhoto;
-(NSURL *)renderedPreviewContentURL;
-(void)setRenderedPreviewContentURL:(NSURL *)arg1 ;
-(BOOL)isAsyncAdjustment;
-(void)setIsAsyncAdjustment:(BOOL)arg1 ;
-(BOOL)isSwappingFullSizeRenderWithAlternateRender;
-(void)setIsSwappingFullSizeRenderWithAlternateRender:(BOOL)arg1 ;
@end

