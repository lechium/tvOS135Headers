/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>

@interface AVAssetWriterInputUnknownHelper : AVAssetWriterInputHelper
+(id)keyPathsForValuesAffectingCanPerformMultiplePasses;
-(long long)status;
-(void)setMetadata:(id)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setLayer:(long long)arg1 ;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setLanguageCode:(id)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setAlternateGroupID:(short)arg1 ;
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(void)setSourcePixelBufferAttributes:(id)arg1 ;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setExpectsMediaDataInRealTime:(BOOL)arg1 ;
-(void)setProvisionalAlternateGroupID:(short)arg1 ;
-(void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1 ;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_AV7)arg1 ;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(void)setMediaDataLocation:(id)arg1 ;
-(void)setSampleReferenceBaseURL:(id)arg1 ;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
-(BOOL)canPerformMultiplePasses;
-(BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1 ;
-(BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(BOOL)_validateLanguageCode:(id)arg1 ;
-(BOOL)_canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 exceptionReason:(id*)arg3 ;
@end
