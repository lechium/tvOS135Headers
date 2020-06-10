/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSDateComponentsFormatter;

@interface AVDurationTimeFormatter : NSFormatter {

	NSDateComponentsFormatter* _longerFormatter;
	NSDateComponentsFormatter* _shorterFormatter;

}

@property (readonly) NSDateComponentsFormatter * longerFormatter;               //@synthesize longerFormatter=_longerFormatter - In the implementation block
@property (readonly) NSDateComponentsFormatter * shorterFormatter;              //@synthesize shorterFormatter=_shorterFormatter - In the implementation block
-(id)init;
-(id)stringForObjectValue:(id)arg1 ;
-(id)stringForTimeInterval:(double)arg1 ;
-(NSDateComponentsFormatter *)longerFormatter;
-(NSDateComponentsFormatter *)shorterFormatter;
@end

