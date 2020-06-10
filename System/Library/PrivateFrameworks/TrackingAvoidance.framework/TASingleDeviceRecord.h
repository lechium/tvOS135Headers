/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDate;

@interface TASingleDeviceRecord : NSObject {

	NSData* _address;
	unsigned long long _state;
	unsigned long long _type;
	NSDate* _creationDate;

}

@property (nonatomic,readonly) NSData * address;                    //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;               //@synthesize creationDate=_creationDate - In the implementation block
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSData *)address;
-(NSDate *)creationDate;
-(id)descriptionDictionary;
-(id)initWithDeviceAddress:(id)arg1 state:(unsigned long long)arg2 type:(unsigned long long)arg3 date:(id)arg4 ;
@end
