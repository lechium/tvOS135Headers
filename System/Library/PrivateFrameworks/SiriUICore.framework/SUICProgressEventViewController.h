/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUICore/SUICProgressIndicatorViewController.h>
#import <libobjc.A.dylib/SUICProgressIndicatorViewControllerDataSource.h>

@class SUICProgressStateMachine, NSProgress, NSString;

@interface SUICProgressEventViewController : SUICProgressIndicatorViewController <SUICProgressIndicatorViewControllerDataSource> {

	SUICProgressStateMachine* _stateMachine;
	NSProgress* _progress;

}

@property (nonatomic,retain) NSProgress * progress;                 //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)handleEvent:(unsigned long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)stateMachineForProgressIndicatorViewController:(id)arg1 ;
@end
