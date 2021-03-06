/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MLModelDescription, MLModelInterface, MLModelMetadata;


@protocol MLModeling
@property (nonatomic,retain) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
@required
-(MLModelInterface *)interface;
-(MLModelMetadata *)metadata;
-(MLModelDescription *)modelDescription;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)predictionsFromBatch:(id)arg1 error:(id*)arg2;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(void)setModelDescription:(id)arg1;

@end

