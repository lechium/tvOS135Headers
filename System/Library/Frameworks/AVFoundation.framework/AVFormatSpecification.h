/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputSettings;

@interface AVFormatSpecification : NSObject {

	AVOutputSettings* _outputSettings;
	opaqueCMFormatDescriptionRef _sourceFormatDescription;

}
+(id)formatSpecificationWithOutputSettings:(id)arg1 sourceFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(void)dealloc;
-(opaqueCMFormatDescriptionRef)sourceFormatDescription;
-(id)outputSettings;
-(id)initWithOutputSettings:(id)arg1 sourceFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
@end

