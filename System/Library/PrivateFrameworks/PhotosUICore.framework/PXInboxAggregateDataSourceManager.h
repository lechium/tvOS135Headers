/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class NSArray, PXInboxAggregateDataSource, NSString;

@interface PXInboxAggregateDataSourceManager : PXSectionedDataSourceManager <PXSectionedDataSourceManagerObserver, PXChangeObserver> {

	NSArray* _dataSourceManagers;

}

@property (nonatomic,readonly) PXInboxAggregateDataSource * dataSource; 
@property (nonatomic,readonly) NSArray * dataSourceManagers;                         //@synthesize dataSourceManagers=_dataSourceManagers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)createInitialDataSource;
-(void)_updateDataSource;
-(id)_dataSourceSnapshot;
-(id)initWithDataSourceManagers:(id)arg1 ;
-(NSArray *)dataSourceManagers;
@end

