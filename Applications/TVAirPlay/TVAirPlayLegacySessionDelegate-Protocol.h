//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol TVAirPlayLegacySession;

@protocol TVAirPlayLegacySessionDelegate <NSObject>
- (void)session:(id <TVAirPlayLegacySession>)arg1 didPerformEvent:(NSString *)arg2 withInfo:(NSDictionary *)arg3;
@end

