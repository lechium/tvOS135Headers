/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPerformActionBackdropView.h>

@class PKPass, PKPassSnapshotter, UIImageView;

@interface PKPerformActionPassView : PKPerformActionBackdropView {

	PKPass* _pass;
	PKPassSnapshotter* _snapshotter;
	UIImageView* _passView;

}
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_createSubviews;
-(id)initWithPass:(id)arg1 frame:(CGRect)arg2 ;
-(void)shakeImage;
-(void)smallShakeImage;
-(void)_loadSnapshotView;
-(CGSize)_passImageSize;
@end
