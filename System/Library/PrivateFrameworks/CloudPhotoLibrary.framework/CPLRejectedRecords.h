/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CPLRejectedRecords : NSObject {

	NSMutableDictionary* _records;
	NSMutableDictionary* _reasons;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)recordWithScopedIdentifier:(id)arg1 ;
-(void)removeRejectedRecordsWithScopedIdentifiers:(id)arg1 ;
-(void)enumerateRecordsAndReasonsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)rejectsTheSameRecordsAs:(id)arg1 ;
-(id)rejectedDescriptions;
@end

