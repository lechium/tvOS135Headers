/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/_PFBatchFaultingArray.h>

@class NSPersistentHistoryTransaction;

@interface _PFBatchHistoryFaultingArray : _PFBatchFaultingArray {

	NSPersistentHistoryTransaction* _transaction;

}
+(Class)classForKeyedUnarchiver;
-(Class)classForCoder;
-(Class)classForArchiver;
-(void)_setTransaction:(id)arg1 ;
-(id)initWithPFBatchFaultingArray:(id)arg1 ;
-(id)transaction;
@end

