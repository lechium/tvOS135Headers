/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXObservable.h>

@class PXVideoContentProviderLoadingResult, NSString;

@interface PXVideoContentProvider : PXObservable {

	PXVideoContentProviderLoadingResult* _loadingResult;
	double _loadingProgress;
	NSString* _contentIdentifier;

}

@property (nonatomic,retain) PXVideoContentProviderLoadingResult * loadingResult;              //@synthesize loadingResult=_loadingResult - In the implementation block
@property (assign,nonatomic) double loadingProgress;                                           //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentIdentifier;                              //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
-(void)cancelLoading;
-(NSString *)contentIdentifier;
-(void)beginLoadingWithPriority:(long long)arg1 ;
-(double)loadingProgress;
-(id)mutableChangeObject;
-(PXVideoContentProviderLoadingResult *)loadingResult;
-(void)setLoadingResult:(PXVideoContentProviderLoadingResult *)arg1 ;
-(void)setLoadingProgress:(double)arg1 ;
@end

