/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary;

@interface VCPVideoMetaAnalyzer : NSObject

@property (nonatomic,retain,readonly) NSDictionary * publicResults; 
@property (nonatomic,retain,readonly) NSDictionary * privateResults; 
+(id)analyzerForTrackType:(id)arg1 withTransform:(CGAffineTransform)arg2 ;
-(NSDictionary *)privateResults;
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
-(int)finalizeAnalysis;
-(NSDictionary *)publicResults;
@end

