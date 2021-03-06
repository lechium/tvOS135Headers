/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CoreDAVItem;

@interface CalDAVCalendarServerNotificationItem : CoreDAVItem {

	CoreDAVLeafItem* _dtstamp;
	CoreDAVItem* _content;

}

@property (nonatomic,retain) CoreDAVLeafItem * dtstamp;              //@synthesize dtstamp=_dtstamp - In the implementation block
@property (nonatomic,retain) CoreDAVItem * content;                  //@synthesize content=_content - In the implementation block
-(id)init;
-(CoreDAVItem *)content;
-(void)setContent:(CoreDAVItem *)arg1 ;
-(id)copyParseRules;
-(CoreDAVLeafItem *)dtstamp;
-(void)setDtstamp:(CoreDAVLeafItem *)arg1 ;
@end

