/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextInputTokenizer.h>

@protocol UITextInput;
@class UIResponder, NSString;

@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer> {

	UIResponder*<UITextInput> _textInput;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(BOOL)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3 ;
-(id)initWithTextInput:(id)arg1 ;
-(long long)_indexForTextPosition:(id)arg1 ;
-(BOOL)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2 ;
-(id)_closestTokenSubrangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(BOOL)arg3 ;
-(id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3 ;
@end

