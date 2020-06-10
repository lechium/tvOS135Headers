/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAMeshTransform.h>

@class NSString;

@interface CAMutableMeshTransform : CAMeshTransform

@property (copy) NSString * depthNormalization; 
@property (assign) int subdivisionSteps; 
@property (assign) BOOL replicatesEdges; 
+(id)meshTransform;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)depthNormalization;
-(int)subdivisionSteps;
-(BOOL)replicatesEdges;
-(void)setDepthNormalization:(NSString *)arg1 ;
-(void)setSubdivisionSteps:(int)arg1 ;
-(void)setReplicatesEdges:(BOOL)arg1 ;
-(void)replaceVertexAtIndex:(unsigned long long)arg1 withVertex:(CAMeshVertex)arg2 ;
-(void)addVertex:(CAMeshVertex)arg1 ;
-(void)removeVertexAtIndex:(unsigned long long)arg1 ;
-(void)replaceFaceAtIndex:(unsigned long long)arg1 withFace:(CAMeshFace)arg2 ;
-(void)addFace:(CAMeshFace)arg1 ;
-(void)removeFaceAtIndex:(unsigned long long)arg1 ;
@end

