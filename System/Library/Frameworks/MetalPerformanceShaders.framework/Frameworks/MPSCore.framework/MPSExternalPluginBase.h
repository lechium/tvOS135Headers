/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSExternalPluginBase.h>

@protocol MPSExternalPluginBase <NSObject>
@required
-(id)device;
-(id)initWithDevice:(id)arg1;
-(unsigned long long)maxBatchSize;

@end


@protocol MTLDevice;
@class NSString;

@interface MPSExternalPluginBase : NSObject <MPSExternalPluginBase> {

	MPSExternalPluginBase* _self;
	id<MTLDevice> _device;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(id)init;
-(id)device;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)maxBatchSize;
@end

