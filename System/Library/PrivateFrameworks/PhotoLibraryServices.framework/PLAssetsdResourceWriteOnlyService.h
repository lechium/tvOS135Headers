/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdResourceWriteOnlyServiceProtocol.h>

@class NSString;

@interface PLAssetsdResourceWriteOnlyService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceWriteOnlyServiceProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)saveAssetWithDataAndPorts:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)saveAssetWithDataAndPorts:(id)arg1 clientConnection:(id)arg2 imageSurface:(id)arg3 previewImageSurface:(id)arg4 reply:(/*^block*/id)arg5 ;
@end

