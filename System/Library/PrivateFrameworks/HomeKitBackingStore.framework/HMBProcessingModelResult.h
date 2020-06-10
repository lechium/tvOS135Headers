/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMBModel, HMBProcessingOptions, NAFuture;

@interface HMBProcessingModelResult : HMFObject {

	HMBModel* _model;
	HMBProcessingOptions* _options;
	NAFuture* _mirrorOutputFuture;

}

@property (readonly) HMBModel * model;                            //@synthesize model=_model - In the implementation block
@property (readonly) HMBProcessingOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) NAFuture * mirrorOutputFuture;               //@synthesize mirrorOutputFuture=_mirrorOutputFuture - In the implementation block
+(id)alloc;
-(HMBProcessingOptions *)options;
-(HMBModel *)model;
-(id)attributeDescriptions;
-(NAFuture *)mirrorOutputFuture;
-(id)initWithModel:(id)arg1 options:(id)arg2 mirrorOutputFuture:(id)arg3 ;
@end

