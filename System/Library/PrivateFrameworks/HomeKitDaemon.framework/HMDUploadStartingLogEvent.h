/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDUploadStartingLogEvent : HMDLogEvent {

	NSString* _saveReason;

}

@property (nonatomic,readonly) NSString * saveReason;              //@synthesize saveReason=_saveReason - In the implementation block
+(id)uuid;
+(id)uploadReason:(id)arg1 ;
-(id)initUploadReason:(id)arg1 ;
-(NSString *)saveReason;
@end

