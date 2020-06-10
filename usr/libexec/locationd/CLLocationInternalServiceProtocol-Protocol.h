//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CLBeaconRegion, NSArray, NSData, NSDictionary, NSString, NSUUID;

@protocol CLLocationInternalServiceProtocol
- (void)notifyWeatherForecast:(NSDictionary *)arg1 airQualityConditions:(NSDictionary *)arg2 hourlyForecasts:(NSArray *)arg3 dailyForecasts:(NSArray *)arg4 latitude:(double)arg5 longitude:(double)arg6;
- (void)notifyPassKitPayment:(NSString *)arg1 transaction:(NSString *)arg2 info:(NSDictionary *)arg3;
- (void)getAccessoryMotionSensorLogsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)getMotionSensorLogsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)getControlPlaneStatusReportClear:(int)arg1 replyBlock:(void (^)(NSError *, double, double, double, double, double, double, unsigned int))arg2;
- (void)configure:(CDStruct_63e0ae22)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)setCompassCalibrationDatabaseMagneticField:(CDStruct_869f9c67)arg1 bias:(CDStruct_869f9c67)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5 replyBlock:(void (^)(NSError *))arg6;
- (void)gyroCalibrationDatabaseGetNumTemperaturesWithReplyBlock:(void (^)(NSError *, int))arg1;
- (void)compassCalibrationDatabaseGetBiasWithMagneticField:(CDStruct_869f9c67)arg1 acceleration:(CDStruct_869f9c67)arg2 replyBlock:(void (^)(NSError *, struct))arg3;
- (void)gyroCalibrationDatabaseWipeWithReplyBlock:(void (^)(NSError *))arg1;
- (void)insertGyroCalibrationDatabaseBiasEstimateIfValid:(CDStruct_869f9c67)arg1 temperature:(float)arg2 variance:(CDStruct_869f9c67)arg3 timestamp:(double)arg4 replyBlock:(void (^)(NSError *))arg5;
- (void)getGyroCalibrationDatabaseBiasFitAtTemplerature:(float)arg1 replyBlock:(void (^)(NSError *, NSData *))arg2;
- (void)startStopAdvertisingBeacon:(CLBeaconRegion *)arg1 atPower:(int)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)getOscarTimeSyncWithReplyBlock:(void (^)(NSError *, unsigned long long, unsigned long long))arg1;
- (void)setBackgroundIndicatorEnabled:(_Bool)arg1 forBundleID:(NSString *)arg2 orBundlePath:(NSString *)arg3 replyBlock:(void (^)(NSError *))arg4;
- (void)gyroCalibrationDatabaseSupportsMiniCalibrationWithReplyBlock:(void (^)(NSError *, int))arg1;
- (void)setTemporaryAuthorizationGranted:(_Bool)arg1 forBundleID:(NSString *)arg2 orBundlePath:(NSString *)arg3 replyBlock:(void (^)(NSError *))arg4;
- (void)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 forBundleID:(NSString *)arg3 orBundlePath:(NSString *)arg4 replyBlock:(void (^)(NSError *))arg5;
- (void)getActivitiesWithReplyBlock:(void (^)(NSError *, NSArray *))arg1;
- (void)getPipelinedCacheWithReply:(void (^)(NSError *, NSArray *))arg1;
- (void)setMapMatchingRouteHint:(NSData *)arg1 routingType:(int)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)getStatusBarIconState:(void (^)(NSError *, int))arg1;
- (void)getStatusBarIconEnabledForEntityClass:(unsigned int)arg1 replyBlock:(void (^)(NSError *, _Bool))arg2;
- (void)setStatusBarIconEnabledForEntityClass:(unsigned int)arg1 enabled:(_Bool)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)getArchivedAuthorizationDecisionsWithReplyBlock:(void (^)(NSError *, NSData *))arg1;
- (void)applyArchivedAuthorizationDecisions:(NSData *)arg1 withConfirmationToken:(NSUUID *)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)resetAllClientsWithReplyBlock:(void (^)(NSError *))arg1;
- (void)getLocationForBundleID:(NSString *)arg1 orBundlePath:(NSString *)arg2 dynamicAccuracyReductionEnabled:(_Bool)arg3 allowsAlteredAccessoryLocations:(_Bool)arg4 replyBlock:(void (^)(NSError *, struct))arg5;
- (void)checkAndExerciseAuthorizationForBundleID:(NSString *)arg1 orBundlePath:(NSString *)arg2 services:(unsigned long long)arg3 replyBlock:(void (^)(NSError *, _Bool))arg4;
- (void)getMonitoredRegionsForBundleID:(NSString *)arg1 orBundlePath:(NSString *)arg2 replyBlock:(void (^)(NSError *, NSDictionary *))arg3;
- (void)copyLastLogWithReplyBlock:(void (^)(NSError *))arg1;
- (void)dumpLogsWithDescription:(NSString *)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)displayStatisticsWithReplyBlock:(void (^)(NSError *))arg1;
- (void)getAuthorizationStatusForBundleID:(NSString *)arg1 orBundlePath:(NSString *)arg2 replyBlock:(void (^)(NSError *, int))arg3;
- (void)pingDaemonWithReplyBlock:(void (^)(NSError *))arg1;
- (void)getGestureServiceEnabledWithReplyBlock:(void (^)(NSError *, _Bool))arg1;
- (void)getAuthorizationPromptMapDisplayEnabledWithReplyBlock:(void (^)(NSError *, _Bool))arg1;
- (void)setAuthorizationPromptMapDisplayEnabled:(_Bool)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)getLocationServicesEnabledWithReplyBlock:(void (^)(NSError *, int))arg1;
- (void)setLocationServicesEnabled:(_Bool)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)getPrivateMode:(void (^)(NSError *, _Bool))arg1;
- (void)setPrivateMode:(_Bool)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)setAuthorizationStatus:(_Bool)arg1 withCorrectiveCompensation:(int)arg2 forBundleID:(NSString *)arg3 orBundlePath:(NSString *)arg4 replyBlock:(void (^)(NSError *))arg5;
- (void)shutdownDaemonWithReplyBlock:(void (^)(NSError *))arg1;
- (void)performMigrationWithReplyBlock:(void (^)(NSError *))arg1;
- (void)setGestureServiceEnabled:(_Bool)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)timeZoneForLocation:(CDStruct_c412fcbb)arg1 replyBlock:(void (^)(NSError *, NSString *))arg2;
- (void)getLocationDefaultForKey:(NSString *)arg1 replyBlock:(void (^)(NSError *, NSData *))arg2;
- (void)setLocationDefaultForKey:(NSString *)arg1 andValue:(NSData *)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)getAppsUsingLocationWithReplyBlock:(void (^)(NSError *, NSDictionary *))arg1;
- (void)getGnssBandsInUseWithReplyBlock:(void (^)(NSError *, NSArray *))arg1;
- (void)getTechnologiesInUseWithReplyBlock:(void (^)(NSError *, NSArray *))arg1;
@end
