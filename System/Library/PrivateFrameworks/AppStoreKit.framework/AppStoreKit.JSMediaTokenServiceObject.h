/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_TtP11AppStoreKitP33_DDDE28517FCD97BF716F071D2D29E8A432JSMediaTokenServiceObjectExports_.h>

@class NSString;

@interface AppStoreKit.JSMediaTokenServiceObject : NSObject <_TtP11AppStoreKitP33_DDDE28517FCD97BF716F071D2D29E8A432JSMediaTokenServiceObjectExports_> {

	 tokenService;

}

@property (readonly,nonatomic) NSString * tokenString; 
-(id)init;
-(NSString *)tokenString;
-(id)refreshToken;
-(id)overrideToken:(id)arg1 ;
-(void)resetToken;
@end

