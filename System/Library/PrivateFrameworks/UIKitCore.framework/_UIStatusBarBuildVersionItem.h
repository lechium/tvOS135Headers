/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

@interface _UIStatusBarBuildVersionItem : _UIStatusBarItem {

	_UIStatusBarStringView* _buildVersionView;

}

@property (nonatomic,retain) _UIStatusBarStringView * buildVersionView;              //@synthesize buildVersionView=_buildVersionView - In the implementation block
-(BOOL)needsUpdate;
-(id)viewForIdentifier:(id)arg1 ;
-(void)_create_buildVersionView;
-(_UIStatusBarStringView *)buildVersionView;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(void)setBuildVersionView:(_UIStatusBarStringView *)arg1 ;
@end
