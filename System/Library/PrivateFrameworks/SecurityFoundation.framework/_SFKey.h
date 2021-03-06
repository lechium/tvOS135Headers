/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSData, _SFKeySpecifier, NSString;

@interface _SFKey : NSObject {

	id _keyInternal;
	NSData* _keyData;

}

@property (nonatomic,readonly) NSData * keyData;                                 //@synthesize keyData=_keyData - In the implementation block
@property (nonatomic,copy,readonly) _SFKeySpecifier * keySpecifier; 
@property (nonatomic,copy,readonly) NSString * keyDomain; 
+(Class)_attributesClass;
+(id)_specifierForSecKey:(_SecKey*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(NSData *)keyData;
-(_SFKeySpecifier *)keySpecifier;
-(NSString *)keyDomain;
-(id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3 ;
-(id)initRandomKeyWithSpecifier:(id)arg1 ;
@end

