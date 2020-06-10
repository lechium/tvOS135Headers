/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkResponse;

@interface RWIProtocolNetworkCachedResource : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) double bodySize; 
@property (nonatomic,retain) RWIProtocolNetworkResponse * response; 
@property (nonatomic,copy) NSString * sourceMapURL; 
-(long long)type;
-(void)setType:(long long)arg1 ;
-(RWIProtocolNetworkResponse *)response;
-(void)setResponse:(RWIProtocolNetworkResponse *)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(void)setBodySize:(double)arg1 ;
-(id)initWithUrl:(id)arg1 type:(long long)arg2 bodySize:(double)arg3 ;
-(double)bodySize;
-(void)setSourceMapURL:(NSString *)arg1 ;
-(NSString *)sourceMapURL;
@end

