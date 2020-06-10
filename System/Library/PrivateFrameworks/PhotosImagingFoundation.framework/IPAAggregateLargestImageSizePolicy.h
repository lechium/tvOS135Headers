/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@class NSArray;

@interface IPAAggregateLargestImageSizePolicy : IPAImageSizePolicy {

	NSArray* _policies;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)transformSize:(CGSize)arg1 ;
-(id)initWithPolicies:(id)arg1 ;
-(double)transformScaleForSize:(CGSize)arg1 ;
-(BOOL)isBestFitPolicy;
@end

