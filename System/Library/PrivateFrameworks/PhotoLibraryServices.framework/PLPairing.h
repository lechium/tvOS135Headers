/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSPredicate;

@interface PLPairing : NSObject {

	NSPredicate* _locatedInUsersPhotoLibrary;
	os_unfair_lock_s _lock;

}
+(id)getMetadataForAsset:(id)arg1 ;
-(id)init;
-(BOOL)processPairingForEntireLibraryInContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)processPairingForGroupIDs:(id)arg1 inContext:(id)arg2 duplicateDetection:(BOOL)arg3 error:(id*)arg4 ;
@end
