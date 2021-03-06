/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPAnimationPath.h>
#import <libobjc.A.dylib/MPAnimationSupport.h>

@class NSMutableDictionary, NSString;

@interface MPAnimationPathCombo : MPAnimationPath <MPAnimationSupport> {

	NSMutableDictionary* _animationPaths;
	NSString* _operation;
	NSString* _key;

}

@property (nonatomic,copy) NSString * key;                    //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * operation;              //@synthesize operation=_operation - In the implementation block
+(id)animationPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)key;
-(void)cleanup;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)operation;
-(void)setOperation:(NSString *)arg1 ;
-(id)animationPaths;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(void)setAnimationPath:(id)arg1 ;
@end

