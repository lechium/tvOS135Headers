/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSAuthenticationToken.h>

@class NSString, NSDate, NSData;

@interface VSOpaqueAuthenticationToken : NSObject <VSAuthenticationToken> {

	NSString* _body;
	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSDate * expirationDate;                       //@synthesize expirationDate=_expirationDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * body;                               //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSData * serializedData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(BOOL)isOpaque;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(NSData *)serializedData;
-(id)initWithSerializedData:(id)arg1 ;
-(BOOL)isFromUnsupportedProvider;
@end
