/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/WFAccount.h>

@class NSString;

@interface WFTrelloAccount : WFAccount {

	NSString* _token;
	NSString* _email;

}

@property (nonatomic,copy) NSString * token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * email;              //@synthesize email=_email - In the implementation block
+(id)serviceID;
+(id)localizedServiceName;
+(id)accountWithToken:(id)arg1 ;
-(NSString *)token;
-(BOOL)isValid;
-(id)localizedName;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
@end

