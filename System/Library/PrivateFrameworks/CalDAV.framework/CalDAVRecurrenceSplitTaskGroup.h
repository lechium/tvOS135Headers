/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSArray;

@interface CalDAVRecurrenceSplitTaskGroup : CoreDAVTaskGroup {

	NSURL* _folderURL;
	NSArray* _actions;

}

@property (assign,nonatomic,__weak) id<CalDAVRecurrenceSplitTaskGroupDelegate> delegate; 
-(void)startTaskGroup;
-(id)initWithCalendar:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3 ;
@end

