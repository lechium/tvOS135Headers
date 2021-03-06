/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/_UTType.h>

@class NSString, NSSet;

@interface _UTConcreteType : _UTType {

	NSString* _identifier;
	NSSet* _pedigree;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)version;
-(BOOL)_isActive;
-(BOOL)isDynamic;
-(id)parentIdentifiers;
-(BOOL)conformsToType:(id)arg1 ;
-(id)_iconURL;
-(id)referenceURL;
-(BOOL)_isAppleInternal;
-(id)declaration;
-(id)declaringBundleURL;
-(BOOL)isDeclared;
-(id)tagSpecification;
-(BOOL)conformsToTypeIdentifier:(id)arg1 ;
-(BOOL)_isPublic;
-(id)_unlocalizedDescription;
-(id)_localizedDescriptionDictionary;
-(id)_kernelExtensionName;
-(id)_pedigree;
-(id)initWithIdentifier:(id)arg1 pedigree:(id)arg2 ;
@end

