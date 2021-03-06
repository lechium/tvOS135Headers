/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSSet, LiveUsage;

@interface Process : NSManagedObject

@property (nonatomic,copy) NSString * bundleName; 
@property (nonatomic,copy) NSDate * firstTimeStamp; 
@property (nonatomic,copy) NSString * procName; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,retain) NSSet * hasLiveUsage; 
@property (nonatomic,retain) LiveUsage * hintLiveUsage; 
+(id)entityName;
+(id)fetchRequest;
@end

