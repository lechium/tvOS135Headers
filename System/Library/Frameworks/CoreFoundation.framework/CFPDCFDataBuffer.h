/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDDataBuffer.h>

@interface CFPDCFDataBuffer : CFPDDataBuffer {

	CFDataRef data;

}
-(void)dealloc;
-(unsigned long long)length;
-(void*)bytes;
-(CFDataRef)copyCFData;
-(id)copyXPCData;
-(id)initWithCFData:(CFDataRef)arg1 ;
@end

