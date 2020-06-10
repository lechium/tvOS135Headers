/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKNotification.h>

@class NSDate, NSSet;

@interface EKResourceChangeNotification : EKNotification

@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,copy) NSSet * resourceChanges; 
+(Class)frozenClass;
+(id)knownRelationshipMultiValueKeys;
-(NSDate *)lastModifiedDate;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSSet *)resourceChanges;
-(void)setResourceChanges:(NSSet *)arg1 ;
-(void)addResourceChange:(id)arg1 ;
-(void)removeResourceChange:(id)arg1 ;
@end
