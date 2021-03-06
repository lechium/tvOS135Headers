/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface CABehavior : NSObject <NSSecureCoding, NSCopying> {

	void* _attr;
	unsigned _refcount;
	unsigned _uid;

}

@property (getter=isEnabled) BOOL enabled; 
@property (copy) NSString * name; 
@property (__weak) id<CABehaviorDelegate> delegate; 
@property (copy) NSDictionary * style; 
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)behavior;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<CABehaviorDelegate>)delegate;
-(void)setDelegate:(id<CABehaviorDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(NSDictionary *)style;
-(void)setStyle:(NSDictionary *)arg1 ;
-(BOOL)isEnabled;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
@end

