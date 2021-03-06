/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXLayoutGenerator.h>

@class PXMemoriesFeedLayoutMetrics;

@interface PXMemoriesFeedLayoutGenerator : PXLayoutGenerator {

	BOOL _includeDateHeader;
	BOOL _isFirstHeader;

}

@property (assign,nonatomic) BOOL includeDateHeader;                           //@synthesize includeDateHeader=_includeDateHeader - In the implementation block
@property (assign,nonatomic) BOOL isFirstHeader;                               //@synthesize isFirstHeader=_isFirstHeader - In the implementation block
@property (nonatomic,copy) PXMemoriesFeedLayoutMetrics * metrics; 
-(id)initWithMetrics:(id)arg1 ;
-(BOOL)includeDateHeader;
-(void)setIncludeDateHeader:(BOOL)arg1 ;
-(BOOL)isFirstHeader;
-(void)setIsFirstHeader:(BOOL)arg1 ;
@end

