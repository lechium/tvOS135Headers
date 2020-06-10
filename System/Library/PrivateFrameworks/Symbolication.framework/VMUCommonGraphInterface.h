/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class VMUClassInfoMap, NSString;


@protocol VMUCommonGraphInterface <NSObject>
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) BOOL is64bit; 
@property (nonatomic,readonly) unsigned vmPageSize; 
@property (nonatomic,readonly) VMUClassInfoMap * realizedClasses; 
@property (nonatomic,readonly) unsigned zoneCount; 
@property (nonatomic,readonly) unsigned regionCount; 
@property (nonatomic,readonly) unsigned nodeCount; 
@property (nonatomic,readonly) unsigned nodeNamespaceSize; 
@property (nonatomic,readonly) NSString * processName; 
@property (nonatomic,readonly) NSString * processDescriptionString; 
@property (nonatomic,readonly) NSString * executablePath; 
@property (nonatomic,readonly) NSString * binaryImagesDescription; 
@property (nonatomic,readonly) unsigned long long physicalFootprint; 
@property (nonatomic,readonly) unsigned long long physicalFootprintPeak; 
@required
-(NSString *)executablePath;
-(NSString *)processName;
-(int)pid;
-(unsigned)enumerateObjectsWithBlock:(/*^block*/id)arg1;
-(NSString *)binaryImagesDescription;
-(unsigned long long)physicalFootprint;
-(unsigned long long)physicalFootprintPeak;
-(VMUClassInfoMap *)realizedClasses;
-(void)refineTypesWithOverlay:(id)arg1;
-(unsigned)nodeForAddress:(unsigned long long)arg1;
-(BOOL)is64bit;
-(unsigned)nodeNamespaceSize;
-(void)markReachableNodesFromRoots:(void*)arg1 inMap:(void*)arg2;
-(id)labelForNode:(unsigned)arg1;
-(/*function pointer*/void**)nodeDetails:(unsigned)arg1;
-(id)vmuVMRegionForAddress:(unsigned long long)arg1;
-(void*)contentForNode:(unsigned)arg1;
-(void*)copyUserMarked;
-(id)zoneNameForIndex:(unsigned)arg1;
-(id)vmuVMRegionForNode:(unsigned)arg1;
-(unsigned)enumerateMarkedObjects:(void*)arg1 withBlock:(/*^block*/id)arg2;
-(unsigned)enumerateRegionsWithBlock:(/*^block*/id)arg1;
-(unsigned)enumerateReferencesWithBlock:(/*^block*/id)arg1;
-(BOOL)hasLabelsForNodes;
-(id)shortLabelForNode:(unsigned)arg1;
-(unsigned)vmPageSize;
-(unsigned)zoneCount;
-(unsigned)regionCount;
-(unsigned)nodeCount;
-(NSString *)processDescriptionString;

@end

