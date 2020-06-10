/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem {

	CoreDAVHrefItem* _href;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;              //@synthesize href=_href - In the implementation block
+(id)copyParseRules;
-(id)description;
-(void)write:(id)arg1 ;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
@end

