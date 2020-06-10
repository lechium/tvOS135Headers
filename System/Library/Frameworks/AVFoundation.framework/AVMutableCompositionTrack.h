/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCompositionTrack.h>

@class AVMutableCompositionTrackInternal, NSString, NSArray;

@interface AVMutableCompositionTrack : AVCompositionTrack {

	AVMutableCompositionTrackInternal* _mutablePriv;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) int naturalTimeScale; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@property (assign,nonatomic) float preferredVolume; 
@property (nonatomic,copy) NSArray * segments; 
+(BOOL)expectsPropertyRevisedNotifications;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)languageCode;
-(BOOL)isEnabled;
-(void)setMetadata:(id)arg1 ;
-(NSString *)extendedLanguageTag;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(float)preferredVolume;
-(CGAffineTransform)preferredTransform;
-(int)naturalTimeScale;
-(NSArray *)segments;
-(long long)alternateGroupID;
-(void)insertEmptyTimeRange:(SCD_Struct_AV8)arg1 ;
-(void)removeTimeRange:(SCD_Struct_AV8)arg1 ;
-(void)scaleTimeRange:(SCD_Struct_AV8)arg1 toDuration:(SCD_Struct_AV7)arg2 ;
-(void)setSegments:(NSArray *)arg1 ;
-(void)setNaturalTimeScale:(int)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setAlternateGroupID:(long long)arg1 ;
-(void)replaceFormatDescription:(opaqueCMFormatDescriptionRef)arg1 withFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(void)_notifyAssetThatDurationWillChange;
-(void)_notifyAssetThatDurationDidChangeWithSuccess:(BOOL)arg1 ;
-(void)_setTrackReaderPropertyValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)_notifySelfThatSegmentsWillChange;
-(void)_notifySelfThatSegmentsDidChangeWithSuccess:(BOOL)arg1 ;
-(void)_updateTrackAssociationToTrack:(id)arg1 type:(id)arg2 operation:(long long)arg3 ;
-(BOOL)insertTimeRange:(SCD_Struct_AV8)arg1 ofTrack:(id)arg2 atTime:(SCD_Struct_AV7)arg3 error:(id*)arg4 ;
-(BOOL)insertTimeRanges:(id)arg1 ofTracks:(id)arg2 atTime:(SCD_Struct_AV7)arg3 error:(id*)arg4 ;
-(BOOL)validateTrackSegments:(id)arg1 error:(id*)arg2 ;
-(void)addTrackAssociationToTrack:(id)arg1 type:(id)arg2 ;
-(void)removeTrackAssociationToTrack:(id)arg1 type:(id)arg2 ;
@end

