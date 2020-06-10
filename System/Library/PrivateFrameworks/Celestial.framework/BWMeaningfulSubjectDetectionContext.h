/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWMeaningfulSubjectDetectionContext : NSObject {

	AcDetContextRef handle;
	SCD_Struct_BW87 state;
	SCD_Struct_BW89 params;
	SCD_Struct_BW90 control;
	void* detectionPlan;
	SCD_Struct_BW38* detectionNetwork;
	SCD_Struct_BW91* detectionOutputs[24];

}

@property (nonatomic,readonly) void* detectionPlan; 
+(void)initialize;
-(void)dealloc;
-(id)initWithDetectionNetworkURL:(id)arg1 context:(void*)arg2 priority:(int)arg3 ;
-(void*)detectionPlan;
@end

