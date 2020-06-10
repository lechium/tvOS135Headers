/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSNumber;

@interface SignpostMetrics : NSObject {

	NSData* _binarySnapshot;
	NSNumber* _cpuTimeNsec;
	NSNumber* _dirtyMemoryKB;
	NSNumber* _dirtyMemoryLifetimePeakKB;
	NSNumber* _storageDirtiedKB;
	NSNumber* _cpuInstructionsKI;

}

@property (nonatomic,readonly) NSData * binarySnapshot;                           //@synthesize binarySnapshot=_binarySnapshot - In the implementation block
@property (nonatomic,readonly) NSNumber * cpuTimeNsec;                            //@synthesize cpuTimeNsec=_cpuTimeNsec - In the implementation block
@property (nonatomic,readonly) NSNumber * dirtyMemoryKB;                          //@synthesize dirtyMemoryKB=_dirtyMemoryKB - In the implementation block
@property (nonatomic,readonly) NSNumber * dirtyMemoryLifetimePeakKB;              //@synthesize dirtyMemoryLifetimePeakKB=_dirtyMemoryLifetimePeakKB - In the implementation block
@property (nonatomic,readonly) NSNumber * storageDirtiedKB;                       //@synthesize storageDirtiedKB=_storageDirtiedKB - In the implementation block
@property (nonatomic,readonly) NSNumber * cpuInstructionsKI;                      //@synthesize cpuInstructionsKI=_cpuInstructionsKI - In the implementation block
+(id)_newMetricsFromData:(id)arg1 ;
+(id)_deltaDescription:(id)arg1 ;
+(id)newMetricsForSignpostEvent:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(NSNumber *)cpuTimeNsec;
-(NSNumber *)dirtyMemoryKB;
-(NSNumber *)dirtyMemoryLifetimePeakKB;
-(NSNumber *)storageDirtiedKB;
-(id)initWithSnapshotDict:(id)arg1 data:(id)arg2 ;
-(NSNumber *)cpuInstructionsKI;
-(NSData *)binarySnapshot;
@end

