/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NRRegistry, NSMutableDictionary, NSPointerArray, NSMutableArray;

@interface NRDevice : NSObject <NSSecureCoding> {

	NRDevice* _me;
	os_unfair_lock_s _lock;
	NSUUID* _pairingID;
	NRRegistry* _registry;
	NSMutableDictionary* _oldPropertiesForChangeNotifications;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _observers;
	NSPointerArray* _promiscuousObservers;
	NSMutableDictionary* _changeBlocks;
	NSMutableArray* _promiscuousChangeBlocks;

}

@property (nonatomic,retain) NRRegistry * registry;                                                  //@synthesize registry=_registry - In the implementation block
@property (nonatomic,retain) NSUUID * pairingID;                                                     //@synthesize pairingID=_pairingID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * oldPropertiesForChangeNotifications;              //@synthesize oldPropertiesForChangeNotifications=_oldPropertiesForChangeNotifications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * properties;                                       //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observers;                                        //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSPointerArray * promiscuousObservers;                                  //@synthesize promiscuousObservers=_promiscuousObservers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * changeBlocks;                                     //@synthesize changeBlocks=_changeBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * promiscuousChangeBlocks;                               //@synthesize promiscuousChangeBlocks=_promiscuousChangeBlocks - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSMutableDictionary *)properties;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(void)setProperties:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)observers;
-(void)setObservers:(NSMutableDictionary *)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(NSUUID *)pairingID;
-(BOOL)supportsCapability:(id)arg1 ;
-(id)initWithRegistry:(id)arg1 diff:(id)arg2 pairingID:(id)arg3 notify:(BOOL)arg4 ;
-(BOOL)canMigrate;
-(BOOL)archived;
-(id)migrationError;
-(BOOL)migrationConfirmed;
-(void)_fireChangeNotificationsForDiff:(id)arg1 secureProperties:(id)arg2 notify:(BOOL)arg3 ;
-(void)_updateSelfRetain;
-(void)_notifySecurePropertiesWithCollection:(id)arg1 secureProperties:(id)arg2 ;
-(void)_queueFirePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2 ;
-(id)propertyNames;
-(void)queueAddPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
-(void)queueRemovePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
-(void)postNotification:(id)arg1 withUserInfo:(id)arg2 ;
-(void)queueRegisterForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)queueUnregisterForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)addPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
-(void)removePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
-(void)registerForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)unregisterForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setPairingID:(NSUUID *)arg1 ;
-(NRRegistry *)registry;
-(void)setRegistry:(NRRegistry *)arg1 ;
-(NSMutableDictionary *)oldPropertiesForChangeNotifications;
-(void)setOldPropertiesForChangeNotifications:(NSMutableDictionary *)arg1 ;
-(NSPointerArray *)promiscuousObservers;
-(void)setPromiscuousObservers:(NSPointerArray *)arg1 ;
-(NSMutableDictionary *)changeBlocks;
-(void)setChangeBlocks:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)promiscuousChangeBlocks;
-(void)setPromiscuousChangeBlocks:(NSMutableArray *)arg1 ;
@end
