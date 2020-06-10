/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary, NSError;


@protocol ACMAuthenticationResponse <NSObject>
@property (retain) NSString * token; 
@property (retain) NSString * userName; 
@property (retain) NSDictionary * rawResponseData; 
@property (retain) NSError * error; 
@property (assign) BOOL generatedWithTouchID; 
@optional
-(void)setGeneratedWithTouchID:(BOOL)arg1;
-(BOOL)generatedWithTouchID;

@required
-(NSString *)token;
-(NSString *)userName;
-(NSError *)error;
-(void)setError:(id)arg1;
-(void)setToken:(id)arg1;
-(NSDictionary *)rawResponseData;
-(void)setRawResponseData:(id)arg1;
-(void)setUserName:(id)arg1;

@end

