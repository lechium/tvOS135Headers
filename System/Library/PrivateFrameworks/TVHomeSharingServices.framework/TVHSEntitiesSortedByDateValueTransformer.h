/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSDate;

@interface TVHSEntitiesSortedByDateValueTransformer : NSValueTransformer {

	unsigned long long _maxEntities;
	NSDate* _earliestDate;
	/*^block*/id _dateForEntityBlock;

}

@property (nonatomic,copy) id dateForEntityBlock;                         //@synthesize dateForEntityBlock=_dateForEntityBlock - In the implementation block
@property (assign,nonatomic) unsigned long long maxEntities;              //@synthesize maxEntities=_maxEntities - In the implementation block
@property (nonatomic,copy) NSDate * earliestDate;                         //@synthesize earliestDate=_earliestDate - In the implementation block
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(NSDate *)earliestDate;
-(void)setEarliestDate:(NSDate *)arg1 ;
-(id)initWithDateForEntityBlock:(/*^block*/id)arg1 ;
-(void)setMaxEntities:(unsigned long long)arg1 ;
-(id)dateForEntityBlock;
-(unsigned long long)maxEntities;
-(void)setDateForEntityBlock:(id)arg1 ;
@end

