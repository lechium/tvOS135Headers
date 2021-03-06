/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageSearchResult : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * frameId; 
@property (assign,nonatomic) double matchesCount; 
@property (nonatomic,copy) NSString * requestId; 
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)requestId;
-(double)matchesCount;
-(void)setRequestId:(NSString *)arg1 ;
-(void)setFrameId:(NSString *)arg1 ;
-(NSString *)frameId;
-(void)setMatchesCount:(double)arg1 ;
-(id)initWithUrl:(id)arg1 frameId:(id)arg2 matchesCount:(double)arg3 ;
@end

