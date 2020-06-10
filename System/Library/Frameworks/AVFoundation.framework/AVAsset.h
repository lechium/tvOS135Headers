/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVAssetInternal, NSArray, AVDisplayCriteria;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetInternal* _asset;

}

@property (readonly) NSArray * availableChapterLocales; 
@property (nonatomic,readonly) long long moovAtomSize; 
@property (nonatomic,readonly) NSArray * fragments; 
@property (nonatomic,retain,readonly) id<AVLoggingIdentifier> loggingIdentifier; 
@property (nonatomic,readonly) id propertyListForProxy; 
@property (nonatomic,readonly) BOOL isProxy; 
@property (nonatomic,readonly) SCD_Struct_AV7 duration; 
@property (nonatomic,readonly) float preferredRate; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) AVDisplayCriteria * preferredDisplayCriteria; 
@property (nonatomic,readonly) SCD_Struct_AV7 minimumTimeOffsetFromLive; 
+(id)makeAssetLoggingIdentifier;
+(id)assetWithURL:(id)arg1 ;
+(id)assetWithURL:(id)arg1 figPlaybackItem:(OpaqueFigPlaybackItemRef)arg2 trackIDs:(id)arg3 dynamicBehavior:(BOOL)arg4 ;
+(id)assetWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
+(BOOL)expectsPropertyRevisedNotifications;
+(BOOL)supportsPlayerItems;
+(id)assetProxyWithPropertyList:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isProxy;
-(id)init;
-(void)dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(SCD_Struct_AV7)duration;
-(id)creationDate;
-(id)metadata;
-(BOOL)hasProtectedContent;
-(id)tracks;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoading;
-(OpaqueFigAssetRef)_figAsset;
-(id)availableChapterLanguages;
-(NSArray *)availableChapterLocales;
-(id<AVLoggingIdentifier>)loggingIdentifier;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(BOOL)_isStreaming;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(BOOL)_mindsFragments;
-(double)_fragmentMindingInterval;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(float)preferredRate;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(CGAffineTransform)preferredTransform;
-(CGSize)maximumVideoResolution;
-(id)availableVideoDynamicRanges;
-(AVDisplayCriteria *)preferredDisplayCriteria;
-(SCD_Struct_AV7)minimumTimeOffsetFromLive;
-(id)tracksWithMediaType:(id)arg1 ;
-(CGSize)naturalSize;
-(int)naturalTimeScale;
-(BOOL)providesPreciseDurationAndTiming;
-(id)alternateTrackGroups;
-(id)trackGroups;
-(id)trackWithTrackID:(int)arg1 ;
-(id)_firstTrackGroupWithMediaTypes:(id)arg1 ;
-(id)_mediaSelectionGroupDictionaries;
-(id)preferredMediaSelection;
-(id)availableMediaCharacteristicsWithMediaSelectionOptions;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(id)trackReferences;
-(id)lyrics;
-(id)commonMetadata;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)tracksWithMediaCharacteristics:(id)arg1 ;
-(void)_serverHasDied;
-(BOOL)isPlayable;
-(BOOL)isExportable;
-(BOOL)isReadable;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1 ;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
-(SCD_Struct_AV7)overallDurationHint;
-(BOOL)supportsAnalysisReporting;
-(id)_assetAnalysisMessages;
-(void)_setLoggingIdentifier:(id)arg1 ;
-(id)_nameForLogging;
-(id)_weakReference;
-(id)_comparisonToken;
-(long long)statusOfValueForKey:(id)arg1 ;
-(void)_loadValuesSynchronouslyForKeys:(id)arg1 trackKeys:(id)arg2 ;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)_absoluteURL;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(BOOL)_needsLegacyChangeNotifications;
-(unsigned long long)referenceRestrictions;
-(id)audioAlternatesTrackGroup;
-(id)subtitleAlternatesTrackGroup;
-(id)mediaSelectionGroupForPropertyList:(id)arg1 mediaSelectionOption:(id*)arg2 ;
-(id)allMediaSelections;
-(id)_ID3Metadata;
-(id)_tracksWithClass:(Class)arg1 ;
-(void)_tracksDidChange;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(id)compatibleTrackForCompositionTrack:(id)arg1 ;
-(BOOL)_hasResourceLoaderDelegate;
-(void)_handleURLRequest:(id)arg1 ;
-(void)_loadChapterInfo;
-(id)_chapterDataTypeForMediaSubType:(int)arg1 ;
-(unsigned long long)_addChapterMetadataItem:(id)arg1 timeRange:(SCD_Struct_AV8)arg2 toChapters:(id)arg3 fromIndex:(unsigned long long)arg4 ;
-(id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg1 titleLanguage:(id)arg2 containingItemsWithCommonKeys:(id)arg3 ;
-(id)_availableCanonicalizedChapterLanguages;
-(id)_chapterMetadataGroupsWithTitleLanguage:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 ;
-(id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)_chapterTracks;
-(BOOL)_containsAtLeastOnePlayableAudioTrack;
-(BOOL)_containsAtLeastOnePlayableVideoTrack;
-(id)_exportURL;
-(long long)moovAtomSize;
-(NSArray *)fragments;
-(int)unusedTrackID;
-(id)propertyListForProxy;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
@end
