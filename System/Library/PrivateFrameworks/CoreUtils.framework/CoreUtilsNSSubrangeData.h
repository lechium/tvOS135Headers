/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData;

@interface CoreUtilsNSSubrangeData : NSData {

	NSData* _data;
	NSRange _range;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(BOOL)_isCompact;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(id)initWithData:(id)arg1 range:(NSRange)arg2 ;
-(void)getBytes:(void*)arg1 ;
@end

