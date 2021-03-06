/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PVEffect, NSMutableDictionary, NSString;

@interface ClipBackground : NSObject <NSCopying> {

	PVEffect* _effect;
	int _type;
	NSMutableDictionary* _backgroundEffectSettings;

}

@property (assign,nonatomic) int type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backgroundEffectSettings;              //@synthesize backgroundEffectSettings=_backgroundEffectSettings - In the implementation block
@property (nonatomic,readonly) NSString * effectID; 
@property (nonatomic,readonly) PVEffect * backgroundEffect; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)effectID;
-(void)setBackgroundEffectSettings:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)backgroundEffectSettings;
-(PVEffect *)backgroundEffect;
@end

