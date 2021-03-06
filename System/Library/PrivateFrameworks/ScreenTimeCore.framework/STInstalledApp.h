/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/STUniquedManagedObject.h>
#import <libobjc.A.dylib/STUniquelySerializableManagedObject.h>

@class NSString, STUserDeviceState, NSData;

@interface STInstalledApp : STUniquedManagedObject <STUniquelySerializableManagedObject>

@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,retain) STUserDeviceState * userDeviceState; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSData * iconData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)bundleIdentifiersInstalledForDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)computeUniqueIdentifier;
@end

