/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MXMDisplayProbePlatform <NSObject>
@property (assign,nonatomic,__weak) id<MXMDisplayProbePlatformDelegate> delegate; 
@required
+(id)_allDescriptors;
-(id<MXMDisplayProbePlatformDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)_start;
-(void)_stop;
-(id)initPrivateWithDescriptor:(id)arg1 queue:(id)arg2;

@end

