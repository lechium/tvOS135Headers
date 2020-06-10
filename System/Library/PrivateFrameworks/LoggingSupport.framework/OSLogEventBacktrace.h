/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSArray;

@interface OSLogEventBacktrace : NSObject {

	NSArray* _frames;

}

@property (nonatomic,readonly) NSArray * frames;              //@synthesize frames=_frames - In the implementation block
-(void)dealloc;
-(NSArray *)frames;
-(id)initWithBacktrace:(os_log_backtrace_s*)arg1 ;
-(id)initWithSingleFrame:(id)arg1 ;
@end
