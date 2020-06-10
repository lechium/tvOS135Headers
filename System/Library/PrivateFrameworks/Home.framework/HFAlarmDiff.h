/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface HFAlarmDiff : NSObject {

	NSSet* _updatedAlarms;
	NSSet* _addedAlarms;
	NSSet* _deletedAlarms;
	NSSet* _unmodifiedAlarms;

}

@property (nonatomic,copy) NSSet * updatedAlarms;                 //@synthesize updatedAlarms=_updatedAlarms - In the implementation block
@property (nonatomic,copy) NSSet * addedAlarms;                   //@synthesize addedAlarms=_addedAlarms - In the implementation block
@property (nonatomic,copy) NSSet * deletedAlarms;                 //@synthesize deletedAlarms=_deletedAlarms - In the implementation block
@property (nonatomic,copy) NSSet * unmodifiedAlarms;              //@synthesize unmodifiedAlarms=_unmodifiedAlarms - In the implementation block
@property (nonatomic,readonly) BOOL inputWasEqual; 
+(id)generateAlarmDiffFromSet:(id)arg1 toSet:(id)arg2 ;
-(id)description;
-(void)setUnmodifiedAlarms:(NSSet *)arg1 ;
-(void)setAddedAlarms:(NSSet *)arg1 ;
-(void)setDeletedAlarms:(NSSet *)arg1 ;
-(void)setUpdatedAlarms:(NSSet *)arg1 ;
-(NSSet *)addedAlarms;
-(NSSet *)deletedAlarms;
-(NSSet *)updatedAlarms;
-(NSSet *)unmodifiedAlarms;
-(BOOL)inputWasEqual;
@end

