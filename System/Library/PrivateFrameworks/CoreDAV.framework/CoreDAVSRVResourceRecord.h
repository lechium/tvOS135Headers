/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface CoreDAVSRVResourceRecord : NSObject {

	NSString* _serviceString;
	NSNumber* _priority;
	NSNumber* _weight;
	NSNumber* _port;
	NSString* _target;

}

@property (nonatomic,retain) NSString * serviceString;              //@synthesize serviceString=_serviceString - In the implementation block
@property (nonatomic,retain) NSNumber * priority;                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSNumber * weight;                     //@synthesize weight=_weight - In the implementation block
@property (nonatomic,retain) NSNumber * port;                       //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSString * target;                     //@synthesize target=_target - In the implementation block
-(id)description;
-(NSNumber *)port;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)target;
-(void)setPort:(NSNumber *)arg1 ;
-(NSNumber *)priority;
-(void)setPriority:(NSNumber *)arg1 ;
-(NSNumber *)weight;
-(void)setWeight:(NSNumber *)arg1 ;
-(NSString *)serviceString;
-(void)setServiceString:(NSString *)arg1 ;
@end

