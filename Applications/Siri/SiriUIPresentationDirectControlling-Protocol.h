//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SiriUIPresentationRemoteControlling-Protocol.h"

@protocol SiriUIPresentation;

@protocol SiriUIPresentationDirectControlling <SiriUIPresentationRemoteControlling>
@property(retain, nonatomic) id <SiriUIPresentation> presentation;
- (void)setPresentation:(id <SiriUIPresentation>)arg1 animated:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
@end

