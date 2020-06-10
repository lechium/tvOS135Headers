/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@class NSArray;

@interface PAMediaConversionServiceCompositeImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {

	NSArray* _policies;

}

@property (retain) NSArray * policies;              //@synthesize policies=_policies - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)policyWithPolicies:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)policies;
-(id)processMetadata:(id)arg1 ;
-(void)setPolicies:(NSArray *)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
@end

