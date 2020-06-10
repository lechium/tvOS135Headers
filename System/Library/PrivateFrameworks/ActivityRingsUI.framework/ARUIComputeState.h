/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLComputePipelineState;
@interface ARUIComputeState : NSObject {

	id<MTLComputePipelineState> _computePipelineState;

}

@property (nonatomic,retain) id<MTLComputePipelineState> computePipelineState;              //@synthesize computePipelineState=_computePipelineState - In the implementation block
-(void)setComputePipelineState:(id<MTLComputePipelineState>)arg1 ;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(id<MTLComputePipelineState>)computePipelineState;
-(id)computeFunctionFromLibrary:(id)arg1 ;
@end

