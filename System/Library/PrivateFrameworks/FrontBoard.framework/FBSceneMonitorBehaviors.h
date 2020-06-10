/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBSceneMonitorBehaviors : NSObject <NSCopying> {

	BOOL _monitorsSettings;
	BOOL _monitorsPairingStatus;
	BOOL _monitorsClientSettings;

}

@property (assign,nonatomic) BOOL monitorsClientSettings;              //@synthesize monitorsClientSettings=_monitorsClientSettings - In the implementation block
@property (assign,nonatomic) BOOL monitorsSettings;                    //@synthesize monitorsSettings=_monitorsSettings - In the implementation block
@property (assign,nonatomic) BOOL monitorsPairingStatus;               //@synthesize monitorsPairingStatus=_monitorsPairingStatus - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMonitorsSettings:(BOOL)arg1 ;
-(void)setMonitorsPairingStatus:(BOOL)arg1 ;
-(void)setMonitorsClientSettings:(BOOL)arg1 ;
-(BOOL)monitorsPairingStatus;
-(BOOL)monitorsSettings;
-(BOOL)monitorsClientSettings;
@end

