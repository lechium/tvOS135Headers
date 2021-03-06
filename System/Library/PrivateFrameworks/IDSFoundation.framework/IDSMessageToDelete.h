/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSMessageToDelete : NSObject {

	unsigned _dataProtectionClass;
	NSString* _guid;
	NSString* _alternateGUID;

}

@property (assign) unsigned dataProtectionClass;                                   //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (setter=setGUID:,retain) NSString * guid;                                //@synthesize guid=_guid - In the implementation block
@property (setter=setAlternateGUID:,retain) NSString * alternateGUID;              //@synthesize alternateGUID=_alternateGUID - In the implementation block
-(NSString *)guid;
-(unsigned)dataProtectionClass;
-(void)setDataProtectionClass:(unsigned)arg1 ;
-(void)setGUID:(id)arg1 ;
-(NSString *)alternateGUID;
-(void)setAlternateGUID:(NSString *)arg1 ;
@end

