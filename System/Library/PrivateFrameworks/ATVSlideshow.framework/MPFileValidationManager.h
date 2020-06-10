/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPFileValidationManager : NSObject
+(id)sharedManager;
+(void)releaseSharedManager;
-(BOOL)validateFiles:(id)arg1 allowAudio:(BOOL)arg2 allowImages:(BOOL)arg3 allowMovies:(BOOL)arg4 extensionsOnly:(BOOL)arg5 ;
-(void)checkFileExtension:(id)arg1 isAudio:(BOOL*)arg2 isImage:(BOOL*)arg3 isVideo:(BOOL*)arg4 ;
-(BOOL)validateFilesForAudio:(id)arg1 extensionsOnly:(BOOL)arg2 ;
-(BOOL)validateFilesForImages:(id)arg1 extensionsOnly:(BOOL)arg2 ;
-(BOOL)validateFilesForMovies:(id)arg1 extensionsOnly:(BOOL)arg2 ;
-(id)resolveAliasPath:(id)arg1 ;
@end
