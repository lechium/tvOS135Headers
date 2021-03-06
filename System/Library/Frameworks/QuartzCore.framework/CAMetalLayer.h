/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CAMetalLayer : CALayer {

	CAMetalLayerPrivate* _priv;

}

@property (assign) BOOL fenceEnabled; 
@property (assign) BOOL serverSyncEnabled; 
@property (assign) BOOL lowLatency; 
@property (assign) BOOL exclusiveMode; 
@property (assign) double inputTime; 
@property (assign) BOOL nonDefaultColorspace; 
@property (assign) double drawableTimeoutSeconds; 
@property (readonly) unsigned long long displayCompositingInternalStatus; 
@property (retain) id<MTLDevice> device; 
@property (readonly) id<MTLDevice> preferredDevice; 
@property (assign) unsigned long long pixelFormat; 
@property (assign) BOOL framebufferOnly; 
@property (assign) CGSize drawableSize; 
@property (assign) unsigned long long maximumDrawableCount; 
@property (assign) BOOL presentsWithTransaction; 
@property (assign) CGColorSpaceRef colorspace; 
@property (assign) BOOL allowsNextDrawableTimeout; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg1 ;
-(unsigned long long)pixelFormat;
-(id<MTLDevice>)device;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(BOOL)framebufferOnly;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(void)_display;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(BOOL)presentsWithTransaction;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(BOOL)lowLatency;
-(void)setInputTime:(double)arg1 ;
-(void)setLowLatency:(BOOL)arg1 ;
-(unsigned long long)maximumDrawableCount;
-(BOOL)isDrawableAvailable;
-(void)discardContents;
-(void)setMaximumDrawableCount:(unsigned long long)arg1 ;
-(double)inputTime;
-(void)setDrawableTimeoutSeconds:(double)arg1 ;
-(double)drawableTimeoutSeconds;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(id<MTLDevice>)preferredDevice;
-(void)setDrawableSize:(CGSize)arg1 ;
-(CGSize)drawableSize;
-(CGColorSpaceRef)colorspace;
-(void)setColorspace:(CGColorSpaceRef)arg1 ;
-(void)setColorspace:(CGColorSpaceRef)arg1 nonDefault:(BOOL)arg2 ;
-(id)nextDrawable;
-(id)newDrawable;
-(BOOL)displaySyncEnabled;
-(void)setDisplaySyncEnabled:(BOOL)arg1 ;
-(BOOL)allowsNextDrawableTimeout;
-(void)setAllowsNextDrawableTimeout:(BOOL)arg1 ;
-(void)setNonDefaultColorspace:(BOOL)arg1 ;
-(BOOL)nonDefaultColorspace;
-(BOOL)exclusiveMode;
-(BOOL)serverSyncEnabled;
-(BOOL)fenceEnabled;
-(unsigned long long)displayCompositingInternalStatus;
-(void)removeBackBuffers;
-(void)setFenceEnabled:(BOOL)arg1 ;
-(void)setServerSyncEnabled:(BOOL)arg1 ;
-(void)setExclusiveMode:(BOOL)arg1 ;
@end

