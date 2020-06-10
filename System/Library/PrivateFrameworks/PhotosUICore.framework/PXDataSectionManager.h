/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXDataSectionManagerChangeObserver.h>

@protocol NSObjectNSCopying;
@class PXDataSection, NSArray, PXArrayChangeDetails, NSString;

@interface PXDataSectionManager : PXObservable <PXDataSectionManagerChangeObserver> {

	PXDataSection* _dataSection;
	NSArray* _childDataSectionManagers;
	id<NSObject><NSCopying> _outlineObject;
	PXArrayChangeDetails* _changeDetailsFromPreviousDataSection;
	PXDataSection* _previousDataSection;
	unsigned long long _previousDataSectionIdentifier;

}

@property (nonatomic,copy) NSArray * childDataSectionManagers;                                           //@synthesize childDataSectionManagers=_childDataSectionManagers - In the implementation block
@property (nonatomic,retain) id<NSObject><NSCopying> outlineObject;                                      //@synthesize outlineObject=_outlineObject - In the implementation block
@property (nonatomic,readonly) PXDataSection * dataSection; 
@property (nonatomic,readonly) PXDataSection * dataSectionIfCreated; 
@property (nonatomic,readonly) PXArrayChangeDetails * changeDetailsFromPreviousDataSection;              //@synthesize changeDetailsFromPreviousDataSection=_changeDetailsFromPreviousDataSection - In the implementation block
@property (nonatomic,readonly) PXDataSection * previousDataSection;                                      //@synthesize previousDataSection=_previousDataSection - In the implementation block
@property (nonatomic,readonly) unsigned long long previousDataSectionIdentifier;                         //@synthesize previousDataSectionIdentifier=_previousDataSectionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id<NSObject><NSCopying>)outlineObject;
-(id)initWithChildDataSectionManagers:(id)arg1 ;
-(id)createDataSection;
-(id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1 ;
-(id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2 ;
-(void)_registerAsChangeObserverForDataSectionManagers:(id)arg1 ;
-(void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg1 ;
-(id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3 ;
-(PXDataSection *)dataSection;
-(void)_setDataSection:(id)arg1 changeDetails:(id)arg2 ;
-(void)updateDataSectionWithChangeDetails:(id)arg1 ;
-(PXDataSection *)dataSectionIfCreated;
-(void)setChildDataSectionManagers:(NSArray *)arg1 ;
-(void)childDataSectionManager:(id)arg1 didChangeDataSectionWithChangeDetails:(id)arg2 ;
-(NSArray *)childDataSectionManagers;
-(void)setOutlineObject:(id<NSObject><NSCopying>)arg1 ;
-(PXArrayChangeDetails *)changeDetailsFromPreviousDataSection;
-(PXDataSection *)previousDataSection;
-(unsigned long long)previousDataSectionIdentifier;
@end

