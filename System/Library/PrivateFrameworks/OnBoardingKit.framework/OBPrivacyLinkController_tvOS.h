/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBPrivacyLinkController.h>

@class OBPrivacyLinkView;

@interface OBPrivacyLinkController_tvOS : OBPrivacyLinkController {

	OBPrivacyLinkView* _linkView;

}

@property (nonatomic,retain) OBPrivacyLinkView * linkView;              //@synthesize linkView=_linkView - In the implementation block
-(void)loadView;
-(id)initWithBundleIdentifiers:(id)arg1 ;
-(id)initWithPrivacyBundle:(id)arg1 ;
-(void)setLinkEnabled:(BOOL)arg1 ;
-(OBPrivacyLinkView *)linkView;
-(void)setLinkView:(OBPrivacyLinkView *)arg1 ;
@end

