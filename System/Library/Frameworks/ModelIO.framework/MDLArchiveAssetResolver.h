/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLAssetResolver.h>

@class NSURL, NSMutableDictionary, NSString;

@interface MDLArchiveAssetResolver : NSObject <MDLAssetResolver> {

	NSURL* _archiveURL;
	NSMutableDictionary* _archiveDictionary;
	NSString* _rootUSDPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(id)resolveAssetNamed:(id)arg1 ;
-(BOOL)canResolveAssetNamed:(id)arg1 ;
-(void)addResolvedAssetNamed:(id)arg1 offset:(unsigned long long)arg2 fileSize:(unsigned long long)arg3 ;
-(id)resolveInsideArchiveWithAssetNamed:(id)arg1 ;
-(id)assetNamesInArchive;
-(void)removeAssetNamed:(id)arg1 ;
@end
