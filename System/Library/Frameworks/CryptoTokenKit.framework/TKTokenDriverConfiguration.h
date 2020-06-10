/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TKTokenConfigurationConnection, NSString, NSDictionary;

@interface TKTokenDriverConfiguration : NSObject {

	TKTokenConfigurationConnection* _configurationConnection;
	NSString* _classID;

}

@property (nonatomic,readonly) NSString * classID;                                   //@synthesize classID=_classID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * tokenConfigurations; 
+(id)driverConfigurationsWithClient:(id)arg1 ;
+(id)driverConfigurations;
-(id)beginTransaction;
-(NSString *)classID;
-(id)initWithClassID:(id)arg1 configurationConnection:(id)arg2 ;
-(id)createTokenConfigurationWithInstanceID:(id)arg1 persistent:(BOOL)arg2 ;
-(NSDictionary *)tokenConfigurations;
-(id)addTokenConfigurationForTokenInstanceID:(id)arg1 ;
-(void)removeTokenConfigurationForTokenInstanceID:(id)arg1 ;
@end
