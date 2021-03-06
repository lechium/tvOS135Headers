/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSBundleODRDataCommon.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_NSBundleResourceRequestAppExtensionProtocol.h>

@class NSXPCConnection, NSString;

@interface _NSBundleODRDataForExtensions : _NSBundleODRDataCommon <NSXPCListenerDelegate, _NSBundleResourceRequestAppExtensionProtocol> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataForBundle:(id)arg1 createIfRequired:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)accessSandboxExtension:(id)arg1 ;
-(void)hostApplicationAssetPacksBecameAvailable:(id)arg1 ;
-(void)hostApplicationAssetPacksBecameUnavailable:(id)arg1 ;
@end

