/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreML/CoreML-Structs.h>
@interface MLModelDescriptionUtils : NSObject
+(Metadata*)createMetaData:(id)arg1 ;
+(ImageFeatureType*)getImageFeatureTypeFromConstraint:(id)arg1 ;
+(ArrayFeatureType*)getArrayFeatureTypeFromConstraint:(id)arg1 ;
+(DictionaryFeatureType*)getDictionaryFeatureTypeFromConstraint:(id)arg1 error:(id*)arg2 ;
+(SequenceFeatureType*)getSequenceFeatureTypeFromConstraint:(id)arg1 error:(id*)arg2 ;
+(FeatureType*)createFeatureTypeFromFeatureDescription:(id)arg1 error:(id*)arg2 ;
+(void)copyFeatureDescriptionFrom:(id)arg1 to:(FeatureDescription*)arg2 error:(id*)arg3 ;
+(ModelDescription*)createModelDescription:(id)arg1 error:(id*)arg2 ;
+(BOOL)saveModelDescription:(id)arg1 toSpecification:(MLModelSpecification*)arg2 error:(id*)arg3 ;
@end

