/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAccessControl.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableSet, NSArray;

@interface HMMediaContentProfileAccessControl : HMAccessControl <NSCopying, NSMutableCopying> {

	NSMutableSet* _internalAccessories;

}

@property (copy,readonly) NSArray * accessories; 
+(id)shortDescription;
+(BOOL)isAccessorySupported:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)initWithUser:(id)arg1 ;
-(id)shortDescription;
-(NSArray *)accessories;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithUser:(id)arg1 accessories:(id)arg2 ;
@end

