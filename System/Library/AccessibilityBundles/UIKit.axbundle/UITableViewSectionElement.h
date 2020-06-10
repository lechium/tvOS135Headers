/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityElementMockViewDelegateProtocol.h>

@class NSMutableArray;

@interface UITableViewSectionElement : UIAccessibilityElement <UIAccessibilityElementMockViewDelegateProtocol> {

	BOOL _isHeader;
	long long _section;
	NSMutableArray* _children;

}

@property (assign,nonatomic) long long section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL isHeader;                  //@synthesize isHeader=_isHeader - In the implementation block
-(id)description;
-(void)dealloc;
-(long long)section;
-(void)setSection:(long long)arg1 ;
-(BOOL)isAccessibilityElement;
-(CGRect)accessibilityFrame;
-(id)accessibilityIdentifier;
-(id)accessibilityElements;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(BOOL)accessibilityScrollToVisible;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(BOOL)_accessibilityIsNotFirstElement;
-(void)_accessibilityClearChildren;
-(id)accessibilityChildren;
-(BOOL)isHeader;
-(void)setIsHeader:(BOOL)arg1 ;
-(void)updateMockView:(id)arg1 ;
-(void)_acccessibilityClearChildCache;
-(id)_textChildWithTitle:(id)arg1 ;
-(id)_accessibilityAccessibleElementsInView:(id)arg1 ;
@end

