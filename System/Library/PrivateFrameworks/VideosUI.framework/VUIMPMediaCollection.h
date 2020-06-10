/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaCollection.h>
#import <libobjc.A.dylib/VUIMPMediaEntityImageLoadParamsCreating.h>

@class NSString, MPMediaItemCollection;

@interface VUIMPMediaCollection : VUIMediaCollection <VUIMPMediaEntityImageLoadParamsCreating> {

	NSString* _coverArtImageIdentifier;
	MPMediaItemCollection* _mediaItemCollection;

}

@property (nonatomic,retain) MPMediaItemCollection * mediaItemCollection;              //@synthesize mediaItemCollection=_mediaItemCollection - In the implementation block
-(id)isLocal;
-(id)resolution;
-(id)contentRating;
-(id)showIdentifier;
-(id)playedState;
-(id)HLSResolution;
-(id)HLSColorCapability;
-(id)colorCapability;
-(id)HLSAudioCapability;
-(id)audioCapability;
-(id)initWithMediaLibrary:(id)arg1 mediaItemCollection:(id)arg2 identifier:(id)arg3 requestedProperties:(id)arg4 kind:(id)arg5 ;
-(MPMediaItemCollection *)mediaItemCollection;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(id)coverArtImageIdentifier;
-(id)_valueForPropertyDescriptor:(id)arg1 ;
-(id)assetController;
-(void)setMediaItemCollection:(MPMediaItemCollection *)arg1 ;
@end

