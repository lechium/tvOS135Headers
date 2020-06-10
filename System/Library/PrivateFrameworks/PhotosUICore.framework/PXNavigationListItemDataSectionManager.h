/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXDataSectionManager.h>
#import <libobjc.A.dylib/PXCollectionFetchOperationDelegate.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PHCollection, NSOperationQueue, PHFetchResult, NSString;

@interface PXNavigationListItemDataSectionManager : PXDataSectionManager <PXCollectionFetchOperationDelegate, PXPhotoLibraryUIChangeObserver> {

	BOOL _enabled;
	BOOL _hiddenWhenEmpty;
	PHCollection* _collection;
	NSOperationQueue* _workQueue;
	PHFetchResult* _fetchResult;

}

@property (nonatomic,retain) PHFetchResult * fetchResult;                                      //@synthesize fetchResult=_fetchResult - In the implementation block
@property (getter=isCollectionEmpty,nonatomic,readonly) BOOL collectionEmpty; 
@property (getter=isCollectionVisible,nonatomic,readonly) BOOL collectionVisible; 
@property (nonatomic,readonly) PHCollection * collection;                                      //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHiddenWhenEmpty,nonatomic) BOOL hiddenWhenEmpty;                    //@synthesize hiddenWhenEmpty=_hiddenWhenEmpty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)setEnabled:(BOOL)arg1 ;
-(NSOperationQueue *)workQueue;
-(PHCollection *)collection;
-(BOOL)isEnabled;
-(PHFetchResult *)fetchResult;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(id)initWithChildDataSectionManagers:(id)arg1 ;
-(id)createDataSection;
-(void)setFetchResult:(PHFetchResult *)arg1 ;
-(void)collectionFetchOperationDidComplete:(id)arg1 ;
-(id)initWithCollection:(id)arg1 workQueue:(id)arg2 ;
-(void)setHiddenWhenEmpty:(BOOL)arg1 ;
-(BOOL)isCollectionEmpty;
-(BOOL)isCollectionVisible;
-(void)updateDataSectionIfNecessary;
-(BOOL)isHiddenWhenEmpty;
@end

