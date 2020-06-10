/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGGraphDataModelEnrichmentProcessor.h>

@class NSString;

@interface PGGraphSearchEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundJobName;
+(double)backgroundJobTimeout;
+(BOOL)supportsBackgroundJob;
-(void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(BOOL)_shouldProcessGraphUpdate:(id)arg1 ;
-(void)_processGraphUpdateInventory:(id)arg1 manager:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

