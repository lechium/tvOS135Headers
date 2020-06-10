/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SCROBrailleDisplayCommandDispatcherProtocol.h>

@protocol SCROBrailleDisplayCommandDispatcherDelegate;
@class NSDictionary, NSString;

@interface SCROBrailleDisplayCommandDispatcher : NSObject <SCROBrailleDisplayCommandDispatcherProtocol> {

	NSDictionary* _commandDictionary;
	id<SCROBrailleDisplayCommandDispatcherDelegate> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCROBrailleDisplayCommandDispatcherDelegate> delegate; 
-(id)init;
-(id<SCROBrailleDisplayCommandDispatcherDelegate>)delegate;
-(void)setDelegate:(id<SCROBrailleDisplayCommandDispatcherDelegate>)arg1 ;
-(void)_handlePanLeftEvent:(id)arg1 ;
-(void)_handlePanRightEvent:(id)arg1 ;
-(void)_handleMoveLeftEvent:(id)arg1 ;
-(void)_handleMoveRightEvent:(id)arg1 ;
-(void)_handleRouterEvent:(id)arg1 ;
-(void)_handleDeleteEvent:(id)arg1 ;
-(void)_handleEscapeEvent:(id)arg1 ;
-(void)_handleReturnEvent:(id)arg1 ;
-(void)_handleTranslateEvent:(id)arg1 ;
-(void)_handleToggleContractedBrailleEvent:(id)arg1 ;
-(void)_handleToggleEightDotBrailleEvent:(id)arg1 ;
-(void)_handleUnsupportedEvent:(id)arg1 ;
-(BOOL)handleBrailleKeyEvent:(id)arg1 ;
-(void)_handleForwardDeleteEvent:(id)arg1 ;
@end

