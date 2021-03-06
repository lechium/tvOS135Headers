/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CDDCloudKitMessage.h>

@class NSString;

@interface CDDCloudKitScheduleActivityMessage : CDDCloudKitMessage {

	unsigned long long _activityType;
	NSString* _storePath;

}

@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSString * storePath;                         //@synthesize storePath=_storePath - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)activityType;
-(id)initWithActivityType:(unsigned long long)arg1 forStoreWithPath:(id)arg2 ;
-(NSString *)storePath;
@end

