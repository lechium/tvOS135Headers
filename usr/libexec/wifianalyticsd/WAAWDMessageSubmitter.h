//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAProtobufMessageSubmitter.h"

@class AWDServerConnection, NSArray, NSObject;
@protocol OS_dispatch_queue, WAAWDMessageSubmitterConfigChangedDelegate;

@interface WAAWDMessageSubmitter : WAProtobufMessageSubmitter
{
    NSArray *_interestedMetricIDs;	// 8 = 0x8
    NSArray *_configuredMetricIDs;	// 16 = 0x10
    AWDServerConnection *_awdServerConnection;	// 24 = 0x18
    id <WAAWDMessageSubmitterConfigChangedDelegate> _configChangeDelegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_configQueue;	// 40 = 0x28
    long long _groupTypeForThisSubmitter;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010001ae80
@property(nonatomic) long long groupTypeForThisSubmitter; // @synthesize groupTypeForThisSubmitter=_groupTypeForThisSubmitter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *configQueue; // @synthesize configQueue=_configQueue;
@property(nonatomic) __weak id <WAAWDMessageSubmitterConfigChangedDelegate> configChangeDelegate; // @synthesize configChangeDelegate=_configChangeDelegate;
@property(retain, nonatomic) AWDServerConnection *awdServerConnection; // @synthesize awdServerConnection=_awdServerConnection;
- (id)submitMessage:(id)arg1;	// IMP=0x000000010001a8b0
@property(retain, nonatomic) NSArray *configuredMetricIDs;
@property(retain, nonatomic) NSArray *interestedMetricIDs;
- (void)iterateConfigChange;	// IMP=0x000000010001a218
- (id)initWithMessageGroupType:(long long)arg1 andConfigChangeDelegate:(id)arg2;	// IMP=0x0000000100019e80
- (id)init;	// IMP=0x0000000100019dd0

@end

