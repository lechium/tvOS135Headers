/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/_UTTypeQuery.h>

@class NSString;

@interface _UTTypeQueryWithParentIdentifier : _UTTypeQuery {

	NSString* _parentIdentifier;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_canResolveLocallyWithoutMappingDatabase;
-(BOOL)canIdentifierHaveChildren;
-(id)initWithParentIdentifier:(id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
@end

