/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ParsecModel.framework/ParsecModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate;

@interface PARImagesSession : NSManagedObject

@property (assign,nonatomic) short other; 
@property (assign,nonatomic) short recentResult; 
@property (nonatomic,copy) NSDate * timestamp; 
@property (assign,nonatomic) short zkw; 
@property (assign,nonatomic) short image; 
@property (assign,nonatomic) short querySuggestion; 
+(id)fetchRequest;
@end
