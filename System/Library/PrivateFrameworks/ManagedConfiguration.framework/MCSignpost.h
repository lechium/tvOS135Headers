/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface MCSignpost : NSObject <NSCopying> {

	NSString* _process;
	unsigned long long _type;
	NSString* _feature;
	NSDate* _timestamp;

}

@property (nonatomic,copy,readonly) NSString * process;              //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * feature;              //@synthesize feature=_feature - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(NSDate *)timestamp;
-(NSString *)process;
-(NSString *)feature;
-(id)initWithProcess:(id)arg1 type:(unsigned long long)arg2 feature:(id)arg3 timestamp:(id)arg4 ;
@end

