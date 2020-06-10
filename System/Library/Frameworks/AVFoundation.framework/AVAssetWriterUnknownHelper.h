/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterHelper.h>

@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {

	short _alternateGroupID;

}
-(void)setDelegate:(id)arg1 ;
-(long long)status;
-(void)setMetadata:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(void)setMovieFragmentInterval:(SCD_Struct_AV7)arg1 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setOverallDurationHint:(SCD_Struct_AV7)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(void)setDirectoryForTemporaryFiles:(id)arg1 ;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(void)setSinglePassFileSize:(long long)arg1 ;
-(void)setSinglePassMediaDataSize:(long long)arg1 ;
-(id)initWithURL:(id)arg1 fileType:(id)arg2 ;
-(BOOL)canAddInput:(id)arg1 ;
-(BOOL)canAddInputGroup:(id)arg1 ;
-(void)addInputGroup:(id)arg1 ;
-(void)startWriting;
-(void)cancelWriting;
-(id)initWithConfigurationState:(id)arg1 ;
-(BOOL)_canAddInput:(id)arg1 exceptionReason:(id*)arg2 ;
-(BOOL)_canAddInputGroup:(id)arg1 exceptionReason:(id*)arg2 ;
@end

