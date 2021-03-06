/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class PBCodable, NSUUID, NSArray;

@interface __NSURLSessionStatistics : NSObject {

	void* report;
	PBCodable* _awdReport;
	NSUUID* _externallyVisibleNwActivity;
	NSArray* _externallyVisibleConnectionUUIDs;

}

@property (nonatomic,readonly) PBCodable * awdReport; 
@property (nonatomic,readonly) unsigned awdMetricID; 
@property (nonatomic,readonly) NSUUID * nwActivity; 
@property (nonatomic,readonly) NSUUID * taskUUID; 
@property (nonatomic,readonly) NSArray * connectionUUIDS; 
@property (retain) NSUUID * externallyVisibleNwActivity;                    //@synthesize externallyVisibleNwActivity=_externallyVisibleNwActivity - In the implementation block
@property (retain) NSArray * externallyVisibleConnectionUUIDs;              //@synthesize externallyVisibleConnectionUUIDs=_externallyVisibleConnectionUUIDs - In the implementation block
+(void)reportMetricsToSymptoms:(id)arg1 ;
+(SCD_Struct_NS54*)createCFNetworkTaskMetrics_s:(id)arg1 ;
+(int)getTaskType:(id)arg1 ;
+(int)getNetworkProtocol:(id)arg1 ;
+(void)fillCFNetworkTransactionMetricStruct:(SCD_Struct_NS53*)arg1 from:(id)arg2 ;
-(void)dealloc;
-(id)initWithCFNetworkReport:(void*)arg1 length:(long long)arg2 ;
-(id)initWithPBCodableData:(id)arg1 ;
-(NSUUID *)nwActivity;
-(NSUUID *)taskUUID;
-(NSArray *)connectionUUIDS;
-(unsigned)awdMetricID;
-(PBCodable *)awdReport;
-(NSUUID *)externallyVisibleNwActivity;
-(void)setExternallyVisibleNwActivity:(NSUUID *)arg1 ;
-(NSArray *)externallyVisibleConnectionUUIDs;
-(void)setExternallyVisibleConnectionUUIDs:(NSArray *)arg1 ;
@end

