/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKProductPageExtensionServiceInterface.h>

@class NSString;

@interface SKProductPageExtension : UIViewController <SKProductPageExtensionServiceInterface> {

	BOOL _showsStoreButton;
	BOOL _showsRightBarButton;
	BOOL _askToBuy;
	NSString* _cancelButtonTitle;
	NSString* _rightBarButtonTitle;
	NSString* _promptString;

}

@property (assign,nonatomic) BOOL showsStoreButton;                     //@synthesize showsStoreButton=_showsStoreButton - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonTitle;                //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * rightBarButtonTitle;              //@synthesize rightBarButtonTitle=_rightBarButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL showsRightBarButton;                  //@synthesize showsRightBarButton=_showsRightBarButton - In the implementation block
@property (nonatomic,copy) NSString * promptString;                     //@synthesize promptString=_promptString - In the implementation block
@property (assign,nonatomic) BOOL askToBuy;                             //@synthesize askToBuy=_askToBuy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)serviceInterface;
+(id)clientInterface;
+(id)_remoteViewControllerInterface;
-(void)loadDidFinish;
-(BOOL)askToBuy;
-(void)setPreview:(id)arg1 ;
-(NSString *)cancelButtonTitle;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(void)setShowsStoreButton:(BOOL)arg1 ;
-(void)setAskToBuy:(BOOL)arg1 ;
-(void)setRightBarButtonTitle:(NSString *)arg1 ;
-(void)setShowsRightBarButton:(BOOL)arg1 ;
-(void)setPromptString:(NSString *)arg1 ;
-(void)setVisibleInClientWindow:(id)arg1 ;
-(BOOL)showsStoreButton;
-(NSString *)rightBarButtonTitle;
-(BOOL)showsRightBarButton;
-(NSString *)promptString;
-(void)finishWithResult:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createNavigationItem;
-(void)setupWithCustomNavigationItem:(id)arg1 promptString:(id)arg2 askToBuy:(BOOL)arg3 ;
-(BOOL)productPageItemDidLoad:(id)arg1 parameters:(id)arg2 ;
-(BOOL)lookupItemDidLoad:(id)arg1 parameters:(id)arg2 ;
-(void)setupWithClientBundleID:(id)arg1 bagType:(long long)arg2 ;
-(void)clientLookupItemDidLoad:(id)arg1 parameters:(id)arg2 ;
-(void)cancelButtonPressed:(id)arg1 ;
-(void)rightBarButtonPressed:(id)arg1 ;
-(void)storeButtonPressed:(id)arg1 ;
-(void)setupWithClientBundleID:(id)arg1 ;
@end

