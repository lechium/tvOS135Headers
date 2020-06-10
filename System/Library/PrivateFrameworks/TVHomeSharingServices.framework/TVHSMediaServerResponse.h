/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHomeSharingServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface TVHSMediaServerResponse : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _HTTPStatusCode;
	NSString* _MIMEType;
	NSData* _data;

}

@property (assign,nonatomic) unsigned long long HTTPStatusCode;              //@synthesize HTTPStatusCode=_HTTPStatusCode - In the implementation block
@property (nonatomic,copy) NSString * MIMEType;                              //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,retain) NSData * data;                                  //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_mediaServerResponseWithURLResponse:(id)arg1 data:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSData *)data;
-(NSString *)MIMEType;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)HTTPStatusCode;
-(void)setMIMEType:(NSString *)arg1 ;
-(void)setHTTPStatusCode:(unsigned long long)arg1 ;
@end
