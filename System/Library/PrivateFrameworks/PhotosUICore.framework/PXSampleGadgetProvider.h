/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXGadgetProvider.h>

@class NSArray;

@interface PXSampleGadgetProvider : PXGadgetProvider {

	BOOL _includeHorizontal;
	BOOL _hasLoadedData;
	NSArray* _sampleGadgets;
	double _minimumHeight;

}

@property (nonatomic,retain) NSArray * sampleGadgets;               //@synthesize sampleGadgets=_sampleGadgets - In the implementation block
@property (assign,nonatomic) double minimumHeight;                  //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedData;                    //@synthesize hasLoadedData=_hasLoadedData - In the implementation block
@property (nonatomic,readonly) BOOL includeHorizontal;              //@synthesize includeHorizontal=_includeHorizontal - In the implementation block
-(id)init;
-(double)minimumHeight;
-(void)setMinimumHeight:(double)arg1 ;
-(void)loadDataForGadgets;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(BOOL)includeHorizontal;
-(id)initWithMinimumHeight:(double)arg1 ;
-(NSArray *)sampleGadgets;
-(void)setSampleGadgets:(NSArray *)arg1 ;
-(BOOL)hasLoadedData;
-(void)setHasLoadedData:(BOOL)arg1 ;
@end
