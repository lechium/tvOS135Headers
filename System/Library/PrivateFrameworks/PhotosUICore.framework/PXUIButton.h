/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIButton.h>

@class PXUIButtonConfiguration;

@interface PXUIButton : UIButton {

	PXUIButtonConfiguration* _configuration;

}

@property (nonatomic,copy) PXUIButtonConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(PXUIButtonConfiguration *)configuration;
-(void)setConfiguration:(PXUIButtonConfiguration *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
