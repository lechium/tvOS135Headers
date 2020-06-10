/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PBCodable, TBLocalFetchRequestDescriptor, NSSet;


@protocol TBFetchRequestDescriptor <NSObject>
@property (nonatomic,readonly) PBCodable * remoteRequest; 
@property (nonatomic,readonly) Class remoteRequestClass; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) TBLocalFetchRequestDescriptor * localFetchDescriptor; 
@property (nonatomic,readonly) TBLocalFetchRequestDescriptor * preferLocalFetchDescriptor; 
@property (nonatomic,readonly) NSSet * tileItems; 
@optional
-(NSSet *)tileItems;
-(TBLocalFetchRequestDescriptor *)preferLocalFetchDescriptor;

@required
-(unsigned long long)type;
-(PBCodable *)remoteRequest;
-(Class)remoteRequestClass;
-(TBLocalFetchRequestDescriptor *)localFetchDescriptor;

@end
