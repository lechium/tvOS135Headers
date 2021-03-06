/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTimedMetadataGroup.h>

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup {

	AVTimedMetadataGroupInternal* _mutablePriv;

}

@property (assign,nonatomic) SCD_Struct_AV8 timeRange; 
@property (nonatomic,copy) NSArray * items; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setTimeRange:(SCD_Struct_AV8)arg1 ;
-(SCD_Struct_AV8)timeRange;
-(id)initWithItems:(id)arg1 timeRange:(SCD_Struct_AV8)arg2 ;
@end

