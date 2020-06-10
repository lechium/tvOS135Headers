/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSURL, NSString, NSSet;

@interface PLFileSystemVolume : PLManagedObject {

	NSURL* _url;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSString * volumeUuidString; 
@property (nonatomic,copy) NSURL * url; 
@property (nonatomic,readonly) BOOL isOffline; 
@property (nonatomic,retain) NSSet * resources; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)entityName;
+(id)volumeForURL:(id)arg1 context:(id)arg2 ;
+(id)volumeForVolumeUUID:(id)arg1 context:(id)arg2 ;
+(id)volumeForObjectUUID:(id)arg1 context:(id)arg2 ;
+(id)predictedURLForVolumeName:(id)arg1 ;
-(NSURL *)url;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(void)didTurnIntoFault;
-(void)awakeFromInsert;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)isOffline;
-(BOOL)supportsCloudUpload;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg1 ;
-(id)payloadForChangedKeys:(id)arg1 ;
-(void)unregisterWithVolumeManager;
-(void)_registerWithVolumeManager;
-(void)_unregisterWithVolumeManager;
-(id)predictedURL;
@end

