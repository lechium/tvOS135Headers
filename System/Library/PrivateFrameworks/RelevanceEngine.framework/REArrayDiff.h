/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface REArrayDiff : NSObject {

	NSArray* _allOperations;

}

@property (nonatomic,readonly) NSArray * allOperations;              //@synthesize allOperations=_allOperations - In the implementation block
+(id)diffFromElements:(id)arg1 toElements:(id)arg2 equalComparator:(/*^block*/id)arg3 hashGenerator:(/*^block*/id)arg4 changeComparator:(/*^block*/id)arg5 ;
+(id)_createSetFromElementArray:(id)arg1 equalComparator:(/*^block*/id)arg2 hashGenerator:(/*^block*/id)arg3 ;
+(id)_indexSetFromSet:(id)arg1 ;
+(id)diffFromElements:(id)arg1 toElements:(id)arg2 ;
-(NSArray *)allOperations;
-(void)enumerateOperationsUsingBlock:(/*^block*/id)arg1 ;
@end

