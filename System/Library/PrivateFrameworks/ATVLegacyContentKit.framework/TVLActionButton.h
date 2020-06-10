/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVActionButton.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLActionButtonElement, TVImageProxy;

@interface TVLActionButton : TVActionButton <ATVUpdatable> {

	TVLActionButtonElement* _actionButtonElement;
	TVImageProxy* _imageProxy;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithActionButtonElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
@end
