/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSNumber, NSString, NSArray;

@interface AVAudioSessionDataSourceDescription : NSObject {

	void* _impl;

}

@property (readonly) NSNumber * dataSourceID; 
@property (readonly) NSString * dataSourceName; 
@property (readonly) NSString * location; 
@property (readonly) NSString * orientation; 
@property (readonly) NSArray * supportedPolarPatterns; 
@property (readonly) NSString * selectedPolarPattern; 
@property (readonly) NSString * preferredPolarPattern; 
+(id)privateCreateArray:(id)arg1 portID:(id)arg2 sessionID:(unsigned)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(NSString *)orientation;
-(NSString *)location;
-(id)initWithSessionID:(unsigned)arg1 ;
-(BOOL)isEqualToDataSource:(id)arg1 ;
-(NSNumber *)dataSourceID;
-(NSString *)dataSourceName;
-(NSString *)selectedPolarPattern;
-(NSString *)preferredPolarPattern;
-(NSArray *)supportedPolarPatterns;
-(BOOL)setPreferredPolarPattern:(id)arg1 error:(id*)arg2 ;
-(DataSourceDescriptionImpl*)privateGetImplementation;
-(BOOL)privateMatchesRawDescription:(id)arg1 ;
-(id)initWithRawSourceDescription:(id)arg1 andOwningPortID:(id)arg2 andSessionID:(unsigned)arg3 ;
-(void)configurePolarPatterns:(id)arg1 ;
-(id)privateGetOwningPortID;
@end

