/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequest.h>
#import <libobjc.A.dylib/VNFaceObservationAcceptingInternal.h>

@class NSString, NSArray;

@interface VNImageBasedRequest : VNRequest <VNFaceObservationAcceptingInternal>

@property (assign,nonatomic) CGRect regionOfInterest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * inputFaceObservations; 
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(NSString *)description;
-(void)setInputFaceObservations:(NSArray *)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(NSArray *)inputFaceObservations;
-(BOOL)validateConfigurationAndReturnError:(id*)arg1 ;
-(CGRect)regionOfInterest;
-(void)setRegionOfInterest:(CGRect)arg1 ;
-(BOOL)getOptionalValidatedInputFaceObservations:(id*)arg1 clippedToRegionOfInterest:(BOOL)arg2 error:(id*)arg3 ;
-(id)validatedInputFaceObservationsClippedToRegionOfInterest:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)isFullCoverageRegionOfInterest;
-(CGRect)regionOfInterestNonIntegralPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(CGRect)regionOfInterestPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)_faceObservationsForRegionOfInterestContainingFaceObservations:(id)arg1 ;
@end

