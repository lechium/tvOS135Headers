/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/ATMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ATRequest : ATMessage <NSSecureCoding> {

	NSString* _command;
	NSString* _dataClass;

}

@property (nonatomic,copy) NSString * command;                //@synthesize command=_command - In the implementation block
@property (nonatomic,copy) NSString * dataClass;              //@synthesize dataClass=_dataClass - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCommand:(NSString *)arg1 ;
-(NSString *)command;
-(NSString *)dataClass;
-(void)setDataClass:(NSString *)arg1 ;
-(id)additionalDescription;
-(id)initWithCommand:(id)arg1 dataClass:(id)arg2 parameters:(id)arg3 ;
-(id)responseWithError:(id)arg1 parameters:(id)arg2 ;
-(id)partialResponseWithParameters:(id)arg1 ;
@end

