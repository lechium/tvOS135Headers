/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_ws_request.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface NWConcrete_nw_ws_request : NSObject <OS_nw_ws_request> {

	NSObject*<OS_xpc_object> subprotocols;
	NSObject*<OS_xpc_object> header_names;
	NSObject*<OS_xpc_object> header_values;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end
