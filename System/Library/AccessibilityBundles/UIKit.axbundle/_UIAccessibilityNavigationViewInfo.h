/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UINavigationItem, UIBarButtonItem, UINavigationBar;

@interface _UIAccessibilityNavigationViewInfo : NSObject {

	BOOL _isCancelItem;
	BOOL _isRightItem;
	UINavigationItem* _navigationItem;
	UIBarButtonItem* _barButtonItem;
	UINavigationBar* _navigationBar;

}

@property (assign,nonatomic,__weak) UINavigationItem * navigationItem;              //@synthesize navigationItem=_navigationItem - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * barButtonItem;                //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (assign,nonatomic,__weak) UINavigationBar * navigationBar;                //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign,nonatomic) BOOL isCancelItem;                                     //@synthesize isCancelItem=_isCancelItem - In the implementation block
@property (assign,nonatomic) BOOL isRightItem;                                      //@synthesize isRightItem=_isRightItem - In the implementation block
-(UINavigationItem *)navigationItem;
-(void)setNavigationItem:(UINavigationItem *)arg1 ;
-(UINavigationBar *)navigationBar;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)barButtonItem;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(BOOL)isCancelItem;
-(void)setIsCancelItem:(BOOL)arg1 ;
-(BOOL)isRightItem;
-(void)setIsRightItem:(BOOL)arg1 ;
@end

