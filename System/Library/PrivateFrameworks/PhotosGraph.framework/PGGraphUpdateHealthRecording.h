/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGGraphUpdateHealthRecording <NSObject>
@required
-(void)beginRecording;
-(void)recordNumberOfDatabaseChangesReceived:(unsigned long long)arg1 inBackground:(BOOL)arg2;
-(void)recordNumberOfDatabaseChangesConvertedToGraphChanges:(unsigned long long)arg1 inBackground:(BOOL)arg2;
-(void)recordNumberOfTimesGraphUpdatePaused:(unsigned long long)arg1;
-(void)recordTransactionSize:(unsigned long long)arg1;
-(void)endRecordingInBackground:(BOOL)arg1;

@end

