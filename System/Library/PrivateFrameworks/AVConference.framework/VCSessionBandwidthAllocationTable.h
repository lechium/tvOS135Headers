/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCObject.h>

@class NSMutableDictionary, NSDictionary, NSArray;

@interface VCSessionBandwidthAllocationTable : VCObject {

	unsigned char _type;
	NSMutableDictionary* _aggregatedAudioOnlyTable;
	NSMutableDictionary* _aggregatedAudioVideoTable;
	NSMutableDictionary* _aggregatedAudioOnlyTableWithRedundancy;
	NSMutableDictionary* _aggregatedAudioVideoTableWithRedundancy;
	NSMutableDictionary* _audioTable;
	NSMutableDictionary* _videoTable;
	NSMutableDictionary* _audioOnlyBitrateToStreamIDsTable;
	NSMutableDictionary* _audioVideoBitrateToStreamIDsTable;
	NSMutableDictionary* _videoOnlyBitrateToStreamIDsTable;
	NSMutableDictionary* _streamIDToEntryTable;

}

@property (nonatomic,readonly) NSDictionary * aggregatedAudioOnlyTable;                             //@synthesize aggregatedAudioOnlyTable=_aggregatedAudioOnlyTable - In the implementation block
@property (nonatomic,readonly) NSDictionary * aggregatedAudioVideoTable;                            //@synthesize aggregatedAudioVideoTable=_aggregatedAudioVideoTable - In the implementation block
@property (nonatomic,readonly) NSDictionary * aggregatedAudioOnlyTableWithRedundancy;               //@synthesize aggregatedAudioOnlyTableWithRedundancy=_aggregatedAudioOnlyTableWithRedundancy - In the implementation block
@property (nonatomic,readonly) NSDictionary * aggregatedAudioVideoTableWithRedundancy;              //@synthesize aggregatedAudioVideoTableWithRedundancy=_aggregatedAudioVideoTableWithRedundancy - In the implementation block
@property (nonatomic,readonly) NSDictionary * audioOnlyBitrateToStreamIDsTable;                     //@synthesize audioOnlyBitrateToStreamIDsTable=_audioOnlyBitrateToStreamIDsTable - In the implementation block
@property (nonatomic,readonly) NSDictionary * audioVideoBitrateToStreamIDsTable;                    //@synthesize audioVideoBitrateToStreamIDsTable=_audioVideoBitrateToStreamIDsTable - In the implementation block
@property (nonatomic,readonly) NSDictionary * videoOnlyBitrateToStreamIDsTable;                     //@synthesize videoOnlyBitrateToStreamIDsTable=_videoOnlyBitrateToStreamIDsTable - In the implementation block
@property (nonatomic,readonly) NSArray * audioEntries; 
@property (nonatomic,readonly) NSArray * videoEntries; 
-(void)dealloc;
-(id)initWithType:(unsigned char)arg1 ;
-(void)generate;
-(void)addBandwidthAllocationTableEntry:(id)arg1 ;
-(NSArray *)videoEntries;
-(NSDictionary *)aggregatedAudioVideoTableWithRedundancy;
-(NSDictionary *)aggregatedAudioOnlyTableWithRedundancy;
-(NSDictionary *)aggregatedAudioVideoTable;
-(NSDictionary *)aggregatedAudioOnlyTable;
-(id)entryForStreamID:(id)arg1 ;
-(NSArray *)audioEntries;
-(void)generateAudioOnlyBandwidthAllocationTable;
-(void)generateAudioVideoBandwidthAllocationTable;
-(void)generateAudioOnlyBandwidthAllocationTableWithRedundancy;
-(void)generateAudioVideoBandwidthAllocationTableWithRedundancy;
-(void)generateAudioOnlyBitrateToStreamIDsTable;
-(void)generateVideoOnlyBitrateToStreamIDsTable;
-(void)generateAudioVideoBitrateToStreamIDsTable;
-(id)newAggregateTableWithAudioTable:(id)arg1 videoTable:(id)arg2 isVideoEnabled:(BOOL)arg3 isRedundancyEnabled:(BOOL)arg4 ;
-(void)printTable:(id)arg1 ;
-(id)newBitrateToStreamIDsTableWithAudioTable:(id)arg1 videoTable:(id)arg2 ;
-(NSDictionary *)audioVideoBitrateToStreamIDsTable;
-(NSDictionary *)audioOnlyBitrateToStreamIDsTable;
-(NSDictionary *)videoOnlyBitrateToStreamIDsTable;
@end

