/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXCollectionsDataSection.h>

@protocol PXDisplayCollection;
@interface _PXSingleCollectionDataSection : PXCollectionsDataSection {

	long long _count;
	id<PXDisplayCollection> _displayCollection;

}

@property (nonatomic,readonly) id<PXDisplayCollection> displayCollection;              //@synthesize displayCollection=_displayCollection - In the implementation block
-(long long)count;
-(id)objectAtIndex:(long long)arg1 ;
-(long long)indexOfCollection:(id)arg1 ;
-(id)initWithDisplayCollection:(id)arg1 ;
-(id<PXDisplayCollection>)displayCollection;
@end

