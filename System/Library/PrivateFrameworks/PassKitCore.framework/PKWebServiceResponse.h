/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKWebServiceResponse : NSObject <NSSecureCoding> {

	NSData* _rawData;
	id _JSONObject;

}

@property (nonatomic,readonly) NSData * rawData;              //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,readonly) id JSONObject;                 //@synthesize JSONObject=_JSONObject - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseWithData:(id)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)rawData;
-(id)JSONObject;
@end

