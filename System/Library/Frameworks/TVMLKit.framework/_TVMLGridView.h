/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVGridView.h>
#import <TVMLKit/TVRowHosting_Collection.h>

@class UIView, NSString;

@interface _TVMLGridView : _TVGridView <TVRowHosting_Collection> {

	BOOL _configureForListTemplate;
	UIView* _headerView;

}

@property (assign,nonatomic) BOOL configureForListTemplate;              //@synthesize configureForListTemplate=_configureForListTemplate - In the implementation block
@property (nonatomic,retain) UIView * headerView;                        //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldBindRowsTogether; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(UIEdgeInsets)arg2 firstItemRowIndex:(long long*)arg3 ;
-(id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 ;
-(void)setConfigureForListTemplate:(BOOL)arg1 ;
-(BOOL)configureForListTemplate;
@end

