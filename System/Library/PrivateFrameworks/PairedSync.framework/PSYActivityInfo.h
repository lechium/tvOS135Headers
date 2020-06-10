/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSArray;

@interface PSYActivityInfo : NSObject <NSSecureCoding> {

	NSString* _label;
	NSString* _machServiceName;
	NSString* _priority;
	NSNumber* _timeoutSeconds;
	NSArray* _sessionTypes;
	NSString* _backboardPrelaunchBundleIdentifier;

}

@property (nonatomic,copy) NSString * backboardPrelaunchBundleIdentifier;              //@synthesize backboardPrelaunchBundleIdentifier=_backboardPrelaunchBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                                 //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,copy) NSString * priority;                                        //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSNumber * timeoutSeconds;                                  //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,copy) NSArray * sessionTypes;                                     //@synthesize sessionTypes=_sessionTypes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)activityWithPlist:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSNumber *)timeoutSeconds;
-(void)setTimeoutSeconds:(NSNumber *)arg1 ;
-(NSString *)machServiceName;
-(void)setMachServiceName:(NSString *)arg1 ;
-(void)setBackboardPrelaunchBundleIdentifier:(NSString *)arg1 ;
-(void)setSessionTypes:(NSArray *)arg1 ;
-(NSString *)backboardPrelaunchBundleIdentifier;
-(NSArray *)sessionTypes;
@end
