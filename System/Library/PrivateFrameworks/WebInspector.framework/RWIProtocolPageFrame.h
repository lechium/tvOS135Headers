/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageFrame : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * loaderId; 
@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * securityOrigin; 
@property (nonatomic,copy) NSString * mimeType; 
@property (nonatomic,copy) NSString * parentId; 
@property (nonatomic,copy) NSString * name; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)securityOrigin;
-(void)setSecurityOrigin:(NSString *)arg1 ;
-(void)setLoaderId:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 loaderId:(id)arg2 url:(id)arg3 securityOrigin:(id)arg4 mimeType:(id)arg5 ;
-(void)setParentId:(NSString *)arg1 ;
-(NSString *)parentId;
-(NSString *)loaderId;
@end

