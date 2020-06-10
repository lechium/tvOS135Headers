/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterWANStatusList : NSObject <NSCopying, HMDTLVProtocol> {

	NSMutableArray* _statuses;

}

@property (nonatomic,retain) NSMutableArray * statuses;              //@synthesize statuses=_statuses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setStatuses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)statuses;
-(id)initWithStatuses:(id)arg1 ;
@end

