/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary, NSMutableDictionary;

@interface VCPExifAnalyzer : NSObject {

	NSDictionary* _properties;
	unsigned long long _requestedAnalyses;
	NSMutableDictionary* _results;

}
-(CGAffineTransform)transformUprightAboutTopLeft:(unsigned)arg1 ;
-(int)addFaceResults:(id)arg1 flags:(unsigned long long*)arg2 ;
-(id)initWithProperties:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 ;
-(int)analyzeAsset:(unsigned long long*)arg1 results:(id*)arg2 ;
@end

