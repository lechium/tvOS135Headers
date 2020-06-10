/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMBProcessingOptions;

@interface HMBMirrorOutputGroup : HMFObject {

	HMBProcessingOptions* _options;
	unsigned long long _blockRow;

}

@property (nonatomic,readonly) unsigned long long blockRow;                 //@synthesize blockRow=_blockRow - In the implementation block
@property (nonatomic,readonly) HMBProcessingOptions * options;              //@synthesize options=_options - In the implementation block
-(id)description;
-(HMBProcessingOptions *)options;
-(unsigned long long)blockRow;
-(id)initWithBlockRow:(unsigned long long)arg1 options:(id)arg2 ;
@end

