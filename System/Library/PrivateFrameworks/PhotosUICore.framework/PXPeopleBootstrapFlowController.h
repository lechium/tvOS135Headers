/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXPeopleFlowController.h>

@protocol PXPeopleBootstrapFlowDelegate, PXPeopleSuggestionManagerDataSource;
@class PXPeopleBootstrapContext, NSArray, NSString;

@interface PXPeopleBootstrapFlowController : NSObject <PXPeopleFlowController> {

	id<PXPeopleBootstrapFlowDelegate> _bootstrapDelegate;
	id<PXPeopleSuggestionManagerDataSource> _bootstrapDataSource;
	PXPeopleBootstrapContext* _context;
	unsigned long long _namingResultType;
	NSArray* _viewControllers;
	unsigned long long _viewControllerIndex;

}

@property (nonatomic,copy) NSArray * viewControllers;                                                             //@synthesize viewControllers=_viewControllers - In the implementation block
@property (assign,nonatomic) unsigned long long viewControllerIndex;                                              //@synthesize viewControllerIndex=_viewControllerIndex - In the implementation block
@property (nonatomic,retain) id<PXPeopleBootstrapFlowDelegate> bootstrapDelegate;                                 //@synthesize bootstrapDelegate=_bootstrapDelegate - In the implementation block
@property (nonatomic,retain) id<PXPeopleSuggestionManagerDataSource> bootstrapDataSource;                         //@synthesize bootstrapDataSource=_bootstrapDataSource - In the implementation block
@property (nonatomic,readonly) PXPeopleBootstrapContext * context;                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL shouldPresentNaming; 
@property (nonatomic,readonly) BOOL shouldPresentPostNaming; 
@property (assign,nonatomic) unsigned long long namingResultType;                                                 //@synthesize namingResultType=_namingResultType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasNextViewController; 
@property (nonatomic,readonly) UIViewController*<PXPeopleFlowViewController> nextViewController; 
@property (nonatomic,readonly) BOOL hasPreviousViewController; 
@property (nonatomic,readonly) UIViewController*<PXPeopleFlowViewController> previousViewController; 
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(PXPeopleBootstrapContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(void)done:(id)arg1 ;
-(void)computeViewControllersForBootstrapFlow;
-(void)recomputeViewControllersForChangeInKeyPath:(id)arg1 ;
-(BOOL)hasNextViewController;
-(UIViewController*<PXPeopleFlowViewController>)nextViewController;
-(BOOL)hasPreviousViewController;
-(UIViewController*<PXPeopleFlowViewController>)previousViewController;
-(void)commonInitWithContext:(id)arg1 ;
-(id)initEmptyFlowWithContext:(id)arg1 ;
-(BOOL)shouldPresentNaming;
-(BOOL)shouldPresentPostNaming;
-(id<PXPeopleBootstrapFlowDelegate>)bootstrapDelegate;
-(void)setBootstrapDelegate:(id<PXPeopleBootstrapFlowDelegate>)arg1 ;
-(id<PXPeopleSuggestionManagerDataSource>)bootstrapDataSource;
-(void)setBootstrapDataSource:(id<PXPeopleSuggestionManagerDataSource>)arg1 ;
-(unsigned long long)namingResultType;
-(void)setNamingResultType:(unsigned long long)arg1 ;
-(unsigned long long)viewControllerIndex;
-(void)setViewControllerIndex:(unsigned long long)arg1 ;
@end

