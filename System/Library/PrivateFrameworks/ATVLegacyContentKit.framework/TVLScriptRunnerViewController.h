/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, UIProgressView, TVLLegacyJSContext, TVLRootElement, NSArray;

@interface TVLScriptRunnerViewController : UIViewController {

	UILabel* _statusText;
	UIProgressView* _progressBar;
	TVLLegacyJSContext* _context;
	TVLRootElement* _feedElement;
	NSArray* _scriptURLs;

}

@property (nonatomic,retain) UILabel * statusText;                      //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,retain) UIProgressView * progressBar;              //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,retain) TVLLegacyJSContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) TVLRootElement * feedElement;              //@synthesize feedElement=_feedElement - In the implementation block
@property (nonatomic,copy) NSArray * scriptURLs;                        //@synthesize scriptURLs=_scriptURLs - In the implementation block
-(void)dealloc;
-(TVLLegacyJSContext *)context;
-(void)setContext:(TVLLegacyJSContext *)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(UIProgressView *)progressBar;
-(void)setStatusText:(UILabel *)arg1 ;
-(UILabel *)statusText;
-(id)initWithFeedElement:(id)arg1 ;
-(void)setScriptURLs:(NSArray *)arg1 ;
-(NSArray *)scriptURLs;
-(TVLRootElement *)feedElement;
-(void)setFeedElement:(TVLRootElement *)arg1 ;
-(void)setProgressBar:(UIProgressView *)arg1 ;
-(void)_setStatus:(id)arg1 withPercentComplete:(float)arg2 ;
-(void)_evaluateScripts:(id)arg1 ;
@end

