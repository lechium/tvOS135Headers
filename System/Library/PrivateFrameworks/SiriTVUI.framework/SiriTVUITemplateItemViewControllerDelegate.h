/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriTVUITemplateItemViewControllerDelegate <NSObject>
@property (nonatomic,readonly) double fullScreenFraction; 
@property (nonatomic,readonly) UIEdgeInsets contentMargins; 
@optional
-(void)templateItemViewController:(id)arg1 presentModalWithFetchContentCommand:(id)arg2;
-(void)templateItemViewController:(id)arg1 updateLayoutOffsetsForHighlightedItemInViewController:(id)arg2;
-(void)templateItemViewController:(id)arg1 selectTemplateItem:(id)arg2 atIndexPath:(id)arg3;

@required
-(UIEdgeInsets)contentMargins;
-(double)fullScreenFraction;
-(void)templateItemViewController:(id)arg1 highlightTemplateItem:(id)arg2 atIndexPath:(id)arg3 hasStopped:(BOOL)arg4;
-(void)templateItemViewController:(id)arg1 performAceCommands:(id)arg2;

@end
