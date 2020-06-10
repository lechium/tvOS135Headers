/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSMutableDictionary, NSMutableArray, NSString;

@interface IMTunesController : NSObject {

	NSDate* _lastChange;
	NSDictionary* _lastInfo;
	NSMutableDictionary* _playerInfo;
	NSMutableArray* _listeners;
	NSString* _messageFormat;

}

@property (assign,nonatomic) NSMutableDictionary * playerInfo;              //@synthesize playerInfo=_playerInfo - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled; 
@property (nonatomic,readonly) NSString * messageFormat; 
+(id)sharedTunesController;
-(id)init;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(NSMutableDictionary *)playerInfo;
-(NSString *)messageFormat;
-(void)_updateMessage;
-(void)_playerChanged:(id)arg1 ;
-(void)_playerChangedNotification:(id)arg1 ;
-(void)setPlayerInfo:(NSMutableDictionary *)arg1 ;
@end

