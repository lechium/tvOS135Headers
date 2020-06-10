/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIBaseTemplateView.h>

@interface SiriUIMessageContentTemplateView : SiriUIBaseTemplateView

@property (assign,nonatomic,__weak) id<SiriUIMessageContentTemplateModel> dataSource; 
-(id)initWithDataSource:(id)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(double)desiredHeight;
-(CGSize)_textBalloonViewBoundingSize;
@end

