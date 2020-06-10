/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXDataSection.h>

@class NSArray;

@interface PXArrayDataSection : PXDataSection {

	NSArray* _sectionContent;

}

@property (nonatomic,copy,readonly) NSArray * sectionContent;              //@synthesize sectionContent=_sectionContent - In the implementation block
-(long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PX43*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(long long)arg1 ;
-(long long)indexOfObject:(id)arg1 ;
-(id)initWithOutlineObject:(id)arg1 ;
-(id)initWithOutlineObject:(id)arg1 sectionContent:(id)arg2 ;
-(id)initWithSectionContent:(id)arg1 ;
-(long long)validatedIndexOfObject:(id)arg1 hintIndex:(long long)arg2 ;
-(NSArray *)sectionContent;
@end

