/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDLayerBaseRef.h>

@interface CUIPSDLayerRef : CUIPSDLayerBaseRef
-(id)image;
-(id)gradient;
-(id)initWithImageRef:(id)arg1 layerIndex:(unsigned)arg2 ;
-(CGImageRef)createCGImage;
-(id)imageIsZeroSizeImage:(BOOL*)arg1 ;
-(id)imageFromSlice:(unsigned)arg1 ;
-(id)imageFromSlice:(unsigned)arg1 isEmptyImage:(BOOL*)arg2 ;
-(id)patternFromSlice:(unsigned)arg1 ;
-(id)patternFromSlice:(unsigned)arg1 isZeroSizeImage:(BOOL*)arg2 ;
-(id)maskFromSlice:(unsigned)arg1 ;
-(id)fillSample;
-(id)layerEffects;
-(id)colorFill;
@end

