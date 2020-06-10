/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface WFSSHKeyEncoder : NSObject {

	NSMutableData* _data;

}

@property (nonatomic,readonly) NSMutableData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long encodedLength; 
@property (nonatomic,readonly) NSData * encodedData; 
-(id)init;
-(NSMutableData *)data;
-(NSData *)encodedData;
-(unsigned long long)encodedLength;
-(void)encodeString:(id)arg1 ;
-(void)encodeData:(id)arg1 ;
-(void)encodeChar:(char)arg1 ;
-(void)encodeInteger:(unsigned)arg1 ;
-(void)encodeStringWithPreceedingLength:(id)arg1 ;
-(void)encodeDataWithPreceedingLength:(id)arg1 ;
@end

