/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, IKBackgroundElement, UIColor, NSArray, IKLockupElement;

@interface IKDocumentBannerElement : IKViewElement {

	BOOL _fixed;

}

@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * subtitle; 
@property (nonatomic,retain,readonly) IKBackgroundElement * background; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (getter=isFixed,nonatomic,readonly) BOOL fixed;                            //@synthesize fixed=_fixed - In the implementation block
@property (nonatomic,retain,readonly) NSArray * buttons; 
@property (nonatomic,retain,readonly) IKLockupElement * lockup; 
-(IKTextElement *)title;
-(IKBackgroundElement *)background;
-(IKTextElement *)subtitle;
-(UIColor *)backgroundColor;
-(NSArray *)buttons;
-(BOOL)fixed;
-(IKLockupElement *)lockup;
-(BOOL)isFixed;
@end
