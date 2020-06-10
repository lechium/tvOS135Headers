/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FigCaptureDeferredProcessingJobDelegate;
#import <Celestial/Celestial-Structs.h>
@class BWDeferredProcessingContainer, FigCaptureDeferredPhotoProcessorRequest;

@interface FigCaptureDeferredProcessingJob : NSObject {

	id<FigCaptureDeferredProcessingJobDelegate> _delegate;
	BWDeferredProcessingContainer* _container;
	FigCaptureDeferredPhotoProcessorRequest* _processorRequest;
	long long _startNS;
	long long _durationNS;

}

@property (nonatomic,readonly) FigCaptureDeferredPhotoProcessorRequest * processorRequest;              //@synthesize processorRequest=_processorRequest - In the implementation block
@property (nonatomic,readonly) BWDeferredProcessingContainer * container;                               //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) long long startNS;                                                         //@synthesize startNS=_startNS - In the implementation block
@property (assign,nonatomic) long long durationNS;                                                      //@synthesize durationNS=_durationNS - In the implementation block
-(void)dealloc;
-(BWDeferredProcessingContainer *)container;
-(void)start;
-(FigCaptureDeferredPhotoProcessorRequest *)processorRequest;
-(id)initWithProcessorRequest:(id)arg1 delegate:(id)arg2 error:(int*)arg3 ;
-(void)completedWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)failedWithError:(int)arg1 ;
-(long long)durationNS;
-(void)setDurationNS:(long long)arg1 ;
-(long long)startNS;
-(void)setStartNS:(long long)arg1 ;
@end
