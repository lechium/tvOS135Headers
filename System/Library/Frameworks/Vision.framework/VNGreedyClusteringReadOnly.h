/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNClusteringReadOnly.h>
#import <libobjc.A.dylib/VNClusteringCancelling.h>

@class VNClusteringLogger, VNSuggestionsLogger, NSString, NSData;

@interface VNGreedyClusteringReadOnly : NSObject <VNClusteringReadOnly, VNClusteringCancelling> {

	VNClusteringLogger* _clusteringLogger;
	VNSuggestionsLogger* _suggestionsLogger;
	NSString* _cacheFolderPath;
	float _thresholdN;
	float _thresholdSL;
	float _thresholdTorso;
	NSString* _type;
	NSData* _state;
	BOOL _vectorMapReadOnlyFlag;
	unsigned long long _faceprintRevision;
	NSString* _ageClassifierFilePath;
	float _ageClassifierBabyThreshold;
	float _ageClassifierKidThreshold;
	shared_ptr<const vision::mod::FaceClustering>* m_ClusteringImpl_const;

}
+(id)getRepresentativenessForFaces:(id)arg1 error:(id*)arg2 ;
+(id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id*)arg3 ;
+(id)nonGroupedGroupID;
+(void)addFaceObservations:(id)arg1 toFaceDescriptorBuffer:(ImageDescriptorBufferFloat32*)arg2 ;
+(void)addFaceObservations:(id)arg1 withGroupingIdentifiers:(id)arg2 toFaceDescriptorBuffer:(ImageDescriptorBufferJoint*)arg3 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)cancelClustering:(id*)arg1 ;
-(id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3 ;
-(id)getClusterState:(id*)arg1 ;
-(id)getClusteredIds:(id*)arg1 ;
-(id)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(id)arg1 error:(id*)arg2 ;
-(id)getDistanceBetweenLevel0ClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id*)arg3 ;
-(id)getDistanceBetweenLevel1Clusters:(id)arg1 error:(id*)arg2 ;
-(id)getAllClustersFromStateAndReturnError:(id*)arg1 ;
-(id)getClustersForClusterIds:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)getDistances:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id)maximumFaceIdInModelAndReturnError:(id*)arg1 ;
-(BOOL)_parseOptions:(id)arg1 error:(id*)arg2 ;
-(void)initializeLogging;
-(void)setGreedyClustererFaces_const:(shared_ptr<const vision::mod::FaceClustering>*)arg1 ;
-(id)convertUpdatePairsToClusters:(vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long> > >*)arg1 ;
-(id)getLevel0ClusteredIdsForFaceId:(id)arg1 error:(id*)arg2 ;
@end

