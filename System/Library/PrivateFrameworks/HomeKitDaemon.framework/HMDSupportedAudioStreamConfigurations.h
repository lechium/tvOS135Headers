/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HMDSupportedAudioStreamConfigurations : NSObject <NSCopying> {

	NSMutableArray* _configurations;

}

@property (nonatomic,retain) NSMutableArray * configurations;              //@synthesize configurations=_configurations - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSMutableArray *)configurations;
-(void)setConfigurations:(NSMutableArray *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithConfigurations:(id)arg1 ;
@end

