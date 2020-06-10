/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleIDSSOAuthentication/AppleIDSSOAuthentication-Structs.h>
#import <AppleIDSSOAuthentication/AIDAServiceContext.h>

@class NSDictionary, UIViewController;

@interface AIDAMutableServiceContext : AIDAServiceContext

@property (nonatomic,copy) NSDictionary * authenticationResults; 
@property (assign,nonatomic) BOOL shouldForceOperation; 
@property (assign,nonatomic) long long operationUIPermissions; 
@property (nonatomic,retain) UIViewController * viewController; 
@property (assign,nonatomic,__weak) id<CDPStateUIProvider> cdpUiProvider; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setAuthenticationResults:(NSDictionary *)arg1 ;
-(void)setShouldForceOperation:(BOOL)arg1 ;
-(void)setOperationUIPermissions:(long long)arg1 ;
-(void)setCdpUiProvider:(id<CDPStateUIProvider>)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
@end
