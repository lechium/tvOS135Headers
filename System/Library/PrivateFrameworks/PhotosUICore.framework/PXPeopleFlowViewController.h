/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXPeopleFlowViewController <NSObject>
@property (nonatomic,retain) id context; 
@property (nonatomic,readonly) CGSize preferredSize; 
@property (assign,nonatomic,__weak) id<PXPeopleFlowViewControllerActionDelegate> actionDelegate; 
@optional
-(void)setActionDelegate:(id)arg1;
-(id<PXPeopleFlowViewControllerActionDelegate>)actionDelegate;
-(CGSize)preferredSize;
-(void)willTransitionToNextInFlow;
-(void)willTransitionToPreviousInFlow;

@required
-(id)context;
-(void)setContext:(id)arg1;

@end

