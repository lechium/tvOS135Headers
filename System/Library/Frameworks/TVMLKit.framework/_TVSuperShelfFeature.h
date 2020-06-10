/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/IKAppBrowser.h>

@protocol TVBrowserProviding;
@class _TVMLBrowserViewController, UIViewController, NSString;

@interface _TVSuperShelfFeature : NSObject <IKAppBrowser> {

	_TVMLBrowserViewController* _superShelfViewController;
	UIViewController*<TVBrowserProviding> _provider;

}

@property (nonatomic,readonly) _TVMLBrowserViewController * superShelfViewController;              //@synthesize superShelfViewController=_superShelfViewController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<TVBrowserProviding> provider;                //@synthesize provider=_provider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double interitemSpacing; 
@property (assign,nonatomic) UIEdgeInsets maskInset; 
-(void)setProvider:(UIViewController*<TVBrowserProviding>)arg1 ;
-(void)present;
-(UIViewController*<TVBrowserProviding>)provider;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithProvider:(id)arg1 ;
-(double)interitemSpacing;
-(UIEdgeInsets)maskInset;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setMaskInset:(UIEdgeInsets)arg1 ;
-(_TVMLBrowserViewController *)superShelfViewController;
@end
