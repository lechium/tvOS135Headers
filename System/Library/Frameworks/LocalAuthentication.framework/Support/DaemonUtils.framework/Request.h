/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSMutableDictionary, NSMutableArray, Caller, NSDate, NSObject;

@interface Request : NSObject {

	NSMutableDictionary* _cachedValues;
	NSMutableArray* _heldObjects;
	BOOL _interactive;
	unsigned _identifier;
	Caller* _caller;
	NSDate* _received;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
@property (nonatomic,readonly) unsigned identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) Caller * caller;                     //@synthesize caller=_caller - In the implementation block
@property (nonatomic,readonly) NSDate * received;                   //@synthesize received=_received - In the implementation block
@property (nonatomic,readonly) BOOL interactive;                    //@synthesize interactive=_interactive - In the implementation block
+(id)current;
+(id)requestFromCurrentConnection;
+(id)requestFromConnection:(id)arg1 event:(id)arg2 ;
-(void)dealloc;
-(unsigned)identifier;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(Caller *)caller;
-(BOOL)interactive;
-(id)initWithCaller:(id)arg1 ;
-(id)cachedValue:(long long)arg1 object:(id)arg2 error:(id*)arg3 readValueBlock:(/*^block*/id)arg4 ;
-(id)_complexIdentifier:(long long)arg1 object:(id)arg2 ;
-(void)_invalidateCachedValue:(id)arg1 identifier:(id)arg2 ;
-(id)cachedValue:(long long)arg1 error:(id*)arg2 readValueBlock:(/*^block*/id)arg3 ;
-(void)holdObject:(id)arg1 ;
-(NSDate *)received;
@end

