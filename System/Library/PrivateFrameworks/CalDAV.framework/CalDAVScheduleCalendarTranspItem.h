/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _transparent;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * transparent;              //@synthesize transparent=_transparent - In the implementation block
@property (nonatomic,readonly) BOOL isScheduleTransparent; 
-(id)copyParseRules;
-(CoreDAVItemWithNoChildren *)transparent;
-(BOOL)isScheduleTransparent;
-(void)setTransparent:(CoreDAVItemWithNoChildren *)arg1 ;
@end
