/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureSynchronizedDataInternal;

@interface AVCaptureSynchronizedData : NSObject {

	AVCaptureSynchronizedDataInternal* _synchronizedDataInternal;

}

@property (readonly) SCD_Struct_AV7 timestamp; 
-(void)dealloc;
-(SCD_Struct_AV7)timestamp;
-(id)_initWithTimestamp:(SCD_Struct_AV7)arg1 ;
-(SCD_Struct_AV7)adjustedTimestamp;
-(void)setAdjustedTimestamp:(SCD_Struct_AV7)arg1 ;
-(BOOL)hasCorrespondingDepthData;
@end

