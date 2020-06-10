/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSArray;

@interface GKEntity : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _components;

}

@property (nonatomic,retain,readonly) NSArray * components; 
+(BOOL)supportsSecureCoding;
+(id)entity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)components;
-(void)addComponent:(id)arg1 ;
-(void)removeComponent:(id)arg1 ;
-(id)componentForKey:(id)arg1 ;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)removeComponentForClass:(Class)arg1 ;
-(id)componentForClass:(Class)arg1 ;
@end
