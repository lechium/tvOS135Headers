/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AdSupport.framework/AdSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface ASIdentifierManager : NSObject

@property (nonatomic,readonly) NSUUID * advertisingIdentifier; 
@property (getter=isAdvertisingTrackingEnabled,nonatomic,readonly) BOOL advertisingTrackingEnabled; 
+(id)sharedManager;
-(BOOL)isAdvertisingTrackingEnabled;
-(NSUUID *)advertisingIdentifier;
-(void)clearAdvertisingIdentifier;
@end

