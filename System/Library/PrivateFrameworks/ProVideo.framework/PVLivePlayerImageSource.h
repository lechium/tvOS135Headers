/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVLivePlayerSource.h>

@class PVFrameSet, NSString;

@interface PVLivePlayerImageSource : NSObject <PVLivePlayerSource> {

	PVFrameSet* _imageFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(void)pause;
-(void)play;
-(void)setMuted:(BOOL)arg1 ;
-(void)seekToTime:(SCD_Struct_PV19)arg1 ;
-(SCD_Struct_PV19)itemTimeForHostTime:(double)arg1 ;
-(id)imageBufferForHostTime:(double)arg1 ;
-(id)initWithUImage:(id)arg1 ;
-(id)initWithPVImageBuffer:(id)arg1 ;
@end

