/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <WiFiKit/WFOperation.h>

@class NSDictionary;

@interface WFUserPromptOperation : WFOperation {

	long long _result;
	NSDictionary* _userResponse;
	NSDictionary* _options;
	double _timeout;
	unsigned long long _flags;

}

@property (assign,nonatomic) long long result;                           //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                     //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSDictionary * userResponse;              //@synthesize userResponse=_userResponse - In the implementation block
+(id)sharedMapTable;
-(NSDictionary *)options;
-(unsigned long long)flags;
-(void)setTimeout:(double)arg1 ;
-(long long)result;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)start;
-(double)timeout;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setResult:(long long)arg1 ;
-(NSDictionary *)userResponse;
-(id)initWithOptions:(id)arg1 timeout:(double)arg2 flags:(unsigned long long)arg3 ;
-(id)initWithOptions:(id)arg1 timeout:(double)arg2 ;
-(void)_showPrompt;
-(void)_notification:(CFUserNotificationRef)arg1 didFinishWithResponse:(unsigned long long)arg2 ;
@end

