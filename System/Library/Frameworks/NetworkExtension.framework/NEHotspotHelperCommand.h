/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString, NEHotspotNetwork, NSArray;

@interface NEHotspotHelperCommand : NSObject {

	CNPluginCommandRef _command;

}

@property (assign) CNPluginCommandRef command;                //@synthesize command=_command - In the implementation block
@property (readonly) NSString * interfaceName; 
@property (readonly) long long commandType; 
@property (readonly) NEHotspotNetwork * network; 
@property (readonly) NSArray * networkList; 
-(id)description;
-(void)dealloc;
-(NSString *)interfaceName;
-(NEHotspotNetwork *)network;
-(void)setCommand:(CNPluginCommandRef)arg1 ;
-(CNPluginCommandRef)command;
-(NSArray *)networkList;
-(id)initWithCommand:(CNPluginCommandRef)arg1 ;
-(long long)commandType;
-(id)createResponse:(long long)arg1 ;
-(id)createTCPConnection:(id)arg1 ;
-(id)createUDPSession:(id)arg1 ;
@end
