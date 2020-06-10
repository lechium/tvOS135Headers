/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface BurstImageFaceAnalysisContext : NSObject {

	BOOL forceFaceDetectionEnable;
	BOOL _forceFaceDetailsEnable;
	int _faceIdCounter;
	int _numFramesSinceFullFaceCore;
	int _numFramesNoFaces;
	int _lastFaceIndex;
	int _version;
	double timeBlinkDetectionDone;
	double timeFaceDetectionDone;
	double latestFaceTimestamp;
	NSMutableDictionary* _curConfig;
	NSMutableDictionary* _faceIdMapping;
	NSMutableDictionary* _renameMapping;
	NSMutableArray* _faceInfoArray;
	NSMutableArray* _faceTimestampArray;
	double _latestImageTimestamp;

}

@property (retain) NSMutableDictionary * curConfig;                  //@synthesize curConfig=_curConfig - In the implementation block
@property (retain) NSMutableDictionary * faceIdMapping;              //@synthesize faceIdMapping=_faceIdMapping - In the implementation block
@property (retain) NSMutableDictionary * renameMapping;              //@synthesize renameMapping=_renameMapping - In the implementation block
@property (assign) int faceIdCounter;                                //@synthesize faceIdCounter=_faceIdCounter - In the implementation block
@property (retain) NSMutableArray * faceInfoArray;                   //@synthesize faceInfoArray=_faceInfoArray - In the implementation block
@property (assign) int numFramesSinceFullFaceCore;                   //@synthesize numFramesSinceFullFaceCore=_numFramesSinceFullFaceCore - In the implementation block
@property (assign) int numFramesNoFaces;                             //@synthesize numFramesNoFaces=_numFramesNoFaces - In the implementation block
@property (retain) NSMutableArray * faceTimestampArray;              //@synthesize faceTimestampArray=_faceTimestampArray - In the implementation block
@property (assign) double latestImageTimestamp;                      //@synthesize latestImageTimestamp=_latestImageTimestamp - In the implementation block
@property (assign) int lastFaceIndex;                                //@synthesize lastFaceIndex=_lastFaceIndex - In the implementation block
@property (assign) double timeFaceDetectionDone; 
@property (assign) double timeBlinkDetectionDone; 
@property (assign) BOOL forceFaceDetectionEnable; 
@property (assign) BOOL forceFaceDetailsEnable;                      //@synthesize forceFaceDetailsEnable=_forceFaceDetailsEnable - In the implementation block
@property (assign) double latestFaceTimestamp; 
@property (assign) int version;                                      //@synthesize version=_version - In the implementation block
-(int)version;
-(void)setVersion:(int)arg1 ;
-(id)initWithVersion:(id)arg1 ;
-(CGRect)padRoiRect:(CGRect)arg1 paddingX:(float)arg2 paddingY:(float)arg3 ;
-(id)findOverlappingFaceStat:(CGRect)arg1 imageStat:(id)arg2 ;
-(void)addFaceToArray:(id)arg1 ;
-(int)findFacesInImage:(CVBufferRef)arg1 imageStat:(id)arg2 ;
-(void)calculateFaceFocusInImage:(CVBufferRef)arg1 imageStat:(id)arg2 ;
-(void)calcFaceScores:(id)arg1 ;
-(void)adjustFaceIdsForImageStat:(id)arg1 ;
-(void)extractFacesFromMetadata:(id)arg1 ;
-(void)addFacesToImageStat:(id)arg1 imageSize:(CGSize)arg2 ;
-(void)dumpFaceInfoArray;
-(double)timeBlinkDetectionDone;
-(void)setTimeBlinkDetectionDone:(double)arg1 ;
-(double)timeFaceDetectionDone;
-(void)setTimeFaceDetectionDone:(double)arg1 ;
-(BOOL)forceFaceDetectionEnable;
-(void)setForceFaceDetectionEnable:(BOOL)arg1 ;
-(double)latestFaceTimestamp;
-(void)setLatestFaceTimestamp:(double)arg1 ;
-(NSMutableDictionary *)curConfig;
-(NSMutableDictionary *)faceIdMapping;
-(NSMutableDictionary *)renameMapping;
-(int)faceIdCounter;
-(NSMutableArray *)faceInfoArray;
-(int)numFramesSinceFullFaceCore;
-(int)numFramesNoFaces;
-(NSMutableArray *)faceTimestampArray;
-(double)latestImageTimestamp;
-(int)lastFaceIndex;
-(CGRect)calculateFaceCoreROI:(CGRect)arg1 imageStat:(id)arg2 needSWFaceDetection:(BOOL*)arg3 ;
-(id)_filterFacesToProcess:(id)arg1 imageSize:(CGSize)arg2 imageStat:(id)arg3 ;
-(void)setCurConfig:(NSMutableDictionary *)arg1 ;
-(void)setFaceIdMapping:(NSMutableDictionary *)arg1 ;
-(void)setRenameMapping:(NSMutableDictionary *)arg1 ;
-(void)setFaceIdCounter:(int)arg1 ;
-(void)setFaceInfoArray:(NSMutableArray *)arg1 ;
-(void)setNumFramesSinceFullFaceCore:(int)arg1 ;
-(void)setNumFramesNoFaces:(int)arg1 ;
-(void)setFaceTimestampArray:(NSMutableArray *)arg1 ;
-(void)setLatestImageTimestamp:(double)arg1 ;
-(void)setLastFaceIndex:(int)arg1 ;
-(BOOL)forceFaceDetailsEnable;
-(void)setForceFaceDetailsEnable:(BOOL)arg1 ;
@end

