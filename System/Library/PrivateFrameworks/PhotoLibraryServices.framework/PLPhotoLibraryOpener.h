/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLLibraryServicesManager;

@interface PLPhotoLibraryOpener : NSObject {

	BOOL _reportInProgressUpgrades;
	PLLibraryServicesManager* _libraryServicesManager;

}

@property (readonly) PLLibraryServicesManager * libraryServicesManager;              //@synthesize libraryServicesManager=_libraryServicesManager - In the implementation block
+(BOOL)canAutomaticallyCreateLibrary;
-(PLLibraryServicesManager *)libraryServicesManager;
-(BOOL)openPhotoLibraryDatabase:(id*)arg1 ;
-(id)initWithLibraryServicesManager:(id)arg1 reportInProgressUpgrades:(BOOL)arg2 ;
-(BOOL)createPhotoLibraryDatabase:(id*)arg1 ;
-(BOOL)lightweightPermissionCheckWithError:(id*)arg1 ;
-(BOOL)lightweightPermissionCheckWithPath:(id)arg1 isDir:(BOOL)arg2 error:(id*)arg3 ;
@end
