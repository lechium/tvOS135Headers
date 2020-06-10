/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol PXConfigurableFeedSectionInfosManager
@property (assign,nonatomic) long long entryFilter; 
@property (nonatomic,retain) NSDate * earliestDate; 
@property (assign,nonatomic) unsigned long long fetchLimit; 
@required
-(void)setFetchLimit:(unsigned long long)arg1;
-(unsigned long long)fetchLimit;
-(long long)entryFilter;
-(void)setEntryFilter:(long long)arg1;
-(NSDate *)earliestDate;
-(void)setEarliestDate:(id)arg1;

@end

