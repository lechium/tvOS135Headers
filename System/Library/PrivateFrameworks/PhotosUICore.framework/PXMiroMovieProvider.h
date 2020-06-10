/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXMovieProvider.h>

@class MiroMovie, NSSet;

@interface PXMiroMovieProvider : PXMovieProvider {

	MiroMovie* __miroMovie;

}

@property (setter=_setMiroMovie:,nonatomic,retain) MiroMovie * _miroMovie;              //@synthesize _miroMovie=__miroMovie - In the implementation block
@property (nonatomic,readonly) NSSet * defaultAssets; 
+(void)initialize;
+(void*)_loadMiroFrameworkIfNeeded;
+(void)preloadMiroFrameworkIfNeeded;
-(id)movieViewController;
-(BOOL)canPlayMovie;
-(id)diagnosticsItemProvider;
-(BOOL)ppt_runTest:(id)arg1 options:(id)arg2 ;
-(Class)_miroMovieClass;
-(MiroMovie *)_miroMovie;
-(NSSet *)defaultAssets;
-(id)miroMovie:(id)arg1 createAndNavigateToMemoryFromCollection:(id)arg2 ;
-(void)_navigateToMemory:(id)arg1 ;
-(void)_setMiroMovie:(id)arg1 ;
@end

