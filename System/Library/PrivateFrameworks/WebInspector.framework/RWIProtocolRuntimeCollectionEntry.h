/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimeCollectionEntry : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * value; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * key; 
-(RWIProtocolRuntimeRemoteObject *)key;
-(RWIProtocolRuntimeRemoteObject *)value;
-(void)setKey:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setValue:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(id)initWithValue:(id)arg1 ;
@end
