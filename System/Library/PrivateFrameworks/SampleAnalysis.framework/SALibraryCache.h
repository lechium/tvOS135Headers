/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSArray;


@protocol SALibraryCache <NSObject>
@property (readonly) NSUUID * uuid; 
@property (readonly) NSArray * binaryLoadInfos; 
@property (readonly) unsigned long long textSegmentsStartAddress; 
@property (readonly) unsigned long long textSegmentsEndAddress; 
@required
-(NSUUID *)uuid;
-(NSArray *)binaryLoadInfos;
-(unsigned long long)textSegmentsStartAddress;
-(unsigned long long)textSegmentsEndAddress;

@end

