/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class PSListController, NSString, NSMutableArray, PSSpecifier;

@interface PSExpandableListGroup : NSObject <PSSpecifierGroup> {

	PSListController* _listController;
	NSString* _groupSpecifierID;
	long long _collaspeAfterCount;
	NSMutableArray* _specifiers;
	BOOL _showAll;
	PSSpecifier* _showAllSpecifier;
	PSSpecifier* _spinnerSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)reloadSpecifiers;
-(long long)_groupIndex;
-(id)spinnerSpecifier;
-(id)initWithListController:(id)arg1 groupSpecifierID:(id)arg2 collapseAfterCount:(long long)arg3 ;
-(id)showAllSpecifier;
-(void)showAll;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)addSpecifiers:(id)arg1 ;
-(void)removeAllSpecifiers;
@end

