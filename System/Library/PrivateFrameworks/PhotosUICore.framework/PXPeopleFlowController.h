/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXPeopleFlowController <NSObject>
@property (nonatomic,readonly) BOOL hasNextViewController; 
@property (nonatomic,readonly) UIViewController*<PXPeopleFlowViewController> nextViewController; 
@property (nonatomic,readonly) BOOL hasPreviousViewController; 
@property (nonatomic,readonly) UIViewController*<PXPeopleFlowViewController> previousViewController; 
@required
-(void)cancel:(id)arg1;
-(void)done:(id)arg1;
-(BOOL)hasNextViewController;
-(UIViewController*<PXPeopleFlowViewController>)nextViewController;
-(BOOL)hasPreviousViewController;
-(UIViewController*<PXPeopleFlowViewController>)previousViewController;

@end
