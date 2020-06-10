/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSMutableDictionary;


@protocol UIElementProtocol <NSObject,NSCopying>
@property (nonatomic,copy,readonly) NSMutableDictionary * cachedAttributes; 
@required
+(void)applyElementAttributeCacheScheme:(unsigned long long)arg1;
+(id)uiElementAtCoordinate:(CGPoint)arg1;
+(id)uiElementAtCoordinate:(CGPoint)arg1 forApplication:(AXUIElementRef)arg2 contextId:(unsigned)arg3;
-(BOOL)isValid;
-(int)pid;
-(void)disableCache;
-(id)stringWithAXAttribute:(long long)arg1;
-(CGRect*)rectWithAXAttribute:(long long)arg1;
-(id)numberWithAXAttribute:(long long)arg1;
-(CGPoint*)pointWithAXAttribute:(long long)arg1;
-(NSRange*)rangeWithAXAttribute:(long long)arg1;
-(id)objectWithAXAttribute:(long long)arg1 parameter:(void*)arg2;
-(id)objectWithAXAttribute:(long long)arg1;
-(BOOL)isMockElement;
-(void)enableCache:(BOOL)arg1;
-(BOOL)canPerformAXAction:(int)arg1;
-(id)arrayWithAXAttribute:(long long)arg1;
-(BOOL)boolWithAXAttribute:(long long)arg1;
-(CGPathRef)pathWithAXAttribute:(long long)arg1;
-(NSMutableDictionary *)cachedAttributes;
-(id)uiElementsWithAttribute:(long long)arg1;
-(id)uiElementsWithAttribute:(long long)arg1 parameter:(void*)arg2;
-(BOOL)performAXAction:(int)arg1;
-(BOOL)performAXAction:(int)arg1 withValue:(id)arg2;
-(BOOL)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned)arg3;
-(id)previousElementsWithCount:(unsigned long long)arg1;
-(id)nextElementsWithCount:(unsigned long long)arg1;
-(id)uiElementsWithAttribute:(long long)arg1 parameter:(void*)arg2 fetchAttributes:(BOOL)arg3;
-(BOOL)isValidForApplication:(id)arg1;
-(void)updateCacheWithAttributes:(id)arg1;
-(void)updateCache:(long long)arg1;
-(void)setAXAttribute:(long long)arg1 withBOOL:(BOOL)arg2;
-(void)setAXAttribute:(long long)arg1 withString:(id)arg2;
-(void)setAXAttribute:(long long)arg1 withLong:(long long)arg2;
-(void)setAXAttribute:(long long)arg1 withFloat:(float)arg2;
-(void)setAXAttribute:(long long)arg1 withNumber:(id)arg2;
-(void)setAXAttribute:(long long)arg1 withPoint:(CGPoint)arg2;
-(void)setAXAttribute:(long long)arg1 withSize:(CGSize)arg2;
-(void)setAXAttribute:(long long)arg1 withRange:(NSRange)arg2;
-(void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2;
-(void)setAXAttribute:(long long)arg1 withUIElementArray:(id)arg2;
-(void)setAXAttribute:(long long)arg1 withArray:(id)arg2;
-(void)setAXAttribute:(long long)arg1 withObject:(id)arg2;
-(void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(BOOL)arg3;
-(NSRange*)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(NSRange*)arg3 currentCursorRange:(NSRange)arg4;
-(CGColorRef)colorWithAXAttribute:(long long)arg1;
-(NSRange*)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(NSRange*)arg3;

@end

