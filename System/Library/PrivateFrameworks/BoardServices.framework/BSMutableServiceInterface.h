/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BoardServices-Structs.h>
#import <BoardServices/BSServiceInterface.h>

@class NSString, BSObjCProtocol;

@interface BSMutableServiceInterface : BSServiceInterface

@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) long long clientMessagingExpectation; 
@property (nonatomic,copy) BSObjCProtocol * server; 
@property (nonatomic,copy) BSObjCProtocol * client; 
+(id)interfaceWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setServer:(BSObjCProtocol *)arg1 ;
-(void)setClient:(BSObjCProtocol *)arg1 ;
-(void)setClientMessagingExpectation:(long long)arg1 ;
@end

