/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PGGraphIngestRecipeParameters : NSObject {

	NSArray* _momentsToIngest;
	NSArray* _highligthsToIngest;
	NSArray* _preProcessors;
	NSArray* _postProcessors;

}

@property (nonatomic,retain) NSArray * momentsToIngest;                 //@synthesize momentsToIngest=_momentsToIngest - In the implementation block
@property (nonatomic,retain) NSArray * highligthsToIngest;              //@synthesize highligthsToIngest=_highligthsToIngest - In the implementation block
@property (nonatomic,retain) NSArray * preProcessors;                   //@synthesize preProcessors=_preProcessors - In the implementation block
@property (nonatomic,retain) NSArray * postProcessors;                  //@synthesize postProcessors=_postProcessors - In the implementation block
+(id)lighweightGraphIngestParameters;
-(NSArray *)momentsToIngest;
-(void)setMomentsToIngest:(NSArray *)arg1 ;
-(NSArray *)highligthsToIngest;
-(void)setHighligthsToIngest:(NSArray *)arg1 ;
-(NSArray *)preProcessors;
-(void)setPreProcessors:(NSArray *)arg1 ;
-(NSArray *)postProcessors;
-(void)setPostProcessors:(NSArray *)arg1 ;
@end

