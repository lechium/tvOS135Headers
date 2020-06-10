/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVVideoCompositing;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSDictionary, AVWeakReference, NSObject, AVVideoComposition, NSError, AVVideoCompositionRenderContext;

@interface AVCustomVideoCompositorSession : NSObject {

	OpaqueFigVideoCompositorRef _figCustomCompositor;
	BOOL _hasRegisteredFigCustomCompositorCallbacks;
	NSDictionary* _clientRequiredPixelBufferAttributes;
	AVWeakReference* _weakSelf;
	void* _callbackContextToken;
	NSObject*<OS_dispatch_queue> _videoCompositionQ;
	AVVideoComposition* _videoComposition;
	BOOL _videoCompositionDidChange;
	NSObject*<OS_dispatch_queue> _clientCustomCompositorQ;
	id<AVVideoCompositing> _clientCustomCompositor;
	NSObject*<OS_dispatch_queue> _clientErrorQ;
	NSError* _clientError;
	NSObject*<OS_dispatch_queue> _renderContextQ;
	AVVideoCompositionRenderContext* _renderContext;
	NSObject*<OS_dispatch_queue> _finishedRequestQ;

}

@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
+(id)sessionWithVideoComposition:(id)arg1 recyclingSession:(id)arg2 ;
+(BOOL)_colorPropertiesAreSetInVideoComposition:(id)arg1 ;
-(void)dealloc;
-(void)setVideoComposition:(id)arg1 ;
-(id)customVideoCompositor;
-(BOOL)commitCustomVideoCompositorPropertiesAndReturnError:(id*)arg1 ;
-(void)detachVideoComposition;
-(id)getAndClearClientError;
-(OpaqueFigVideoCompositorRef)_copyFigVideoCompositor;
-(BOOL)supportsWideColorSourceFrames;
-(void)_willDeallocOrFinalize;
-(id)initWithVideoComposition:(id)arg1 ;
-(int)_setupFigCallbacks;
-(BOOL)_validateSourcePixelBufferAttributes:(id)arg1 andReturnException:(id*)arg2 ;
-(BOOL)_validateRequiredPixelBufferAttributesForRenderContext:(id)arg1 andReturnException:(id*)arg2 ;
-(void)_cleanupFigCallbacks;
-(void)compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 didFinishWithComposedPixelBuffer:(CVBufferRef)arg2 ;
-(void)compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 didFinishWithError:(id)arg2 ;
-(void)compositionFrameDidCancel:(OpaqueFigVideoCompositorFrameRef)arg1 ;
-(int)_compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 atTime:(SCD_Struct_AV7)arg2 requiresRenderUsingSources:(id)arg3 withInstruction:(void*)arg4 ;
-(int)_customCompositorShouldAnticipateRenderingFromTime:(SCD_Struct_AV7)arg1 toTime:(SCD_Struct_AV7)arg2 andThenFromTime:(SCD_Struct_AV7)arg3 toTime:(SCD_Struct_AV7)arg4 ;
-(int)_customCompositorShouldPrerollForRenderingFromTime:(SCD_Struct_AV7)arg1 toTime:(SCD_Struct_AV7)arg2 andThenFromTime:(SCD_Struct_AV7)arg3 toTime:(SCD_Struct_AV7)arg4 requestID:(long long)arg5 ;
-(int)_customCompositorShouldCancelPendingFrames;
-(void)_customCompositorFigPropertyDidChange;
@end

