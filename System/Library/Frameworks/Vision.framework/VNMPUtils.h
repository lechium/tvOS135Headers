/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface VNMPUtils : NSObject
+(double)getHostTime;
+(unsigned long long)getHostTimeInNanos;
+(id)createErrorWithCode:(long long)arg1 andMessage:(id)arg2 ;
+(void)freeVImageBuffer:(vImage_Buffer*)arg1 ;
+(long long)parseExifTimestamp:(id)arg1 ;
@end
