/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextItemInteractionHandler.h>

@protocol _UITextContent;
@class UIView, NSString;

@interface _UITextPlainLinkInteractionHandler : NSObject <_UITextItemInteractionHandler> {

	NSRange _range;
	UIView*<_UITextContent> _view;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)link;
-(id)defaultAction;
-(id)_openURLAction:(id)arg1 ;
-(/*^block*/id)_handlerRequiringUnlockedDevice:(/*^block*/id)arg1 ;
-(id)initWithRange:(NSRange)arg1 rect:(CGRect)arg2 inTextContentView:(id)arg3 ;
-(id)_titleForLink:(id)arg1 ;
-(id)_copyLinkAction:(id)arg1 ;
-(id)_shareLinkAction:(id)arg1 ;
@end

