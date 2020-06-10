/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_endpoint_resolver.h>

@protocol OS_nw_resolver, OS_nw_array, OS_nw_dictionary;
@class NSObject, NWConcrete_nw_endpoint_handler, NSString;

@interface NWConcrete_nw_endpoint_resolver : NSObject <OS_nw_endpoint_resolver> {

	NSObject*<OS_nw_resolver> resolver;
	int last_resolver_status;
	unsigned next_child_endpoint_index;
	unsigned failed_to_start_next_child : 1;
	unsigned started_desperate_ivan : 1;
	unsigned waiting_for_desperate_ivan : 1;
	NWConcrete_nw_endpoint_handler* connected_child;
	NSObject*<OS_nw_array> child_endpoint_handlers;
	NSObject*<OS_nw_array> ready_child_endpoint_handlers;
	NSObject*<OS_nw_array> failed_child_endpoint_handlers;
	void* child_timer;
	void* trigger_agent_timer;
	void* desperate_ivan_timer;
	NSObject*<OS_nw_dictionary> resolve_flow_registrations;
	NSObject*<OS_nw_array> path_resolved_endpoints;
	NSObject*<OS_nw_array> resolver_resolved_endpoints;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)applyWithHandler:(id)arg1 toChildren:(/*^block*/id)arg2 ;
-(void)startWithHandler:(id)arg1 ;
-(void)cancelWithHandler:(id)arg1 forced:(BOOL)arg2 ;
-(void)updatePathWithHandler:(id)arg1 ;
@end

