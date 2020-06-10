/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSMutableString, NSString;

@interface NADescriptionBuilder : NSObject {

	id<NSObject> _object;
	NSMutableString* _proem;
	NSMutableString* _description;
	int _activeComponent;
	NSString* _activePrefix;
	BOOL _useDebugDescription;

}

@property (assign,nonatomic) int activeComponent;                           //@synthesize activeComponent=_activeComponent - In the implementation block
@property (nonatomic,retain) NSString * activeMultilinePrefix;              //@synthesize activePrefix=_activePrefix - In the implementation block
@property (assign,nonatomic) BOOL useDebugDescription;                      //@synthesize useDebugDescription=_useDebugDescription - In the implementation block
+(id)builderWithObject:(id)arg1 ;
+(id)descriptionForObject:(id)arg1 withObjectsAndNames:(id)arg2 ;
+(id)descriptionForObject:(id)arg1 ;
+(id)componentSeparator;
+(id)nameObjectSeparator;
+(id)succinctDescriptionForObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)appendString:(id)arg1 ;
-(id)appendFormat:(id)arg1 ;
-(id)build;
-(id)appendObject:(id)arg1 withName:(id)arg2 ;
-(id)appendObjectsAndNames:(id)arg1 args:(char*)arg2 ;
-(id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(BOOL)arg3 ;
-(id)modifyProem:(/*^block*/id)arg1 ;
-(void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 ;
-(id)appendBool:(BOOL)arg1 withName:(id)arg2 ;
-(id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3 ;
-(id)appendCString:(const char*)arg1 withName:(id)arg2 ;
-(void)tryAppendKey:(id)arg1 ;
-(void)setActiveMultilinePrefix:(NSString *)arg1 ;
-(NSString *)activeMultilinePrefix;
-(void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 ;
-(void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 objectTransformer:(/*^block*/id)arg5 ;
-(void)appendBodySectionWithName:(id)arg1 multilinePrefix:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 ;
-(void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 objectTransformer:(/*^block*/id)arg5 ;
-(void)appendDictionarySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 ;
-(void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 ;
-(void)appendString:(id)arg1 withName:(id)arg2 ;
-(id)appendBool:(BOOL)arg1 withName:(id)arg2 ifEqualTo:(BOOL)arg3 ;
-(id)appendInteger:(long long)arg1 withName:(id)arg2 ;
-(id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 ;
-(id)appendInt:(int)arg1 withName:(id)arg2 ;
-(id)appendUnsignedInt:(unsigned)arg1 withName:(id)arg2 ;
-(id)appendInt64:(long long)arg1 withName:(id)arg2 ;
-(id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2 ;
-(id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(BOOL)arg3 ;
-(id)appendPointer:(void*)arg1 withName:(id)arg2 ;
-(id)appendSelector:(SEL)arg1 withName:(id)arg2 ;
-(id)appendQueue:(id)arg1 withName:(id)arg2 ;
-(id)appendClass:(Class)arg1 withName:(id)arg2 ;
-(id)appendSuper;
-(id)appendObjectsAndNames:(id)arg1 ;
-(id)appendKey:(id)arg1 ;
-(id)appendKeys:(id)arg1 ;
-(id)modifyBody:(/*^block*/id)arg1 ;
-(void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 objectTransformer:(/*^block*/id)arg4 ;
-(int)activeComponent;
-(void)setActiveComponent:(int)arg1 ;
-(BOOL)useDebugDescription;
-(void)setUseDebugDescription:(BOOL)arg1 ;
-(id)_activeComponentString;
@end

