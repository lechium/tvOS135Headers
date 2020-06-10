/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIAccessibilityAutomationAction : NSObject {

	NSString* _identifier;
	SEL _selector;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) SEL selector;                       //@synthesize selector=_selector - In the implementation block
-(SEL)selector;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 selector:(SEL)arg2 ;
@end

