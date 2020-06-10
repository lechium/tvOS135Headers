/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class NSURL, NUIContainerStackView, UITextView, NSURLSessionDataTask, UIActivityIndicatorView, NSString;

@interface _MKLegalAttributionViewController : UIViewController <NUIContainerViewDelegate> {

	NSURL* _url;
	NUIContainerStackView* _stackView;
	UITextView* _textView;
	NSURLSessionDataTask* _loadTask;
	UIActivityIndicatorView* _activityIndicator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(id)_textView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)_titleLabel;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
@end

