/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, BSObjCProtocol;

@interface BSServiceInterface : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding> {

	NSString* _identifier;
	BSObjCProtocol* _server;
	BSObjCProtocol* _client;
	CFBooleanRef _clientWaitsForActivation;

}

@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long clientMessagingExpectation; 
@property (nonatomic,copy,readonly) BSObjCProtocol * server;                      //@synthesize server=_server - In the implementation block
@property (nonatomic,copy,readonly) BSObjCProtocol * client;                      //@synthesize client=_client - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interfaceWithServer:(id)arg1 client:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(NSString *)identifier;
-(BSObjCProtocol *)client;
-(void)setIdentifier:(NSString *)arg1 ;
-(BSObjCProtocol *)server;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)_initWithIdentifier:(id)arg1 server:(id)arg2 client:(id)arg3 clientWaitsForActivation:(CFBooleanRef)arg4 ;
-(long long)clientMessagingExpectation;
@end

