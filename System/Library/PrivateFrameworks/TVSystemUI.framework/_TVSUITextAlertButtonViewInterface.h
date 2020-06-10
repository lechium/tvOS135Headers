/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol _TVSUITextAlertButtonViewInterface <NSObject>
@property (setter=ab_setTitle:,nonatomic,retain) NSString * ab_title; 
@property (setter=ab_setDetailText:,nonatomic,retain) NSString * ab_detailText; 
@required
-(void)ab_setTitle:(id)arg1 animated:(BOOL)arg2;
-(NSString *)ab_title;
-(void)ab_setTitle:(id)arg1;
-(NSString *)ab_detailText;
-(void)ab_setDetailText:(id)arg1;
-(void)ab_setDetailText:(id)arg1 animated:(BOOL)arg2;
-(double)ab_minimumWidth;

@end
