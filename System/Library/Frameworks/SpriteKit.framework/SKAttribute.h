/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SKAttribute : NSObject <NSSecureCoding> {

	long long _type;
	NSString* _name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _nameString;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long type; 
+(BOOL)supportsSecureCoding;
+(id)attributeWithName:(id)arg1 type:(long long)arg2 ;
-(NSString *)name;
-(id)init;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 ;
-(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)getNameString;
-(BOOL)isEqualToAttribute:(id)arg1 ;
@end

