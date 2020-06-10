/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSAccountsClientListController : PSListController {

	BOOL _noAccountsSetUp;
	BOOL _showExtraVC;
	PSSpecifier* _accountSpecifier;
	id _acObserver;
	int accountUpdateThrottle;

}
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifierForID:(id)arg1 ;
-(void)setSpecifiers:(id)arg1 ;
-(void)updateAccountSpecifier;
-(id)requestedAccountDataclass;
-(id)_visibleAccountTypeIDs;
-(BOOL)_isAccountModificationDisabledByRestrictions;
@end
