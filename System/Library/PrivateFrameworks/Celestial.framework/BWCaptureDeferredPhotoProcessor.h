/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigCaptureDeferredProcessingJobDelegate.h>

@class NSString;

@interface BWCaptureDeferredPhotoProcessor : NSObject <FigCaptureDeferredProcessingJobDelegate> {

	OpaqueFigCaptureDeferredPhotoProcessorRef _deferredPhotoProcessor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)request:(id)arg1 failedWithError:(int)arg2 ;
-(void)job:(id)arg1 completedWithSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)job:(id)arg1 failedWithError:(int)arg2 ;
-(id)initWithFigCaptureDeferredPhotoProcessor:(OpaqueFigCaptureDeferredPhotoProcessorRef)arg1 ;
@end

