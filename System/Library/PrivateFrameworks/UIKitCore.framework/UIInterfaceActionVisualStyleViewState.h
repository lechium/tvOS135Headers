/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITraitCollection, UIScreen, UIColor;

@interface UIInterfaceActionVisualStyleViewState : NSObject <NSCopying> {

	UITraitCollection* _traitCollection;
	UIScreen* _screen;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) UIScreen * screen;                                //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                              //@synthesize tintColor=_tintColor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(UIScreen *)screen;
-(UIColor *)tintColor;
-(UITraitCollection *)traitCollection;
-(id)copyWithScreen:(id)arg1 ;
-(id)copyWithTraitCollection:(id)arg1 ;
-(id)initWithPropertiesFromTopLevelView:(id)arg1 ;
-(void)_collectStateFromView:(id)arg1 ;
-(void)_collectStateFromScreen:(id)arg1 ;
-(void)_collectStateFromVisualStyleViewState:(id)arg1 ;
-(BOOL)_stateEqualToVisualStyleViewState:(id)arg1 ;
@end

