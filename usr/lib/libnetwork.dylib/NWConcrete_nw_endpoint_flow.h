/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_endpoint_flow.h>

@protocol OS_nw_path, OS_nw_read_request, OS_nw_protocol_definition, OS_nw_path_flow_registration, OS_dispatch_queue, OS_nw_error, OS_nw_fd_wrapper, OS_nw_channel, OS_xpc_object, OS_nw_endpoint, OS_nw_array;
@class NSObject, NSString;

@interface NWConcrete_nw_endpoint_flow : NSObject <OS_nw_endpoint_flow> {

	NSObject*<OS_nw_path> connected_path;
	NSObject*<OS_nw_path> flow_path;
	NWConcrete_nw_endpoint_flow* internally_retained_object;
	unsigned initialized_protocol_callbacks : 1;
	unsigned started : 1;
	unsigned setup_protocols : 1;
	unsigned started_protocols : 1;
	unsigned is_viable : 1;
	unsigned has_connected : 1;
	unsigned initial_payload_sent : 1;
	unsigned assigned_initial_writes : 1;
	unsigned is_channel : 1;
	unsigned is_multipath : 1;
	unsigned multipath_nat64_query_outstanding : 1;
	unsigned custom_protocols_only : 1;
	unsigned is_flow_divert : 1;
	unsigned multilayer_packet_logging : 1;
	unsigned has_progress_target : 1;
	NWConcrete_nw_endpoint_flow* clone_from_flow;
	nw_protocol_identifier protocol_identifier;
	nw_protocol_callbacks* protocol_callbacks;
	nw_listen_protocol_callbacks* listen_callbacks;
	nw_flow_protocol* shared_protocol;
	NSObject*<OS_nw_read_request> new_flow_read_requests;
	nw_protocol* transport_protocol;
	nw_protocol* tls_protocol;
	nw_protocol_identifier* ip_protocol_identifier;
	NSObject*<OS_nw_protocol_definition> multiplexed_message_definition;
	nw_protocol* multiplexed_message_protocol;
	tcp_info* tcp_info;
	tcp_connection_info* tcp_connection_info;
	nw_data_transfer_snapshot* data_transfer_snapshot;
	unsigned long long snapshot_length;
	unsigned snapshot_count;
	NSObject*<OS_nw_path_flow_registration> flow_registration;
	NSObject*<OS_dispatch_queue> client_queue;
	/*^block*/id read_close_handler;
	/*^block*/id write_close_handler;
	nw_hash_tableRef multiplexed_flow_table;
	NSObject*<OS_nw_error> last_error;
	os_unfair_lock_s lock;
	NSObject*<OS_nw_fd_wrapper> connected_fd_wrapper;
	unsigned pending_write_bytes;
	int pre_connected_fd;
	NSObject*<OS_nw_channel> channel;
	nw_protocol* socket_protocol;
	DNSServiceRef_tRef sleep_proxy_ref;
	NSObject*<OS_xpc_object> flow_divert_token;
	NSObject*<OS_nw_endpoint> flow_divert_endpoint;
	unsigned short protocol_log_id_num;
	unsigned keepalive_event_enabled : 1;
	unsigned long long first_keepalive_time;
	unsigned keepalive_count;
	unsigned configured_keepalive_count;
	unsigned configured_keepalive_interval;
	/*^block*/id adaptive_read_event_handler;
	/*^block*/id adaptive_write_event_handler;
	/*^block*/id keepalive_event_handler;
	/*^block*/id metadata_changed_event_handler;
	NSObject*<OS_nw_array> connected_metadata;
	unsigned long long sent_application_byte_count;
	unsigned long long received_application_byte_count;
	unsigned char connection_uuid[16];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)startWithHandler:(id)arg1 ;
-(void)cancelWithHandler:(id)arg1 forced:(BOOL)arg2 ;
-(void)updatePathWithHandler:(id)arg1 ;
@end

