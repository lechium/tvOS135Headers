/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVHeliumEffect.h>

@interface PVColorCorrectEffect : PVHeliumEffect {

	int _look;

}
+(void)registerEffects;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV19)arg1 inputs:(const PVInputHGNodeMap<unsigned int>*)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
@end

