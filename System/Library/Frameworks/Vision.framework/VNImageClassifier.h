/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface VNImageClassifier : NSObject
+(BOOL)computeImageDescriptorsWithImage:(id)arg1 regionOfInterest:(CGRect)arg2 usingDescriptorProcessor:(ImageDescriptorProcessorAbstract*)arg3 tileCount:(int)arg4 augmentationMode:(unsigned)arg5 scalingImage:(BOOL)arg6 resultantDescriptorBuffer:(ImageDescriptorBufferAbstract*)arg7 debugIntermediatesDumpPath:(id)arg8 outputDebugDictionary:(id)arg9 options:(id)arg10 metalContext:(id)arg11 canceller:(id)arg12 error:(id*)arg13 ;
+(BOOL)computeLabelsAndConfidence:(ImageClassifierAbstract*)arg1 usingDescriptorBuffer:(ImageDescriptorBufferAbstract*)arg2 populateLabelsAndConfidence:(vector<std::__1::unordered_map<std::__1::basic_string<char>, float, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > >, std::__1::allocator<std::__1::unordered_map<std::__1::basic_string<char>, float, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > > > >*)arg3 options:(id)arg4 metalContext:(id)arg5 error:(id*)arg6 ;
+(id)classifyImageWithDescriptors:(const ImageDescriptorBufferAbstract*)arg1 usingImageClassifier:(ImageClassifierAbstract*)arg2 andMinConfidenceForClassification:(float)arg3 outputDebugDictionary:(id)arg4 options:(id)arg5 metalContext:(id)arg6 error:(id*)arg7 ;
+(id)classifyImageHierarchicallyWithDescriptors:(const ImageDescriptorBufferAbstract*)arg1 usingImageClassifier:(ImageClassifierAbstract*)arg2 hierarchicalClassifier:(ImageClassifier_HierarchicalModel*)arg3 minimumClassificationConfidence:(float)arg4 minimumClassificationConfidenceRatio:(float)arg5 maximumLeafLabels:(unsigned long long)arg6 maximumHierarchicalLabels:(unsigned long long)arg7 outputDebugDictionary:(id)arg8 options:(id)arg9 metalContext:(id)arg10 error:(id*)arg11 ;
@end

