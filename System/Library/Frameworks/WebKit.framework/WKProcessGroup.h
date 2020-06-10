/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKGeolocationProviderIOS;

@interface WKProcessGroup : NSObject {

	RefPtr<WebKit::WebProcessPool, WTF::DumbPtrTraits<WebKit::WebProcessPool> >* _processPool;
	WeakObjCPtr<id<WKProcessGroupDelegate> > _delegate;
	RetainPtr<WKGeolocationProviderIOS>* _geolocationProvider;

}

@property (readonly) OpaqueWKContextRef _contextRef; 
@property (readonly) WKGeolocationProviderIOS * _geolocationProvider; 
@property (assign) id<WKProcessGroupDelegate> delegate; 
-(id)init;
-(id<WKProcessGroupDelegate>)delegate;
-(void)setDelegate:(id<WKProcessGroupDelegate>)arg1 ;
-(WKGeolocationProviderIOS *)_geolocationProvider;
-(OpaqueWKContextRef)_contextRef;
-(id)initWithInjectedBundleURL:(id)arg1 ;
-(id)initWithInjectedBundleURL:(id)arg1 andCustomClassesForParameterCoder:(id)arg2 ;
-(void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
@end

