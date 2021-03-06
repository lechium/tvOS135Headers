/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolDebuggerLocation, NSString, NSArray;

@interface RWIProtocolDebuggerFunctionDetails : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolDebuggerLocation * location; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSArray * scopeChain; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(RWIProtocolDebuggerLocation *)location;
-(void)setLocation:(RWIProtocolDebuggerLocation *)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(void)setScopeChain:(NSArray *)arg1 ;
-(NSArray *)scopeChain;
@end

