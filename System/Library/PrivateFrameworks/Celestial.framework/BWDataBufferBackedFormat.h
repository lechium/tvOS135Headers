/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol BWDataBufferBackedFormat <NSObject>
@property (nonatomic,readonly) unsigned long long dataBufferSize; 
@property (nonatomic,readonly) unsigned dataFormat; 
@property (nonatomic,readonly) NSDictionary * dataBufferAttributes; 
@required
-(NSDictionary *)dataBufferAttributes;
-(unsigned long long)dataBufferSize;
-(unsigned)dataFormat;

@end
