/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VNClustererModelQuerying.h>

@protocol VNClustererModelQuerying;
@interface VNClustererQuery : NSObject <VNClustererModelQuerying> {

	id<VNClustererModelQuerying> _context;

}
+(id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id*)arg3 ;
+(id)nonGroupedGroupID;
+(id)representativenessForFaces:(id)arg1 error:(id*)arg2 ;
+(id)distanceBetweenFacesWithFaceprint:(id)arg1 andFaceprint:(id)arg2 error:(id*)arg3 ;
+(id)distanceBetweenFacesWithFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id*)arg3 ;
+(id)clustererQueryWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)getDistances:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id)maximumFaceIdInModelAndReturnError:(id*)arg1 ;
-(id)allClusteredFaceIdsAndReturnError:(id*)arg1 ;
-(id)clusteredFaceIdsForClusterContainingFaceId:(id)arg1 error:(id*)arg2 ;
-(id)getAllClustersAndReturnError:(id*)arg1 ;
-(id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg1 error:(id*)arg2 ;
-(id)distanceBetweenClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id*)arg3 ;
-(id)distanceBetweenLevel1Clusters:(id)arg1 error:(id*)arg2 ;
-(id)suggestionsForClustersWithFaceIds:(id)arg1 affinityThreshold:(float)arg2 canceller:(id)arg3 error:(id*)arg4 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6 error:(id*)arg7 ;
@end

