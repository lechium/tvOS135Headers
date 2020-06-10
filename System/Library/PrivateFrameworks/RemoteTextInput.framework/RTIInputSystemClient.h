/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTIInputSystemSessionResponseProtocol.h>
#import <libobjc.A.dylib/RTIInputSystemSessionProtocol.h>

@protocol RTIInputSystemClientDelegate;
@class NSMutableDictionary, NSMutableSet, NSArray, NSString;

@interface RTIInputSystemClient : NSObject <RTIInputSystemSessionResponseProtocol, RTIInputSystemSessionProtocol> {

	unsigned long long _environmentOptions;
	BOOL _isInDealloc;
	unsigned long long _currentEnvironmentOptions;
	id<RTIInputSystemClientDelegate> _delegate;
	NSMutableDictionary* _activeSessions;
	NSMutableSet* _begunSessionIDs;
	NSMutableSet* _allowanceRequestors;
	NSArray* _machNames;
	NSMutableDictionary* _connections;
	NSMutableSet* _endpointConnections;

}

@property (nonatomic,retain) NSMutableDictionary * activeSessions;                               //@synthesize activeSessions=_activeSessions - In the implementation block
@property (nonatomic,retain) NSMutableSet * begunSessionIDs;                                     //@synthesize begunSessionIDs=_begunSessionIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * allowanceRequestors;                                 //@synthesize allowanceRequestors=_allowanceRequestors - In the implementation block
@property (nonatomic,retain) NSArray * machNames;                                                //@synthesize machNames=_machNames - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connections;                                  //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) NSMutableSet * endpointConnections;                                 //@synthesize endpointConnections=_endpointConnections - In the implementation block
@property (getter=isEnvironmentEnabled,nonatomic,readonly) BOOL environmentEnabled; 
@property (nonatomic,readonly) unsigned long long currentEnvironmentOptions;                     //@synthesize currentEnvironmentOptions=_currentEnvironmentOptions - In the implementation block
@property (assign,nonatomic,__weak) id<RTIInputSystemClientDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<RTIInputSystemClientDelegate>)delegate;
-(void)setDelegate:(id<RTIInputSystemClientDelegate>)arg1 ;
-(NSMutableDictionary *)connections;
-(void)setConnections:(NSMutableDictionary *)arg1 ;
-(void)addEndpoint:(id)arg1 ;
-(void)removeEndpoint:(id)arg1 ;
-(NSMutableDictionary *)activeSessions;
-(oneway void)performTextOperations:(id)arg1 ;
-(oneway void)performTextOperations:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(oneway void)beginRemoteTextInputSessionWithID:(id)arg1 documentTraits:(id)arg2 initialDocumentState:(id)arg3 ;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 documentDidChange:(id)arg2 ;
-(oneway void)endRemoteTextInputSessionWithID:(id)arg1 ;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 documentTraitsDidChange:(id)arg2 ;
-(void)_initializeConnection:(id)arg1 withMachName:(id)arg2 ;
-(void)_beginAllActiveSessionsForServices:(id)arg1 ;
-(void)_modifyTextEditingAllowedForReason:(id)arg1 notify:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)isEnvironmentEnabled;
-(BOOL)_remoteTextEditingIsAllowed;
-(NSMutableSet *)begunSessionIDs;
-(void)enumerateServices:(id)arg1 force:(BOOL)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_endAllActiveSessionsForServices:(id)arg1 ;
-(void)_beginSessionWithID:(id)arg1 forServices:(id)arg2 ;
-(void)_endSessionWithID:(id)arg1 forServices:(id)arg2 ;
-(void)_beginAllActiveSessions;
-(void)notifyServiceOfPause:(BOOL)arg1 withReason:(id)arg2 ;
-(void)_endAllActiveSessions;
-(void)_updateTextForSessionWithID:(id)arg1 ;
-(void)_updateAttributesForSessionWithID:(id)arg1 ;
-(id)initWithMachNames:(id)arg1 ;
-(void)beginAllowingRemoteTextInput:(id)arg1 ;
-(void)endAllowingRemoteTextInput:(id)arg1 ;
-(void)setEnvironmentEnabled:(BOOL)arg1 withReason:(id)arg2 ;
-(void)setEnvironmentOptions:(unsigned long long)arg1 withReason:(id)arg2 ;
-(unsigned long long)currentEnvironmentOptions;
-(void)setActiveSessions:(NSMutableDictionary *)arg1 ;
-(void)setBegunSessionIDs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)allowanceRequestors;
-(void)setAllowanceRequestors:(NSMutableSet *)arg1 ;
-(NSArray *)machNames;
-(void)setMachNames:(NSArray *)arg1 ;
-(NSMutableSet *)endpointConnections;
-(void)setEndpointConnections:(NSMutableSet *)arg1 ;
@end

