/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSString, NSArray;

@interface BWAttachedMediaSwapNode : BWNode {

	NSString* _primaryFormatToAttachedMediaKey;
	NSString* _attachedMediaKeyToPrimaryFormat;
	NSArray* _sampleBufferAttachmentsToTransfer;
	BOOL _generatesDroppedSampleMarkerBuffers;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)initWithPrimaryFormatToAttachedMediaKey:(id)arg1 attachedMediaKeyToPrimaryFormat:(id)arg2 sampleBufferAttachmentsToTransfer:(id)arg3 generatesDroppedSampleMarkerBuffers:(BOOL)arg4 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
@end
