/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSData, NSMutableDictionary;

@interface ICDelegationPlayInfoTokenRequest : NSObject <NSCopying> {

	NSNumber* _DSID;
	NSData* _cloudCredentialsTokenData;
	NSData* _SICData;

}

@property (nonatomic,copy) NSNumber * DSID;                                                        //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSData * cloudCredentialsTokenData;                                     //@synthesize cloudCredentialsTokenData=_cloudCredentialsTokenData - In the implementation block
@property (setter=ICData,nonatomic,copy) NSData * SICData;                                         //@synthesize SICData=_SICData - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * propertyListRepresentation; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSICData:(NSData *)arg1 ;
-(NSNumber *)DSID;
-(void)setDSID:(NSNumber *)arg1 ;
-(NSData *)SICData;
-(NSMutableDictionary *)propertyListRepresentation;
-(id)initWithDSID:(id)arg1 SICData:(id)arg2 ;
-(NSData *)cloudCredentialsTokenData;
-(void)setCloudCredentialsTokenData:(NSData *)arg1 ;
@end
