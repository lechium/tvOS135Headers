/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSArray;

@interface BWUBSemanticRenderingInput : NSObject {

	CVBufferRef _skinMask;
	CVBufferRef _lowResPersonMask;
	NSArray* _faceObservations;

}

@property (nonatomic,readonly) CVBufferRef skinMask;                      //@synthesize skinMask=_skinMask - In the implementation block
@property (nonatomic,readonly) CVBufferRef lowResPersonMask;              //@synthesize lowResPersonMask=_lowResPersonMask - In the implementation block
@property (nonatomic,readonly) NSArray * faceObservations;                //@synthesize faceObservations=_faceObservations - In the implementation block
-(void)dealloc;
-(id)initWithSkinMask:(CVBufferRef)arg1 lowResPersonMask:(CVBufferRef)arg2 faceObservations:(id)arg3 ;
-(CVBufferRef)skinMask;
-(NSArray *)faceObservations;
-(CVBufferRef)lowResPersonMask;
@end
