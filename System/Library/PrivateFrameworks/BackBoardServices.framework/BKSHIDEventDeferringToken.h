/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BKSHIDEventDeferringToken : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying> {

	unsigned _CAContextID;
	NSString* _stringIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
+(id)tokenForIdentifierOfCAContext:(unsigned)arg1 ;
+(id)tokenForString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_string;
-(id)_initWithIdentifier:(unsigned)arg1 ;
-(id)initForProtobufDecoding;
-(id)didFinishProtobufDecodingWithError:(out id*)arg1 ;
-(id)_initWithString:(id)arg1 ;
-(BOOL)_isIdentifierOfCAContext;
-(unsigned)_identifierOfCAContext;
-(BOOL)_isString;
@end
