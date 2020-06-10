/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSManagedObjectID, NSNumber, NSDictionary, NSString;


@protocol PFHistoryAnalyzerObjectState
@property (nonatomic,readonly) NSManagedObjectID * analyzedObjectID; 
@property (nonatomic,readonly) NSNumber * originalTransactionNumber; 
@property (nonatomic,readonly) long long originalChangeType; 
@property (nonatomic,readonly) NSNumber * finalTransactionNumber; 
@property (nonatomic,readonly) long long finalChangeType; 
@property (nonatomic,readonly) NSDictionary * tombstone; 
@property (nonatomic,readonly) NSString * finalChangeAuthor; 
@required
-(NSDictionary *)tombstone;
-(void)updateWithChange:(id)arg1;
-(NSManagedObjectID *)analyzedObjectID;
-(NSNumber *)originalTransactionNumber;
-(long long)originalChangeType;
-(NSNumber *)finalTransactionNumber;
-(long long)finalChangeType;
-(NSString *)finalChangeAuthor;

@end
