/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, VEKProgress;

@interface VEKPipelineStage : NSObject {

	BOOL _isCancelled;
	NSArray* _outputType;
	VEKProgress* _progress;

}

@property (readonly) NSArray * inputTypes; 
@property (readonly) NSArray * outputType;                //@synthesize outputType=_outputType - In the implementation block
@property (readonly) VEKProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (assign) BOOL isCancelled;                      //@synthesize isCancelled=_isCancelled - In the implementation block
-(VEKProgress *)progress;
-(BOOL)isCancelled;
-(NSArray *)outputType;
-(void)setIsCancelled:(BOOL)arg1 ;
-(id)runStageWithInput:(id)arg1 ;
-(NSArray *)inputTypes;
-(id)outputTypes;
@end

