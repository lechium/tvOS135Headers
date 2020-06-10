/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@class PXInboxAggregateDataSourceManager, NSString;

@interface PXInboxGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver> {

	PXInboxAggregateDataSourceManager* _dataSourceManager;

}

@property (nonatomic,readonly) PXInboxAggregateDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithDataSourceManager:(id)arg1 ;
-(void)loadDataForGadgets;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(PXInboxAggregateDataSourceManager *)dataSourceManager;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_updateGadgets;
-(void)_lastExitedForYouDateDidChange:(id)arg1 ;
-(void)_updateDataSourceRangesOfCurrentGadgets;
-(void)_updateLastSeenDateOfCurrentGadgets;
@end

