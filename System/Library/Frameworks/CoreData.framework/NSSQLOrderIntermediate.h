/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSArray;

@interface NSSQLOrderIntermediate : NSSQLIntermediate {

	NSArray* _sortDescriptors;

}
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithSortDescriptors:(id)arg1 inScope:(id)arg2 ;
-(id)_generateSQLForOrderedManyToManyInverse:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForOrderedToManyInverse:(id)arg1 inContext:(id)arg2 ;
@end

