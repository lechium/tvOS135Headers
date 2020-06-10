/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PBSRestrictionService : NSObject
+(id)sharedInstance;
-(id)validateRestrictionForContentType:(unsigned long long)arg1 withRating:(id)arg2 allowInteraction:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)cancelRestrictionAuthorization:(id)arg1 ;
-(id)validateRestrictionForSetting:(unsigned long long)arg1 allowInteraction:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)restrictionsEnabledWithResult:(/*^block*/id)arg1 ;
-(void)authorizeRestrictionsWithResult:(/*^block*/id)arg1 ;
-(void)validatePIN:(id)arg1 withResult:(/*^block*/id)arg2 ;
@end

