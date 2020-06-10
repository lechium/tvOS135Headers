/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray;

@interface PXStackedDataSource : PXSectionedDataSource {

	NSArray* _dataSections;

}

@property (nonatomic,readonly) NSArray * dataSections;              //@synthesize dataSections=_dataSections - In the implementation block
-(id)init;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(id)initWithDataSections:(id)arg1 ;
-(id)changeDetailsToDataSource:(id)arg1 sectionChanges:(id)arg2 itemChanges:(id)arg3 ;
-(NSArray *)dataSections;
@end

