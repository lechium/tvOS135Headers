/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MKPlaceItem.h>

@class NSString, MKMapItem, EKCalendarItem, CNContact;

@interface _MKMapItemPlaceItem : NSObject <_MKPlaceItem> {

	MKMapItem* _mapItem;
	unsigned long long _options;
	BOOL _isIntermediateMapItem;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) BOOL isIntermediateMapItem; 
@property (nonatomic,readonly) EKCalendarItem * calendarItem; 
@property (nonatomic,readonly) CNContact * contact; 
@property (nonatomic,readonly) BOOL isContactPersisted; 
@property (nonatomic,readonly) BOOL hasContactOnly; 
@property (nonatomic,readonly) unsigned long long options; 
+(id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2 ;
+(id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2 isIntermediateMapItem:(BOOL)arg3 ;
-(NSString *)name;
-(unsigned long long)options;
-(MKMapItem *)mapItem;
-(CNContact *)contact;
-(EKCalendarItem *)calendarItem;
-(BOOL)isIntermediateMapItem;
-(BOOL)isContactPersisted;
-(BOOL)hasContactOnly;
-(void)setIsSuggestedFavorite:(BOOL)arg1 ;
@end

