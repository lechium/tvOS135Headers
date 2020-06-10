/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibraryPathManager;

@interface PLMigrationPostProcessingToken : NSObject {

	BOOL _tokenIsKnownToBeMissing;
	PLPhotoLibraryPathManager* _pathManager;

}
-(id)initWithPathManager:(id)arg1 ;
-(BOOL)isTokenPresent;
-(BOOL)isTokenValid;
-(void)writeToken;
-(id)_tokenFullPath;
-(void)incrementToken;
-(void)removeToken;
-(void)invalidateCachedTokenState;
-(void)_writeTokenValue:(int)arg1 ;
-(int)_tokenValue;
@end

