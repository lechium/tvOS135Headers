/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AMSUIWebJSRequest : NSObject <NSSecureCoding> {

	NSString* _logKey;
	NSDictionary* _options;
	NSString* _service;

}

@property (nonatomic,retain) NSString * logKey;                   //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSString * service;                //@synthesize service=_service - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSDictionary *)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)service;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(id)initWithServiceName:(id)arg1 logKey:(id)arg2 ;
@end

