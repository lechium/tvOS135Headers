/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem {

	NSMutableSet* _comps;

}

@property (nonatomic,retain) NSMutableSet * comps;              //@synthesize comps=_comps - In the implementation block
@property (nonatomic,readonly) NSSet * compNames; 
-(id)description;
-(id)init;
-(id)copyParseRules;
-(id)childrenToWrite;
-(NSSet *)compNames;
-(id)componentsAsString;
-(void)addComp:(id)arg1 ;
-(NSMutableSet *)comps;
-(void)setComps:(NSMutableSet *)arg1 ;
@end

