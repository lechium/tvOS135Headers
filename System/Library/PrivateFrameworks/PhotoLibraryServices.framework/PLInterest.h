/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSKnownKeysMappingStrategy;

@interface PLInterest : NSObject {

	NSKnownKeysMappingStrategy* _allKeysMappingStrategy;
	unsigned long long _indexesOfInterest;

}

@property (nonatomic,retain) NSKnownKeysMappingStrategy * allKeysMappingStrategy;              //@synthesize allKeysMappingStrategy=_allKeysMappingStrategy - In the implementation block
@property (assign,nonatomic) unsigned long long indexesOfInterest;                             //@synthesize indexesOfInterest=_indexesOfInterest - In the implementation block
-(NSKnownKeysMappingStrategy *)allKeysMappingStrategy;
-(void)setAllKeysMappingStrategy:(NSKnownKeysMappingStrategy *)arg1 ;
-(unsigned long long)indexesOfInterest;
-(void)setIndexesOfInterest:(unsigned long long)arg1 ;
@end
