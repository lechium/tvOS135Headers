//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSObject, NSString;
@protocol SDAirDropAlertManagerDelegate;

@protocol SDAirDropAlertManager <NSObject>
@property(nonatomic) __weak NSObject<SDAirDropAlertManagerDelegate> *delegate;
- (void)finishedEventForRecordID:(NSString *)arg1 withResults:(NSDictionary *)arg2;
- (void)errorEventForRecordID:(NSString *)arg1 withResults:(NSDictionary *)arg2;
- (void)cancelEventForRecordID:(NSString *)arg1 withResults:(NSDictionary *)arg2;
- (void)progressEventForRecordID:(NSString *)arg1 withResults:(NSDictionary *)arg2;
- (void)askEventForRecordID:(NSString *)arg1 withResults:(NSDictionary *)arg2;
@end

