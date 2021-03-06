/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeRemoteObject, NSString, RWIProtocolDebuggerLocation;

@interface RWIProtocolDebuggerScope : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * object; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) RWIProtocolDebuggerLocation * location; 
@property (assign,nonatomic) BOOL empty; 
-(NSString *)name;
-(RWIProtocolRuntimeRemoteObject *)object;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setObject:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(RWIProtocolDebuggerLocation *)location;
-(BOOL)empty;
-(void)setLocation:(RWIProtocolDebuggerLocation *)arg1 ;
-(id)initWithObject:(id)arg1 type:(long long)arg2 ;
@end

