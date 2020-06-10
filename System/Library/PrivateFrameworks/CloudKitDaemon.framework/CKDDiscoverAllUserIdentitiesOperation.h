/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDiscoverUserIdentitiesOperation.h>

@class NSMutableDictionary;

@interface CKDDiscoverAllUserIdentitiesOperation : CKDDiscoverUserIdentitiesOperation {

	NSMutableDictionary* _contactIdentifiersByLookupInfo;

}

@property (nonatomic,retain) NSMutableDictionary * contactIdentifiersByLookupInfo;              //@synthesize contactIdentifiersByLookupInfo=_contactIdentifiersByLookupInfo - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3 ;
-(void)setContactIdentifiersByLookupInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)contactIdentifiersByLookupInfo;
-(void)_discoverIdentitiesBatched:(id)arg1 ;
@end

