/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol PXPlacesGeotaggedItemDataSourceChange <NSObject>
@property (readonly) NSSet * addedItems; 
@property (readonly) NSSet * removedItems; 
@property (readonly) NSSet * updatedItems; 
@required
-(BOOL)hasChanges;
-(void)updateWithChange:(id)arg1;
-(NSSet *)removedItems;
-(NSSet *)updatedItems;
-(NSSet *)addedItems;

@end

