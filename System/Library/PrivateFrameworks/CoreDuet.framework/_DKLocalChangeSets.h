/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DKChangeSet, NSDate;

@interface _DKLocalChangeSets : NSObject {

	_DKChangeSet* _additionChangeSet;
	_DKChangeSet* _deletionChangeSet;
	NSDate* _queryStartDate;

}

@property (nonatomic,retain) _DKChangeSet * additionChangeSet;              //@synthesize additionChangeSet=_additionChangeSet - In the implementation block
@property (nonatomic,retain) _DKChangeSet * deletionChangeSet;              //@synthesize deletionChangeSet=_deletionChangeSet - In the implementation block
@property (nonatomic,retain) NSDate * queryStartDate;                       //@synthesize queryStartDate=_queryStartDate - In the implementation block
-(NSDate *)queryStartDate;
-(id)initWithAdditionChangeSet:(id)arg1 deletionChangeSet:(id)arg2 queryStartDate:(id)arg3 ;
-(_DKChangeSet *)additionChangeSet;
-(_DKChangeSet *)deletionChangeSet;
-(void)setAdditionChangeSet:(_DKChangeSet *)arg1 ;
-(void)setDeletionChangeSet:(_DKChangeSet *)arg1 ;
-(void)setQueryStartDate:(NSDate *)arg1 ;
@end

