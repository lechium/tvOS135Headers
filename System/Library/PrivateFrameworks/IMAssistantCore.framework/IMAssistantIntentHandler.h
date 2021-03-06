/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/_INExtension.h>

@class NSMutableArray;

@interface IMAssistantIntentHandler : _INExtension {

	NSMutableArray* _recentIntentHandlers;

}
-(id)init;
-(id)handlerForIntent:(id)arg1 ;
-(id)existingHandlerForIntentIdentifier:(id)arg1 ;
-(void)updateRecentlyUsedHandlersWithHandler:(id)arg1 ;
@end

