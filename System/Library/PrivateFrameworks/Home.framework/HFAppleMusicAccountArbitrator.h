/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, NSSet, NAFuture;

@interface HFAppleMusicAccountArbitrator : NSObject {

	BOOL _forceLogout;
	ACAccount* _account;
	NSSet* _accessories;
	/*^block*/id _contextGenerator;
	long long _loginType;
	NAFuture* _activeArbitrationFuture;

}

@property (nonatomic,retain) NAFuture * activeArbitrationFuture;              //@synthesize activeArbitrationFuture=_activeArbitrationFuture - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                           //@synthesize account=_account - In the implementation block
@property (nonatomic,copy,readonly) NSSet * accessories;                      //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,copy,readonly) id contextGenerator;                      //@synthesize contextGenerator=_contextGenerator - In the implementation block
@property (assign,nonatomic) long long loginType;                             //@synthesize loginType=_loginType - In the implementation block
@property (assign,nonatomic) BOOL forceLogout;                                //@synthesize forceLogout=_forceLogout - In the implementation block
-(id)init;
-(ACAccount *)account;
-(NSSet *)accessories;
-(id)pendingArbitrationExecutionFuture;
-(id)initWithAccessories:(id)arg1 account:(id)arg2 contextGenerator:(/*^block*/id)arg3 ;
-(long long)loginType;
-(long long)_resolvedLoginType:(id*)arg1 ;
-(id)contextGenerator;
-(void)setLoginType:(long long)arg1 ;
-(BOOL)forceLogout;
-(void)setForceLogout:(BOOL)arg1 ;
-(NAFuture *)activeArbitrationFuture;
-(void)setActiveArbitrationFuture:(NAFuture *)arg1 ;
@end

