/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TROperation.h>

@class ACAccount, NSSet;

@interface TRCompanionAuthOperation : TROperation {

	ACAccount* _account;
	NSSet* _targetedServices;

}

@property (nonatomic,retain) ACAccount * account;                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSSet * targetedServices;              //@synthesize targetedServices=_targetedServices - In the implementation block
-(void)execute;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(void)setTargetedServices:(NSSet *)arg1 ;
-(NSSet *)targetedServices;
@end

