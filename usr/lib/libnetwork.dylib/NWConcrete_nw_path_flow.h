/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_path_flow.h>

@protocol OS_nw_interface, OS_xpc_object, OS_nw_endpoint, OS_nw_array;
@class NSObject, NSString;

@interface NWConcrete_nw_path_flow : NSObject <OS_nw_path_flow> {

	void* nexus_key;
	NSObject*<OS_nw_interface> interface;
	NSObject*<OS_xpc_object> nexus_agent;
	NSObject*<OS_nw_endpoint> local_endpoint;
	NSObject*<OS_nw_endpoint> remote_endpoint;
	NSObject*<OS_nw_array> discovered_endpoints;
	NSObject*<OS_nw_array> resolved_endpoints;
	necp_client_result_netagent nexus_agent_struct;
	necp_client_result_interface interface_struct;
	unsigned char tfo_cookie[16];
	unsigned char nexus_instance[16];
	unsigned char flow_id[16];
	unsigned nexus_key_length;
	unsigned nexus_flow_index;
	unsigned nexus_port;
	unsigned ctl_command_code;
	unsigned ctl_command_value;
	unsigned ctl_command_tcp_seq_num;
	unsigned char tfo_cookie_len;
	unsigned viable : 1;
	unsigned assigned : 1;
	unsigned ecn_enabled : 1;
	unsigned fast_open_blocked : 1;
	unsigned is_local : 1;
	unsigned is_direct : 1;
	unsigned has_ipv4 : 1;
	unsigned has_ipv6 : 1;
	unsigned ctl_command_valid : 1;
	unsigned defunct : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
@end

