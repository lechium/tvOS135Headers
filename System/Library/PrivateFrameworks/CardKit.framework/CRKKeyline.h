/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardKit/CardKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface CRKKeyline : UIView {

	UIView* _keylineView;
	long long _type;
	long long _direction;
	unsigned long long _visualEffectStyle;

}

@property (readonly) long long type;                                    //@synthesize type=_type - In the implementation block
@property (readonly) long long direction;                               //@synthesize direction=_direction - In the implementation block
@property (readonly) unsigned long long visualEffectStyle;              //@synthesize visualEffectStyle=_visualEffectStyle - In the implementation block
-(long long)type;
-(long long)direction;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(id)initWithType:(long long)arg1 direction:(long long)arg2 visualEffectStyle:(unsigned long long)arg3 ;
-(id)_keylineColorForVisualEffectStyle:(unsigned long long)arg1 ;
-(double)_roundedKeylineThickness;
-(double)defaultKeylineInsetForCurrentDevice;
-(unsigned long long)visualEffectStyle;
@end

