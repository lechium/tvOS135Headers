/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, AMSUIWebJSRequest;

@interface AMSUIWebJSResponse : NSObject <NSSecureCoding> {

	NSDictionary* _body;
	double _duration;
	AMSUIWebJSRequest* _originalRequest;

}

@property (nonatomic,retain) NSDictionary * body;                                //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) AMSUIWebJSRequest * originalRequest;              //@synthesize originalRequest=_originalRequest - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AMSUIWebJSRequest *)originalRequest;
-(double)duration;
-(void)setBody:(NSDictionary *)arg1 ;
-(NSDictionary *)body;
-(id)initWithRequest:(id)arg1 duration:(double)arg2 ;
@end

