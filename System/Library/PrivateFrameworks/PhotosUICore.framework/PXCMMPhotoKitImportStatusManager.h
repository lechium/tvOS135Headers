/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXAssetImportStatusManager.h>

@class NSHashTable, NSMutableDictionary, NSString;

@interface PXCMMPhotoKitImportStatusManager : NSObject <PXAssetImportStatusManager> {

	NSHashTable* _statusObservers;
	NSMutableDictionary* _simulatedStateByAssetID;
	BOOL _supportsStateSimulation;

}

@property (nonatomic,readonly) BOOL supportsStateSimulation;              //@synthesize supportsStateSimulation=_supportsStateSimulation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)importStateForAsset:(id)arg1 ;
-(void)addAssetImportStatusObserver:(id)arg1 ;
-(void)removeAssetImportStatusObserver:(id)arg1 ;
-(id)initAllowingSimulation:(BOOL)arg1 ;
-(void)_notifySimulationObserversForAssetReference:(id)arg1 ;
-(void)beginSimulatedImportForAssetReference:(id)arg1 ;
-(void)completeSimulatedImportForAssetReference:(id)arg1 withSuccess:(BOOL)arg2 ;
-(long long)_simulatedStateForAsset:(id)arg1 ;
-(BOOL)supportsStateSimulation;
@end

