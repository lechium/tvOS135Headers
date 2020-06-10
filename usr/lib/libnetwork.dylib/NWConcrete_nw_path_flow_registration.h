/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_path_flow_registration.h>

@class NWConcrete_nw_path_evaluator, NSString;

@interface NWConcrete_nw_path_flow_registration : NSObject <OS_nw_path_flow_registration> {

	NWConcrete_nw_path_evaluator* parent_evaluator;
	unsigned char registration_id[16];
	unsigned char nexus_agent[16];
	necp_all_stats* flow_stats_area;
	ifnet_stats_per_flow* flow_interface_stats;
	const sk_nexusadvRef advisory;
	nw_protocol_identifier* transport_stats_protocol;
	nw_protocol_identifier* internet_stats_protocol;
	void* transport_stats_region;
	void* internet_stats_region;
	unsigned override_traffic_class;
	unsigned registered : 1;
	unsigned partial_checksum_offload : 1;
	unsigned uses_nexus : 1;
	unsigned override_is_expensive : 1;
	unsigned override_is_constrained : 1;
	unsigned override_uses_wifi : 1;
	unsigned override_uses_cellular : 1;
	unsigned override_reason : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
@end

