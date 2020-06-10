/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface TVCKMonitoredItemInfo : NSObject <NSCopying> {

	NSNumber* _itemID;
	long long _status;
	unsigned long long _countOfMonitoringClients;

}

@property (assign,nonatomic) long long status;                                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long countOfMonitoringClients;              //@synthesize countOfMonitoringClients=_countOfMonitoringClients - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * itemID;                                 //@synthesize itemID=_itemID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)status;
-(NSNumber *)itemID;
-(void)setStatus:(long long)arg1 ;
-(id)initWithItemID:(id)arg1 ;
-(void)didAddMonitoringClient;
-(void)didRemoveMonitoringClient;
-(unsigned long long)countOfMonitoringClients;
-(void)setCountOfMonitoringClients:(unsigned long long)arg1 ;
@end

