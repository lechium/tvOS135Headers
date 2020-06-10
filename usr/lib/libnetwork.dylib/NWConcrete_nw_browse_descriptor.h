/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_browse_descriptor.h>

@protocol OS_dispatch_data;
@class NSObject, NSString;

@interface NWConcrete_nw_browse_descriptor : NSObject <OS_nw_browse_descriptor> {

	int type;
	char* bonjour_type;
	char* bonjour_domain;
	char* description;
	char* logging_description;
	NSObject*<OS_dispatch_data> custom_data;
	/*^block*/id browse_block;
	unsigned include_txt_record : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id)redactedDescription;
@end

