/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMovie.h>

@class AVMutableMovieInternal, AVMediaDataStorage, NSArray;

@interface AVMutableMovie : AVMovie {

	AVMutableMovieInternal* _mutableMovieInternal;

}

@property (assign,getter=isModified,nonatomic) BOOL modified; 
@property (nonatomic,copy) AVMediaDataStorage * defaultMediaDataStorage; 
@property (assign,nonatomic) SCD_Struct_AV7 interleavingPeriod; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) float preferredRate; 
@property (assign,nonatomic) float preferredVolume; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@property (assign,nonatomic) int timescale; 
@property (nonatomic,readonly) NSArray * tracks; 
+(BOOL)expectsPropertyRevisedNotifications;
+(id)movieWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)movieWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)movieWithSettingsFromMovie:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)data;
-(id)URL;
-(id)fileType;
-(SCD_Struct_AV7)duration;
-(id)initWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(NSArray *)tracks;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(float)preferredRate;
-(float)preferredVolume;
-(CGAffineTransform)preferredTransform;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)trackWithTrackID:(int)arg1 ;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(id)_initializationOptions;
-(id)_mutableTracks;
-(void)insertEmptyTimeRange:(SCD_Struct_AV8)arg1 ;
-(void)removeTimeRange:(SCD_Struct_AV8)arg1 ;
-(void)scaleTimeRange:(SCD_Struct_AV8)arg1 toDuration:(SCD_Struct_AV7)arg2 ;
-(void)removeTrack:(id)arg1 ;
-(id)mutableTrackCompatibleWithTrack:(id)arg1 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(OpaqueFigMutableMovieRef)_figMutableMovie;
-(void)_signalMetadataUpdated;
-(int)timescale;
-(BOOL)isModified;
-(void)setTimescale:(int)arg1 ;
-(void)setModified:(BOOL)arg1 ;
-(id)_initWithFormatReader:(OpaqueFigFormatReaderRef)arg1 URL:(id)arg2 data:(id)arg3 options:(id)arg4 ;
-(id)_initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(id)_initWithFigError:(int)arg1 userInfo:(id)arg2 ;
-(AVMediaDataStorage *)defaultMediaDataStorage;
-(id)initWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithSettingsFromMovie:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithSettingsFromMovie:(id)arg1 options:(id)arg2 ;
-(id)initWithFileType:(id)arg1 copySettingsFromMovie:(id)arg2 options:(id)arg3 ;
-(void)_signalTracksUpdated;
-(SCD_Struct_AV7)interleavingPeriod;
-(void)setInterleavingPeriod:(SCD_Struct_AV7)arg1 ;
-(void)setDefaultMediaDataStorage:(AVMediaDataStorage *)arg1 ;
-(BOOL)insertTimeRange:(SCD_Struct_AV8)arg1 ofAsset:(id)arg2 atTime:(SCD_Struct_AV7)arg3 copySampleData:(BOOL)arg4 error:(id*)arg5 ;
-(id)_addMutableTrackWithMediaType:(id)arg1 copySettingsFromTrack:(id)arg2 options:(id)arg3 ;
-(id)addMutableTrackWithMediaType:(id)arg1 copySettingsFromTrack:(id)arg2 options:(id)arg3 ;
-(id)addMutableTracksCopyingSettingsFromTracks:(id)arg1 options:(id)arg2 ;
@end

