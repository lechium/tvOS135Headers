/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray;

@interface PXGadgetDataSource : PXSectionedDataSource {

	NSArray* _gadgets;

}

@property (nonatomic,copy,readonly) NSArray * gadgets;              //@synthesize gadgets=_gadgets - In the implementation block
@property (readonly) BOOL hasNoContentGadget; 
-(id)init;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(NSArray *)gadgets;
-(id)initWithGadgets:(id)arg1 ;
-(id)gadgetAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForGadget:(id)arg1 ;
-(id)gadgetsOfType:(unsigned long long)arg1 ;
-(id)gadgetsOfClass:(Class)arg1 ;
-(id)gadgetWithId:(id)arg1 ;
-(BOOL)hasNoContentGadget;
@end

