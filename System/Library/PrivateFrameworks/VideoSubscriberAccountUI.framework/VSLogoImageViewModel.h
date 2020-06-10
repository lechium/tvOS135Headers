/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSItemProvider, UIImage, NSString;


@protocol VSLogoImageViewModel <NSObject>
@property (nonatomic,retain) NSItemProvider * logoProvider; 
@property (nonatomic,retain) UIImage * logo; 
@property (nonatomic,copy) NSString * logoAccessibilityLabel; 
@required
-(UIImage *)logo;
-(void)setLogo:(id)arg1;
-(void)setLogoProvider:(id)arg1;
-(NSItemProvider *)logoProvider;
-(NSString *)logoAccessibilityLabel;
-(void)setLogoAccessibilityLabel:(id)arg1;

@end

