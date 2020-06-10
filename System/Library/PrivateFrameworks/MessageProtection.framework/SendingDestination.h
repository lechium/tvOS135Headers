/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface SendingDestination : NSManagedObject

@property (nonatomic,copy) NSString * destinationHash; 
@property (nonatomic,copy) NSDate * registrationDate; 
@property (assign,nonatomic) int validOutgoingCounter; 
+(id)fetchRequest;
@end

