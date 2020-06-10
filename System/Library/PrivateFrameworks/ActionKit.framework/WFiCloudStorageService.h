/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFFileStorageService.h>

@class NSProgress, NSString, WFContentSource;

@interface WFiCloudStorageService : NSObject <WFFileStorageService> {

	NSProgress* _progress;

}

@property (assign,nonatomic,__weak) NSProgress * progress;                            //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class objectRepresentationClass; 
@property (nonatomic,readonly) Class accessResourceClass; 
@property (nonatomic,readonly) NSString * storageLocationPrefix; 
@property (nonatomic,readonly) BOOL hasPublicURLs; 
@property (nonatomic,readonly) BOOL supportsJumpingToSubdirectoryInUI; 
@property (nonatomic,readonly) NSString * associatedAppBundleIdentifier; 
@property (nonatomic,readonly) WFContentSource * contentSource; 
+(id)serviceName;
+(id)containerName;
+(id)containerIdentifier;
+(Class)resultItemClass;
+(void)createDocumentsDirectoryIfNecessary;
+(id)documentsDirectoryWithError:(id*)arg1 ;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSString *)associatedAppBundleIdentifier;
-(WFContentSource *)contentSource;
-(void)retrieveFilesWithUserInterface:(id)arg1 initialDirectoryPath:(id)arg2 options:(unsigned long long)arg3 progress:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)saveFiles:(id)arg1 withUserInterface:(id)arg2 options:(unsigned long long)arg3 progress:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)retrieveFilesAtPath:(id)arg1 options:(unsigned long long)arg2 progress:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)saveFiles:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 progress:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)getSharingURLsForFiles:(id)arg1 usePublicURLs:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteFiles:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createFolderAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)appendText:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)searchFiles:(id)arg1 inPath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(Class)objectRepresentationClass;
-(Class)accessResourceClass;
-(NSString *)storageLocationPrefix;
-(BOOL)hasPublicURLs;
-(BOOL)supportsJumpingToSubdirectoryInUI;
-(void)retrieveFilesForAppendingAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
