/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAsset.h>

@class NSDictionary, AVAssetInspectorLoader, AVDispatchOnce, NSArray;

@interface AVDataAsset : AVAsset {

	NSDictionary* _initializationOptions;
	AVAssetInspectorLoader* _loader;
	AVDispatchOnce* _allocateTracksOnceOnly;
	NSArray* _tracks;

}
+(id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long*)arg2 ;
+(unsigned long long)_dataLengthLimit;
-(void)dealloc;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(id)tracks;
-(id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(unsigned long long)referenceRestrictions;
@end
