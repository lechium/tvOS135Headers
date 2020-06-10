/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/TVHKImageLoadParamsOperation.h>

@class NSOperation;

@interface TVHKMediaEntityStoreImageLoadOperation : TVHKImageLoadParamsOperation {

	NSOperation* _currentSubOperation;

}

@property (nonatomic,retain) NSOperation * currentSubOperation;              //@synthesize currentSubOperation=_currentSubOperation - In the implementation block
-(void)cancel;
-(void)executionDidBegin;
-(id)initWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(NSOperation *)currentSubOperation;
-(void)setCurrentSubOperation:(NSOperation *)arg1 ;
-(void)_startLookupOperation;
-(id)_mediaEntityImageLoadParams;
-(id)_templateImageURLStringFromLookupResults:(id)arg1 storeID:(id)arg2 ;
-(void)_startImageLoadOperationWithTemplateImageURLString:(id)arg1 ;
@end
