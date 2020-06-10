/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLSidecar.h>

@class NSString, NSNumber, NSDate, PLManagedAsset, NSURL, PLInternalResource, NSManagedObjectID;

@interface PLInternalResourceSidecarRepresentation : NSObject <PLSidecar> {

	PLInternalResource* _resource;

}

@property (assign,nonatomic,__weak) PLInternalResource * resource;                  //@synthesize resource=_resource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,retain,readonly) NSString * filename; 
@property (nonatomic,retain,readonly) NSDate * captureDate; 
@property (nonatomic,retain,readonly) NSDate * modificationDate; 
@property (nonatomic,retain,readonly) NSURL * fileURL; 
@property (nonatomic,retain,readonly) NSNumber * compressedSize; 
@property (nonatomic,readonly) long long ptpTrashedState; 
@property (nonatomic,readonly) unsigned resourceType; 
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) NSNumber * index; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) PLManagedAsset * asset; 
@property (nonatomic,readonly) short indexValue; 
@property (nonatomic,readonly) unsigned long long compressedSizeValue; 
-(NSString *)description;
-(NSURL *)fileURL;
-(NSNumber *)index;
-(NSString *)filename;
-(NSDate *)modificationDate;
-(NSManagedObjectID *)objectID;
-(id)initWithResource:(id)arg1 ;
-(id)extension;
-(PLInternalResource *)resource;
-(PLManagedAsset *)asset;
-(unsigned)resourceType;
-(void)setResource:(PLInternalResource *)arg1 ;
-(NSString *)originalFilename;
-(NSString *)uniformTypeIdentifier;
-(long long)ptpTrashedState;
-(void)setPtpTrashedState:(long long)arg1 ;
-(NSNumber *)compressedSize;
-(NSDate *)captureDate;
-(short)indexValue;
-(unsigned long long)compressedSizeValue;
@end
