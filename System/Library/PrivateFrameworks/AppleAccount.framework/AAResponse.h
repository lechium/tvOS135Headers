/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSHTTPURLResponse, NSError, NSData, NSNumber, NSString;

@interface AAResponse : NSObject {

	NSDictionary* _responseDictionary;
	NSHTTPURLResponse* _httpResponse;
	NSError* _error;
	long long _statusCode;
	NSData* _data;
	NSNumber* _maxAge;

}

@property (nonatomic,readonly) NSHTTPURLResponse * httpResponse;               //@synthesize httpResponse=_httpResponse - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * protocolVersion; 
@property (nonatomic,readonly) long long statusCode;                           //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSNumber * maxAge;                              //@synthesize maxAge=_maxAge - In the implementation block
-(NSData *)data;
-(NSError *)error;
-(long long)statusCode;
-(void)setError:(NSError *)arg1 ;
-(NSString *)protocolVersion;
-(NSHTTPURLResponse *)httpResponse;
-(NSDictionary *)responseDictionary;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 bodyIsPlist:(BOOL)arg3 ;
-(void)_parsePlistResponse:(id)arg1 ;
-(id)_stringWithDescriptionForResponseError:(id)arg1 ;
-(void)_parseJSONResponse:(id)arg1 ;
-(id)_deviceSpecificLocalizedString:(id)arg1 ;
-(NSNumber *)maxAge;
@end

