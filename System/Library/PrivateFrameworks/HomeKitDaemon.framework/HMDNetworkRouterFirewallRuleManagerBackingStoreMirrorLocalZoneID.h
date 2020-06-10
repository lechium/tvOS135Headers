/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBLocalZoneID.h>

@class NSData, NSString, NSArray;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorLocalZoneID : HMFObject <HMBLocalZoneID> {

	NSData* _token;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * labels; 
@property (nonatomic,readonly) NSData * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSString * name; 
+(id)sharedInstance;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)token;
-(id)initWithToken:(id)arg1 ;
-(NSArray *)labels;
-(id)attributeDescriptions;
@end
