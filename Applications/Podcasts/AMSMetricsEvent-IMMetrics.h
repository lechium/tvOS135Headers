//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSString;

@interface AMSMetricsEvent (IMMetrics)
+ (id)im_defaultTopicForEvents;	// IMP=0x00000001001a3014
+ (id)im_eventWithTopic:(id)arg1 eventType:(id)arg2;	// IMP=0x00000001001a2f20
+ (id)im_eventWithDefaultTopicAndEventType:(id)arg1;	// IMP=0x00000001001a2e58
+ (id)im_pageEventWithDefaultTopic;	// IMP=0x00000001001a2e2c
+ (id)im_clickEventWithDefaultTopic;	// IMP=0x00000001001a2e00
+ (id)im_eventWithDefaultTopic;	// IMP=0x00000001001a2c5c
- (id)shortDescription;	// IMP=0x00000001001a33a8
@property(retain, nonatomic, setter=im_setToken:) NSString *im_token;
@property(retain, nonatomic, setter=im_setContentIdentifier:) id im_contentIdentifier;
@property(retain, nonatomic, setter=im_setName:) NSString *im_name;
- (void)im_setProperty:(id)arg1 forBodyKey:(id)arg2;	// IMP=0x00000001001a7950
- (void)im_addPropertiesWithDictionary:(id)arg1;	// IMP=0x00000001001a78a8
@end
