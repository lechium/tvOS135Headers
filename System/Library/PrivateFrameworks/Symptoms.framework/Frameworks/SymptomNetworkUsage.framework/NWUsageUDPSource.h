/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
#import <SymptomNetworkUsage/NWUsageSource.h>

@class NSDictionary;

@interface NWUsageUDPSource : NWUsageSource {

	updater_nstat_msg_src_update_udp _nstatUDPUpdate;
	NSDictionary* _lookupResults;

}
-(id)createSnapshot:(int)arg1 ;
-(BOOL)updateWithUpdate:(nstat_msg_src_update_convenient*)arg1 monitor:(id)arg2 ;
-(id)initWithUpdate:(nstat_msg_src_update_convenient*)arg1 monitor:(id)arg2 ;
-(void)deriveAttribution:(id)arg1 ;
@end

