/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/TestProbe.h>

@protocol BonjourProbeDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary;

@interface BonjourProbe : TestProbe {

	BonjourBrowserRef bonjourManagerRef;
	BOOL _includeAWDL;
	id<BonjourProbeDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _scanQueue;
	NSMutableDictionary* _currentlyDiscoveredServices;
	NSMutableDictionary* _allDiscoveredServices;
	NSMutableDictionary* _resolvers;
	NSObject*<OS_dispatch_source> _bonjourBrowserTimer;
	double _bonjourBrowserTimerDuration;
	DNSServiceRef_tRef _dnsRef;

}

@property (nonatomic,retain) NSMutableDictionary * resolvers;                                //@synthesize resolvers=_resolvers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> bonjourBrowserTimer;              //@synthesize bonjourBrowserTimer=_bonjourBrowserTimer - In the implementation block
@property (assign,nonatomic) double bonjourBrowserTimerDuration;                             //@synthesize bonjourBrowserTimerDuration=_bonjourBrowserTimerDuration - In the implementation block
@property (assign,nonatomic) DNSServiceRef_tRef dnsRef;                                      //@synthesize dnsRef=_dnsRef - In the implementation block
@property (retain) id<BonjourProbeDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> scanQueue;                         //@synthesize scanQueue=_scanQueue - In the implementation block
@property (assign) BOOL includeAWDL;                                                         //@synthesize includeAWDL=_includeAWDL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentlyDiscoveredServices;              //@synthesize currentlyDiscoveredServices=_currentlyDiscoveredServices - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allDiscoveredServices;                    //@synthesize allDiscoveredServices=_allDiscoveredServices - In the implementation block
-(id<BonjourProbeDelegate>)delegate;
-(void)setDelegate:(id<BonjourProbeDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(NSMutableDictionary *)resolvers;
-(void)setResolvers:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)scanQueue;
-(void)setScanQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)stopTest;
-(void)cancelTest:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)allDiscoveredServices;
-(BOOL)loadBonjourSymbols;
-(void)setBonjourBrowserTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)bonjourBrowserTimer;
-(void)stopAllResolvers;
-(NSMutableDictionary *)currentlyDiscoveredServices;
-(void)startBonjourScanForService:(id)arg1 onInterfaceNamed:(id)arg2 ;
-(void)dnsResolver:(id)arg1 encounteredDNSError:(int)arg2 ;
-(BOOL)includeAWDL;
-(void)setIncludeAWDL:(BOOL)arg1 ;
-(void)setCurrentlyDiscoveredServices:(NSMutableDictionary *)arg1 ;
-(void)setAllDiscoveredServices:(NSMutableDictionary *)arg1 ;
-(double)bonjourBrowserTimerDuration;
-(void)setBonjourBrowserTimerDuration:(double)arg1 ;
-(DNSServiceRef_tRef)dnsRef;
-(void)setDnsRef:(DNSServiceRef_tRef)arg1 ;
@end

