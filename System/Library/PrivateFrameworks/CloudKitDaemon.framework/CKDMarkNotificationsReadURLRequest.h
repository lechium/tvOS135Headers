/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDMarkNotificationsReadURLRequest : CKDURLRequest {

	/*^block*/id _notificationMarkedReadProgressBlock;
	NSArray* _notificationIDs;
	NSMutableDictionary* _notificationIDsByRequestID;

}

@property (nonatomic,retain) NSArray * notificationIDs;                                     //@synthesize notificationIDs=_notificationIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationIDsByRequestID;              //@synthesize notificationIDsByRequestID=_notificationIDsByRequestID - In the implementation block
@property (nonatomic,copy) id notificationMarkedReadProgressBlock;                          //@synthesize notificationMarkedReadProgressBlock=_notificationMarkedReadProgressBlock - In the implementation block
-(int)operationType;
-(NSArray *)notificationIDs;
-(void)setNotificationIDs:(NSArray *)arg1 ;
-(id)initWithNotificationIDsToMarkRead:(id)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)setNotificationMarkedReadProgressBlock:(id)arg1 ;
-(NSMutableDictionary *)notificationIDsByRequestID;
-(void)setNotificationIDsByRequestID:(NSMutableDictionary *)arg1 ;
-(id)notificationMarkedReadProgressBlock;
@end

