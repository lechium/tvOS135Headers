/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/AirTraffic-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface ATAccountInfo : NSObject <NSCopying> {

	NSString* _altDSID;
	NSString* _appleID;
	NSNumber* _DSID;

}

@property (nonatomic,readonly) NSString * appleID;              //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,readonly) NSString * altDSID;              //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,readonly) NSNumber * DSID;                 //@synthesize DSID=_DSID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)altDSID;
-(NSString *)appleID;
-(NSNumber *)DSID;
@end

