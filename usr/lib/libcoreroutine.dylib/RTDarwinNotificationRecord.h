/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface RTDarwinNotificationRecord : NSObject {

	NSString* _notificationName;
	NSNumber* _registrationToken;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * notificationName;               //@synthesize notificationName=_notificationName - In the implementation block
@property (nonatomic,copy) NSNumber * registrationToken;              //@synthesize registrationToken=_registrationToken - In the implementation block
@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
-(id)init;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSString *)notificationName;
-(void)setNotificationName:(NSString *)arg1 ;
-(NSNumber *)registrationToken;
-(void)setRegistrationToken:(NSNumber *)arg1 ;
-(id)initWithNotificationName:(id)arg1 registrationToken:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

