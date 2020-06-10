/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSCTPNRInfo : NSObject {

	NSString* _PLMN;
	NSString* _IMSI;
	NSString* _PNRPhoneNumber;
	NSString* _phoneBookNumber;

}

@property (nonatomic,retain) NSString * PLMN;                         //@synthesize PLMN=_PLMN - In the implementation block
@property (nonatomic,retain) NSString * IMSI;                         //@synthesize IMSI=_IMSI - In the implementation block
@property (nonatomic,retain) NSString * PNRPhoneNumber;               //@synthesize PNRPhoneNumber=_PNRPhoneNumber - In the implementation block
@property (nonatomic,retain) NSString * phoneBookNumber;              //@synthesize phoneBookNumber=_phoneBookNumber - In the implementation block
-(NSString *)IMSI;
-(void)setIMSI:(NSString *)arg1 ;
-(NSString *)phoneBookNumber;
-(void)setPhoneBookNumber:(NSString *)arg1 ;
-(id)initWithIMSI:(id)arg1 PLMN:(id)arg2 PNRPhoneNumber:(id)arg3 phoneBookNumber:(id)arg4 ;
-(NSString *)PLMN;
-(void)setPLMN:(NSString *)arg1 ;
-(NSString *)PNRPhoneNumber;
-(void)setPNRPhoneNumber:(NSString *)arg1 ;
@end

