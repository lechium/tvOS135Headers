/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AXDragEndpointRequestSatisfierDelegate.h>

@protocol AXDragEndpointVendorDelegate;
@class NSXPCListener, NSMutableSet, NSString;

@interface AXDragEndpointVendor : NSObject <NSXPCListenerDelegate, AXDragEndpointRequestSatisfierDelegate> {

	NSXPCListener* _listener;
	NSMutableSet* _activeConnections;
	id<AXDragEndpointVendorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXDragEndpointVendorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AXDragEndpointVendorDelegate>)delegate;
-(void)setDelegate:(id<AXDragEndpointVendorDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)resume;
-(void)endpointRequestSatisfierDidDisconnect:(id)arg1 ;
-(id)endpointForConnection:(id)arg1 forEndpointRequestSatisfier:(id)arg2 ;
-(id)initWithXPCListener:(id)arg1 ;
@end

