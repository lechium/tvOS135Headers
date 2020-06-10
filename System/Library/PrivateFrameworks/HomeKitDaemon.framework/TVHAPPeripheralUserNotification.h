/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface TVHAPPeripheralUserNotification : NSObject <HMFLogging> {

	long long _type;
	NSString* _bulletinImageType;
	NSString* _title;
	NSString* _subtitle;
	long long _timeout;

}

@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * bulletinImageType;              //@synthesize bulletinImageType=_bulletinImageType - In the implementation block
@property (nonatomic,copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) long long timeout;                       //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setTimeout:(long long)arg1 ;
-(long long)timeout;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)_updateHUD;
-(void)setBulletinImageType:(NSString *)arg1 ;
-(id)initWithHUDType:(long long)arg1 ;
-(NSString *)bulletinImageType;
@end
