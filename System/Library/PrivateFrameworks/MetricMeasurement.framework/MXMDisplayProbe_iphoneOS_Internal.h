/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <libobjc.A.dylib/MXMDisplayProbePlatform.h>

@protocol MXMDisplayProbePlatformDelegate, OS_dispatch_queue;
@class MXMDisplayDescriptor, NSObject, NSString;

@interface MXMDisplayProbe_iphoneOS_Internal : NSObject <MXMDisplayProbePlatform> {

	id<MXMDisplayProbePlatformDelegate> _delegate;
	MXMDisplayDescriptor* _displayDescriptor;
	SCD_Struct_MX4 _lastSample;
	NSObject*<OS_dispatch_queue> _queue;
	double _pollRate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MXMDisplayProbePlatformDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned long long)_displayIndexWithDescriptor:(id)arg1 ;
+(id)_allDescriptors;
-(id<MXMDisplayProbePlatformDelegate>)delegate;
-(void)setDelegate:(id<MXMDisplayProbePlatformDelegate>)arg1 ;
-(void)_start;
-(void)_stop;
-(void)_loop;
-(void)_pollMain;
-(id)initPrivateWithDescriptor:(id)arg1 queue:(id)arg2 ;
-(SCD_Struct_MX4)_pollDisplayForSample;
@end

